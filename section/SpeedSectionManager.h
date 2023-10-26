#ifndef _SPEED_SECTION_MANAGER_H_
#define _SPEED_SECTION_MANAGER_H_
#include "SectionManager.h"

class SpeedSectionManager : public SectionManager {
    public:
        SpeedSectionManager();
        

    protected:

    private:
       
           
        SecParam spara [100] = {

            
            {Section::WALKER,{0, 0},Section::TIME,{1},Section::NONE,{}},

            //{Section::VIRTUALSTRAIGHT,{0,80,30,5,0.7},Section::LENGTH,{2000},Section::NONE,{}},
            //{Section::WALKER,{0, 0},Section::LENGTH,{100},Section::NONE,{}},

            
            {Section::DEFOLTARMCHANGE,{-15},Section::TIME,{3},Section::NONE,{}},
            //{Section::TRACER,{50, 0,  48, 10, 13,0,0,LineTracer::LEFTEDGE},Section::LENGTH,{13},Section::NONE,{}},
            {Section::TRACER,{100, 0,  49, 10, 13,0,0,LineTracer::RIGHTEDGE},Section::LENGTH,{290},Section::NONE,{}},
            {Section::VIRTUALSTRAIGHT,{45,80,30,3,2},Section::LENGTH,{35},Section::NONE,{}},
            {Section::VIRTUALSTRAIGHT,{0,80,15,3,0.7},Section::BRIGHTNESS,{-0.3,0},Section::NONE,{}},

            {Section::VIRTUALSTRAIGHT,{0,80,15,3,0.7},Section::LENGTH,{5},Section::NONE,{}},

            //{Section::WALKER,{0, 0},Section::TIME,{150},Section::NONE,{}},
            {Section::TRACER,{66, 0,  49, 10, 13,0,0,LineTracer::RIGHTEDGE},Section::LENGTH,{175},Section::NONE,{}},
            //{Section::WALKER,{0, 0},Section::TIME,{150},Section::NONE,{}},
            {Section::TRACER,{30, 0,  40, 12, 10,-20,0,LineTracer::RIGHTEDGE},Section::LENGTH,{35},Section::NONE,{}},
            //{Section::WALKER,{0, 0},Section::TIME,{150},Section::NONE,{}},
            {Section::TRACER,{65, 0,  49, 10, 13,0,0,LineTracer::RIGHTEDGE},Section::LENGTH,{13},Section::NONE,{}},//LAP
            
            //{Section::TRACER,{0, 0, 0, 0, 0,0,0,LineTracer::LEFTEDGE},Section::LENGTH,{500},Section::NONE,{}},
            


           
            {Section::END,{},Section::ENDJ,{}},
        };
};

#endif
