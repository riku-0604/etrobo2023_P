/******************************************************************************
 *  SimpleWalker.cpp (for LEGO Mindstorms EV3)
 *  Created on: 2015/01/25
 *  Implementation of the Class SimpleWalker
 *  Author: Kazuhiro.Kawachi
 *  Copyright (c) 2015 Embedded Technology Software Design Robot Contest
 *****************************************************************************/

#include "SimpleWalker.h"
#include "Walker.h"
#include "util.h"
// 定数宣言
/**
 * コンストラクタ
 * @param gyroSensor ジャイロセンサ
 * @param leftWheel  左モータ
 * @param rightWheel 右モータ
 * @param balancer   バランサ
 */
SimpleWalker::SimpleWalker(
                        Odometry *odo,
                        SpeedControl *scon
                       ):
        Walker(odo),
        mSpeedControl(scon),
        mForward(0),
        mTurn(0),
        mBreake_flag(false),
        mMode_flag(false)
{
}

void SimpleWalker::init()
{
    //printf("mForward%f\n",mForward);
    setCommand(minitForward,minitTurn);
    // printf("minitForward%f\n",minitForward);
    // printf("minitTurn%f\n",minitTurn);

}


void SimpleWalker::run() {
    static double speed=0;

    mForward = mSpeedControl->getPwm();

    double pwm_l = mForward + mTurn;      // <2>
    double pwm_r = mForward - mTurn;      // <2>
    //printf("%f\n",pwm_l);
    //printf("%f\n",pwm_r);

    static const int MAXPWM=85;
    int diff = 0;
    if(pwm_l>MAXPWM) {
        pwm_r = (int)((double)MAXPWM*pwm_r/pwm_l);
        pwm_l=MAXPWM;
    }
    if(pwm_l<-MAXPWM) {
        pwm_r = (int)((double)-MAXPWM*pwm_r/pwm_l);
        pwm_l=-MAXPWM;
    }

    if(pwm_r>MAXPWM) {
        pwm_l = (int)((double)MAXPWM*pwm_l/pwm_r);
        pwm_r=MAXPWM;
    }
    if(pwm_r<-MAXPWM) {
        pwm_l = (int)((double)-MAXPWM*pwm_l/pwm_r);
        pwm_r=-MAXPWM;
    }

    if(pwm_r>100) pwm_r=100;
    if(pwm_l>100) pwm_l=100;
    if(pwm_r<-100) pwm_r=-100;
    if(pwm_l<-100) pwm_l=-100;

    mOdo->setPwm(pwm_l,pwm_r);
}

/**
 * PWM値を設定す�?
 * @param forward 前進値
 * @param turn    旋回値
 */
void SimpleWalker::setCommand(int forward, int turn) {
    mForward = forward;
    mSpeedControl->resetParam();
    mSpeedControl->setTargetSpeed(forward);
    mTurn    = turn;
    //mMode_flag = false;
    mSpeedControl->setMode(false);

   // printf("mForward%f\n",mForward);
   // printf("mTurn%f\n",mTurn);

}

void SimpleWalker::setpara(double para3[])
{
    //setCommand(para3[0],para3[1]);

    minitForward = para3[0];
    minitTurn = para3[1];

    //printf("parameter%f\n",para3[0]);
    //printf("parameter%f\n",para3[1]);

}

void SimpleWalker::setCommandV(double forward, int turn)
{

    mSpeedControl->setTargetSpeed(forward);
    mSpeedControl->setBreak(false);
    
    if (forward==0) {
        mSpeedControl->setBreak(true);
        mForward=0;
    }
    mTurn    = turn;
    mSpeedControl->setMode(true);
}

void SimpleWalker::resetParam()
{
    mSpeedControl->resetParam();
}



