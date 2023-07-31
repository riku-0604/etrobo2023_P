#include "Section.h"
 
extern SimpleWalker *gWalker;
extern LineTracer *gTracer;
extern Odometry *gOdo;
extern SpeedControl *gSpeed;
//xtern judge *mjudge;

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
    /*if(mjudge->run())
    {
        return true;
    }*/

    //走法
    mWalker->run();
    
    return false;
}

Walker *Section::selectWalker(int no)
{
    switch(no) {
        case WALKER:
            mWalker = (Walker*)(new SimpleWalker(gOdo,gSpeed));
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


/*Judge *Section::selectJudge(int no)
{
    switch(no) {
        case LENGTH:
            mjudge = (judge*)(new judgeLength());
            break;
        case COLOR:
            mjudge = (judge*)(new judgeColor());
            printf("mjudge%d",mjudge);
            break;
        case 
    }
}*/


