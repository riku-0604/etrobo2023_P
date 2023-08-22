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

    init(spara);


}

