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

bool SectionManager::run()
{
    return true;
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

