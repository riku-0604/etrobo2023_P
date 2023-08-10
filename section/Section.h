#ifndef _SECTION_H_
#define _SECTION_H_

#include "LineTracer.h"
#include "SimpleWalker.h"

#include "Walker.h"
#include "MoveArm.h"
#include "MoveTeel.h"
#include "ChangeDefoltArm.h" 
#include "judge.h"


class Section {
    public:
        Section();
        ~Section();
        virtual bool run();
        Walker *selectWalker(int no);
        Judge *selectJudge(int no);
        int returnValue();
        enum WALKER_NO {
            WALKER,
            TRACER,
            ARM,
            TEEL,
            VIRTUALCURVE,
            DEFOLTARMCHANGE,
            END
        };

        enum JUDGE_NO{
            LENGTH,
            TIME,
            COLOR,
            BLOCKCOLOR,
            TURNANGLE,
            ARMANGLE,
            TEELANGLE,
            ENDJ,
            NONE
        };

    protected:
        Walker *mWalker;
        MoveArm *mMoveArm;
        MoveTeel *mMoveTeel;

        Judge *mJudge;

    private:
    int value = -1;

};

#endif
