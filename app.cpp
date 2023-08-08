// tag::walker_def[]
#include "app.h"
#include "util.h"

#include "Motor.h"

#include "Polling.h"
#include "MyColorSensor.h"
#include "Brightness.h"
#include "Length.h"
#include "TurnAngle.h"
#include "Odometry.h"
#include "Velocity.h"
#include "HsvHue.h"
#include "HsvSatu.h"
#include "SimpleWalker.h"
#include "SpeedControl.h"
#include "LineTracer.h"
#include "ArmAngle.h"
#include "TeelAngle.h"

#include "MoveArm.h"

#include "Scene.h"

using namespace ev3api;

int log_max=30000;
int log_idx=0;

double msg_logbuf[30000][10];

Motor       *gLeftWheel = new Motor(PORT_C,false,LARGE_MOTOR);
Motor       *gRightWheel = new Motor(PORT_B,false,LARGE_MOTOR);
Motor       *gArm = new Motor(PORT_A,true,LARGE_MOTOR);
Motor       *gTeel = new Motor(PORT_D,true,MEDIUM_MOTOR);

Polling *gPolling;
MyColorSensor *gColor;
Brightness *gBrightness;
HsvHue *gHue;
HsvSatu *gSatu;

ArmAngle *gArmAngle;
TeelAngle *gTeelAngle;

Odometry *gOdo;
Length *gLength;
TurnAngle *gTurnAngle;
Velocity *gVelocity;

SpeedControl *gSpeed;
SimpleWalker *gWalker;
MoveArm *gMoveArm;
MoveTeel *gMoveTeel;
LineTracer *gTracer;
Xpoint *gXpoint;
Ypoint *gYpoint;

Scene *gScene;


static void user_system_create() {

  gBrightness = new Brightness();
  gHue = new HsvHue();
  gSatu = new HsvSatu();

  gColor = new MyColorSensor(PORT_2,gBrightness,gHue,gSatu);
  gLength = new Length();
  gTurnAngle = new TurnAngle();
  gXpoint = new Xpoint();
  gYpoint = new Ypoint();
  gVelocity = new Velocity();

  gOdo = new Odometry(gLeftWheel,gRightWheel,gLength,gTurnAngle,gVelocity,gXpoint,gYpoint);
  gArmAngle = new ArmAngle();
  gTeelAngle = new TeelAngle();
  //gOdo = new Odometry(gLeftWheel,gRightWheel,gLength,gTurnAngle,gVelocity);
  gSpeed = new SpeedControl(gOdo,gVelocity);  
  gWalker = new SimpleWalker(gOdo,gSpeed); 
  gMoveArm = new MoveArm(gOdo);
  gMoveTeel = new MoveTeel(gOdo);
  gTracer = new LineTracer(gOdo,gSpeed);

  gPolling = new Polling(gColor,gOdo);

  gScene = new Scene();

}
static void user_system_destroy() {

  delete gColor;
  delete gPolling;

}


void main_task(intptr_t unused) {
  user_system_create();

  sta_cyc(POLLING_CYC);
  sta_cyc(TRACER_CYC);

  slp_tsk();

  stp_cyc(POLLING_CYC);
  stp_cyc(TRACER_CYC);

  gLeftWheel->setPWM(0);
  gRightWheel->setPWM(0);

  ext_tsk();

  user_system_destroy();
}
// end::main_task[]

void polling_task(intptr_t unused) {

  gPolling->run();

    Measure *m = gBrightness;
    double br = m->getValue(); 
    double len = gLength->getValue();
    double turn = gTurnAngle->getValue();
    double v = gVelocity->getValue();
    double h = gHue->getValue();
    double s = gSatu->getValue();
    double x = gXpoint->getValue();

    rgb_raw_t rgb = gColor->getRgb();
    static char buf[100];
    /*sprintf(buf,"len , bri,H,S r,g,b, turn, v : %3.3f,  %7.4f,  %5.1f, %3.2f, %d,%d,%d  , %4.2f, %4.2f \n",len,br,h,s,  rgb.r, rgb.g,rgb.b ,turn,v);
    msg_log(buf);*/

  ext_tsk();
}

void tracer_task(intptr_t unused) {

  if (ev3_button_is_pressed(BACK_BUTTON)) {
    wup_tsk(MAIN_TASK);  // 左ボタン押下でメインを起こす
  } else {

    // とりあえずここで、アー�?の固定。設計に基づ�?て変えるべ�?
    int arm_cnt = gArm->getCount();
   // syslog(LOG_NOTICE,"%d",arm_cnt);
    int diff = -50 - arm_cnt;
#if defined(MAKE_SIM)
    //gArm->setPWM(diff*4.0);
    
    double para3[] = {-50};
#else
    double para3[] = {0};
#endif
    gMoveArm->setpara (para3);
    gMoveArm->init();
    gMoveTeel->setpara(para3);
    gMoveArm->init();

    gScene->run();
  }

  ext_tsk();
}