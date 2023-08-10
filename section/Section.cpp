#include "Section.h"
#include "judgeLength.h"
#include "judgeColor.h"
#include "judgeBlockColor.h"
#include "judgeTime.h"
#include "judgeTurnAngle.h"
#include "judgeArmAngle.h"
#include "judgeTeelAngle.h"
#include "curvevirtuallinetracer.h"
#include "straightvirtuallinetracer.h"
#include "TurnWalker.h"
#include "MoveArm.h"


#include "ev3api.h"


extern SimpleWalker *gWalker;
extern MoveArm *gMoveArm;
extern MoveTeel *gMoveTeel;
extern LineTracer *gTracer;
extern Odometry *gOdo;
extern SpeedControl *gSpeed;
//extern judge *mjudge;

Section::Section():
    mMoveArm(gMoveArm),
    mMoveTeel(gMoveTeel)
{
}

Section::~Section()
{
    msg_log("destruct Section");
    delete mWalker;
}


bool Section::run()
{
    /*if(mJudge->returnmode() == 0)
    {
        mMoveArm->run();

    }*/

    

    //走法

    //printf("mWalker->WalkerID()%d\n",mWalker->WalkerID());
    if(mWalker->WalkerID() != TEEL)
    {
        mMoveTeel->run();
        //printf("beforTeelOK");
    }

    if(mWalker->WalkerID() != ARM)
    {
        mMoveArm->run();
        //printf("beforArmOK");
    }

   //判定
    if(mJudge->state())
    {
        //printf("JudgeID()%d\n",mJudge->JudgeID());

        if(mJudge->JudgeID() == BLOCKCOLOR)
        {
            value = ((JudgeBlockColor*)mJudge)->RedBlueWinner();
            printf("value%d\n",value);
        }
        return true;
    }

    

    mWalker->move();
    
    return false;
}

int Section::returnValue()
{
    printf("returnValue%d\n",value);
    return value;
}

Walker *Section::selectWalker(int no)
{
    switch(no) {
        case WALKER:
            mWalker = (Walker*)(new SimpleWalker(gOdo,gSpeed));
            //printf("WALKER OK");
            break;
        case TRACER:
            mWalker = (Walker*)(new LineTracer(gOdo,gSpeed));
           // printf("TRACER OK\n");
            break;
        case ARM:
            mWalker = (Walker*)(new MoveArm(gOdo));
            //printf("ARMOK\n");
            break;
        case TEEL:
            mWalker = (Walker*)(new MoveTeel(gOdo));
            //printf("TEELOK\n");
            break;
        case VIRTUALCURVE:
            mWalker = (Walker*)(new curvevirtuallinetracer(gOdo,gSpeed));
            break;
        case VIRTUALSTRAIGHT:
            mWalker = (Walker*)(new straightvirtuallinetracer(gOdo,gSpeed));
            break;
        case TURNWALKER:
            mWalker = (Walker*)(new TurnWalker(gOdo,gSpeed));
            break;
        case END:
            break;
        default:
            msg_log("selectWalker error!!");
        //case WANONE:
            //break;
    }

    return mWalker;
}


Judge *Section::selectJudge(int no)
{
    switch(no) {
        case LENGTH:
            mJudge = (new JudgeLength());
            break;
        case COLOR:
            mJudge = (new JudgeColor());
            //printf("mJudge%d",mJudge);
            break;
        case BLOCKCOLOR:
            mJudge = (new JudgeBlockColor());
            //printf("mBLOCKCOLORJudge%d\n",mJudge);
            break;
        case TIME:
            mJudge = (new JudgeTime());
            break;
        case TURNANGLE:
            mJudge = (new JudgeTurnAngle());
            break;
        case ARMANGLE:
            mJudge = (new JudgeArmAngle());
            //printf("mJudge%d",mJudge);
            break;
        case TEELANGLE:
           mJudge = (new JudgeTeelAngle());
           break;
        case ENDJ:
            break;
        /*case */
    }

    return mJudge;
}


