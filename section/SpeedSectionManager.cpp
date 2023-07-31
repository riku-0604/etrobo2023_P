#include "SpeedSectionManager.h"
#include "Section.h"

SpeedSectionManager::SpeedSectionManager()
{
    // test用初期化
 #if defined(MAKE_RIGHT)
      const int _EDGE = LineTracer::LEFTEDGE;
#else
      const int _EDGE = LineTracer::RIGHTEDGE;
#endif
    Section *sc = new Section();
    
    // LineTracer テスト
    LineTracer* tracer = (LineTracer*)sc->selectWalker(Section::TRACER);

<<<<<<< Updated upstream
    tracer->setParam(32, -0.25,  30, 70, 6.2525 );
=======
    tracer->setParam(25, 0 ,  30, 0.2, 0.1 );//(早さ,白黒,P,I,D)
>>>>>>> Stashed changes
    tracer->setEdgeMode(_EDGE);

    /*
    // SimpleWalkerテスト
    SimpleWalker* walker = (SimpleWalker*)sc->selectWalker(Section::WALKER);
    walker->setCommand(10,10);
    */
    addSection(sc);

}

bool SpeedSectionManager::run()
{
    if(mSection[mSectionIdx]->run())
        return true;

    return false;
}