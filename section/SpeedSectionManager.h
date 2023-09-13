#ifndef _SPEED_SECTION_MANAGER_H_
#define _SPEED_SECTION_MANAGER_H_
#include "SectionManager.h"

class SpeedSectionManager : public SectionManager {
    public:
        SpeedSectionManager();
        bool run();

    protected:

    private:
       
           
        SecParam spara [100] = {
            {Section::WALKER,{0, 0},Section::TIME,{1},Section::NONE,{}},
            {Section::DEFOLTARMCHANGE,{-15},Section::TIME,{3},Section::NONE,{}},
            //{Section::TRACER,{50, 0,  48, 10, 13,0,0,LineTracer::LEFTEDGE},Section::LENGTH,{13},Section::NONE,{}},
            {Section::TRACER,{66, 0,  49, 10, 13,0,0,LineTracer::RIGHTEDGE},Section::LENGTH,{296},Section::NONE,{}},
            //{Section::WALKER,{0, 0},Section::TIME,{150},Section::NONE,{}},
            {Section::TRACER,{40, 0,  40, 12, 10,-20,0,LineTracer::RIGHTEDGE},Section::LENGTH,{36},Section::NONE,{}},
            //{Section::WALKER,{0, 0},Section::TIME,{150},Section::NONE,{}},
            {Section::TRACER,{66, 0,  49, 10, 13,0,0,LineTracer::RIGHTEDGE},Section::LENGTH,{175},Section::NONE,{}},
            //{Section::WALKER,{0, 0},Section::TIME,{150},Section::NONE,{}},
            {Section::TRACER,{40, 0,  40, 12, 10,-20,0,LineTracer::RIGHTEDGE},Section::LENGTH,{36},Section::NONE,{}},
            //{Section::WALKER,{0, 0},Section::TIME,{150},Section::NONE,{}},
            {Section::TRACER,{65, 0,  49, 10, 13,0,0,LineTracer::RIGHTEDGE},Section::LENGTH,{13},Section::NONE,{}},//LAP
            
            //{Section::TRACER,{0, 0, 0, 0, 0,0,0,LineTracer::LEFTEDGE},Section::LENGTH,{500},Section::NONE,{}},
            {Section::END,{},Section::ENDJ,{}},
        };
        /*{
            {LineTracer,},{},{},{},{}}
            */

};

#endif
