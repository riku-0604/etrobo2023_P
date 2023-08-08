#include "SectionManager.h"

SectionManager::SectionManager()
{
    mSectionIdx=0;
    mLastIdx=0;
 
}

SectionManager::~SectionManager()
{
    msg_log("destruct SectionManager");

    for(int i=0;i<mLastIdx;i++) {
        delete mSection[i];
    }
}



void SectionManager::init(SecParam spara[])
{
    for(int i=0;;i++)
    {
        //printf("walker_no");
        if(spara[i].walker_no == Section::END)
        {
            //printf("endOK");
            break;
        }

        Section *sc = new Section();

        Judge* selectjudge = (Judge*)sc->selectJudge(spara[i].judge_no);
        selectjudge->setpara(spara[i].judge);

        //ˆÙí”»’è
        /*
        Judge* selectbadjudge = (Judge*)sc->selectJudge(spara[i].judge_no_bad);
        selectjudge->setpara(spara[i].judge_bad);
        */

        // LineTracer
        Walker* tracer = sc->selectWalker(spara[i].walker_no);
        tracer->setpara(spara[i].walk);

        addSection(sc);
    }
}

bool SectionManager::run()
{
    //printf("mSectionIdx%d\n",mSectionIdx);

    if(mSection[mSectionIdx]->run())
    {
        mSectionIdx++;

        //printf("mLastIdx%d\n",mLastIdx);
        //printf("mSectionIdx%d\n",mSectionIdx);

        if(mLastIdx <= mSectionIdx)
        {
            return true;  
        }
    }
    return false;
}

void SectionManager::addSection(Section *sec)
{
    mSection[mLastIdx++]=sec;
}

/*bool SpeedSectionManager::run()//–½—ß‚ð‚Ð‚Á‚Ï‚Á‚Ä‚­‚é–½—ß‚ð”\ŒÂì‚é(‚±‚ê‚Í‚Ü‚¾ˆêŒÂ‚¾‚¯‚Ð‚Á‚Ï‚Á‚Ä‚­‚é‚à‚Ì)
{
    if(mSection[mSectionIdx]->run())
        return true;

    return false;
}*/



void SectionManager::reset()
{
    for(int i=0;i<mLastIdx;i++) {
        delete mSection[i];
    }
    mSectionIdx = 0;
    mLastIdx=0;
}

