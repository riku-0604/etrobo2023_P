#include "DoubleLoop.h"
#include "Section.h"

#include "ev3api.h"

DoubleLoop::DoubleLoop()
{
    // test—p‰Šú??
 #if defined(MAKE_RIGHT)
      const int _EDGE = LineTracer::LEFTEDGE;
#else
      const int _EDGE = LineTracer::RIGHTEDGE;
#endif

    init(spara);

    /*Section *sc = new Section();
    
    Judge* selectjudge = (Judge*)sc->selectJudge(Section::LENGTH);
    double para[]={50};
    selectjudge->setpara(para);


    // LineTracer ??ƒX??
    LineTracer* tracer = (LineTracer*)sc->selectWalker(Section::TRACER);
    double para2[]={28, -0.25,  30, 70, 6.2525,0,0,_EDGE};
    tracer->setpara(para2);
    addSection(sc);
    
    Section *sc1 = new Section();
    
    // SimpleWalker??ƒX??
    SimpleWalker* walker = (SimpleWalker*)sc1->selectWalker(Section::WALKER);
    double para3[] = {0,0};
    walker->setpara(para3);

    Judge* selectjudge1 = (Judge*)sc1->selectJudge(Section::LENGTH);
    double para1[]={100};

    selectjudge1->setpara(para1);

    
    addSection(sc1);*/
   // printf("roopOK");

}

