#include "SpeedSectionManager.h"
#include "Section.h"

#include "ev3api.h"

SpeedSectionManager::SpeedSectionManager()
{
    // test用初期�?
 #if defined(MAKE_RIGHT)
      const int _EDGE = LineTracer::LEFTEDGE;
#else
      const int _EDGE = LineTracer::RIGHTEDGE;
#endif
    /*Section *sc = new Section();
    
    Judge* selectjudge = (Judge*)sc->selectJudge(Section::LENGTH);
    double para[]={50};
    selectjudge->setpara(para);


    // LineTracer �?ス�?
    LineTracer* tracer = (LineTracer*)sc->selectWalker(Section::TRACER);
    double para2[]={28, -0.25,  30, 70, 6.2525,0,0,_EDGE};
    tracer->setpara(para2);
    addSection(sc);
    
    Section *sc1 = new Section();
    
    // SimpleWalker�?ス�?
    SimpleWalker* walker = (SimpleWalker*)sc1->selectWalker(Section::WALKER);
    double para3[] = {0,0};
    walker->setpara(para3);

    Judge* selectjudge1 = (Judge*)sc1->selectJudge(Section::LENGTH);
    double para1[]={100};

    selectjudge1->setpara(para1);

    
    addSection(sc1);*/
   // printf("roopOK");


    for(int i=0;;i++)
    {
        if(spara[i].walker_no == Section::END)
        {
            //printf("endOK");
            break;
        }

        Section *sc = new Section();

        Judge* selectjudge = (Judge*)sc->selectJudge(spara[i].judge_no);
        selectjudge->setpara(spara[i].judge);


        // LineTracer
        Walker* tracer = sc->selectWalker(spara[i].walker_no);
        tracer->setpara(spara[i].walk);

        addSection(sc);
    }

}

bool SpeedSectionManager::run()
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