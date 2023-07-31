#include "Scene.h"

#include "ev3api.h"

Scene::Scene():
    mState(UNDEFINED)
{
    printf("scene11\n");
    mSsm = new SpeedSectionManager();
}

bool Scene::run()
{
    switch(mState) {
        case UNDEFINED:
            execUndefined();
            break;
        case START:
            execStart();
            break;
        case SPEED:
            execSpeed();
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
    ev3_sensor_config(EV3_PORT_1, TOUCH_SENSOR);
    mState=START;
}
void Scene::execStart()
{

    // とりあえず動かすだけなので、設計に基づいて書き直そう
<<<<<<< Updated upstream
    printf("Press Touch Button to start!!\n");
    
=======
    printf("Press Touch Button to start.\n");
    ev3_sensor_config(EV3_PORT_1, TOUCH_SENSOR);
>>>>>>> Stashed changes
    if (ev3_touch_sensor_is_pressed(EV3_PORT_1) == 1)
    {
            mState=SPEED;
    }
}
void Scene::execSpeed()
{
    if(mSsm->run()) {
        delete mSsm;
        mState = END;
    }
}
void Scene::execBingo()
{

}
void Scene::execGarage()
{

}
