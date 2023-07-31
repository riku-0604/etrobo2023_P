#include "SpeedSectionManager.h"
#include "Section.h"

SpeedSectionManager::SpeedSectionManager()
{
    // testç”¨åˆæœŸåŒ?
 #if defined(MAKE_RIGHT)
      const int _EDGE = LineTracer::LEFTEDGE;
#else
      const int _EDGE = LineTracer::RIGHTEDGE;
#endif
    Section *sc = new Section();
    
    // LineTracer ãƒ?ã‚¹ãƒ?
    LineTracer* tracer = (LineTracer*)sc->selectWalker(Section::TRACER);

    tracer->setParam(28, -0.25,  30, 70, 6.2525 );

    tracer->setEdgeMode(_EDGE);

    /*
    // SimpleWalkerãƒ?ã‚¹ãƒ?
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