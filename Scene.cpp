#include "Scene.h"
#include "app.h"

#include "ev3api.h"


extern MyColorSensor *gColor;

Scene::Scene():
    mState(UNDEFINED),
    mColor(gColor)
{
    printf("scene11\n");
    mSsm = new SpeedSectionManager();
    mDl = new DoubleLoop();
    mBdt = new BlockDeTreasure();
}

bool Scene::run()
{
    switch(mState) {
        case UNDEFINED:
            //printf("UNDEFINED  OK");
            execUndefined();
            break;
        case CALIBRATION:
            //printf("CALIBRATION  OK");
            execCalibration();
            break;
        case START:
            //printf("START  OK");
            execStart();
            break;
        case SPEED:
            execSpeed();
            //msg_f("LAP  OK",5);
            break;
        case DOUBLELOOP:
            execDoubleLoop();
            //msg_f("DOUBLELOOP  OK",6);
            break;
        case BLOCKDETREASURE:
            //printf("BLOCKDETREASURE  OK");
            execBlockDeTreasure();
            //msg_f("BLOCKDETREASURE  OK",7);
            break;
        case BINGO:
            execBingo();
            break;
        case GARAGE:
            execGarage();
            break;
        default:
            return true;
    }
    return false;
}
void Scene::execUndefined()
{
    mState = CALIBRATION;
    ev3_sensor_config(EV3_PORT_1, TOUCH_SENSOR);
    
}
void Scene::execCalibration()
{
    
    if(ev3_button_is_pressed(RIGHT_BUTTON)){
        mColor->setRGB(1);
    }

    if(ev3_button_is_pressed(ENTER_BUTTON)){
        mState = START;
        msg_f("PUSH RIGHT TOUCH SENSOR",4);
    }
}
void Scene::execStart()
{

    // とりあえず動かすだけなので、設計に基づ?��?て書き直そう
    //printf("Press Touch Button to start!!\n");
    
    if (ev3_touch_sensor_is_pressed(EV3_PORT_1) == 1)
    {
        mState=SPEED;
    }

    //シュミレーターの時�?�こ�?�下�?�コメントアウトを消す
    if (ev3_button_is_pressed(LEFT_BUTTON) == 1)
    {
        mState=SPEED;
    }
}
void Scene::execSpeed()
{
    if(mSsm->run()) {
        delete mSsm;
        mState = DOUBLELOOP;
    }
}
void Scene::execDoubleLoop()
{
    if(mDl->run()){
        delete mDl;
        mState = BLOCKDETREASURE;
        //mColor->setRGB(2);
    }
}

void Scene::execBlockDeTreasure()
{
    
    if(mBdt->run()){
        delete mBdt;
        mState = END;
    
    }
}
void Scene::execBingo()
{

}
void Scene::execGarage()
{

}
