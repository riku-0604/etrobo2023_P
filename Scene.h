#ifndef _SCENE_H_
#define  _SCENE_H_

#include "SpeedSectionManager.h"
#include "DoubleLoop.h"
#include "BlockDeTreasure.h"
#include "MyColorSensor.h"

class Scene{
    public:
        Scene();
        bool run();
        void execUndefined();
        void execCalibration();
        void execStart();
        void execDoubleLoop();
        void execBlockDeTreasure();
        void execSpeed();
        void execBingo();
        void execGarage();

    private:
        enum State {
            UNDEFINED,
            CALIBRATION,
            START,
            DOUBLELOOP,
            BLOCKDETREASURE,
            SPEED,
            BINGO,
            GARAGE,
            END
        };

        State mState;

        SectionManager *mSsm;
        SectionManager *mDl;
        SectionManager *mBdt;


        
        MyColorSensor *mColor;
};
#endif
