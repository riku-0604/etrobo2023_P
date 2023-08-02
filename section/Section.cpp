#include "Section.h"
#include "judgeLength.h"

#include "ev3api.h"


extern SimpleWalker *gWalker;
extern LineTracer *gTracer;
extern Odometry *gOdo;
extern SpeedControl *gSpeed;
//extern judge *mjudge;

Section::Section()
{
}

Section::~Section()
{
    msg_log("destruct Section");
    delete mWalker;
}


bool Section::run()
{

   //判定
    if(mJudge->judgement())
    {
        return true;
    }

    //走法
    mWalker->move();
    
    return false;
}

Walker *Section::selectWalker(int no)
{
    switch(no) {
        case WALKER:
            mWalker = (Walker*)(new SimpleWalker(gOdo,gSpeed));
            printf("WALKER OK");
            break;
        case TRACER:
            mWalker = (Walker*)(new LineTracer(gOdo,gSpeed));
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
        /*case COLOR:
            mjudge = (judge*)(new judgeColor());
            printf("mjudge%d",mjudge);
            break;
        case */
    }

    return mJudge;
}


