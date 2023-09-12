#ifndef _SPEED_SECTION_MANAGER_H_
#define _SPEED_SECTION_MANAGER_H_
#include "SectionManager.h"

class SpeedSectionManager : public SectionManager {
    public:
        SpeedSectionManager();
        

    protected:

    private:
        /*?��?��?��?��
            LENGTH,{?��?��?��?��}
            TIME,{?��?��?��?��}
            COLOR,{?��F,?��ʓx}
            BLOCKCOLOR,{?��ԃu?��?��?��b?��N,?��u?��?��?��b?��N,?��ʓx,?��?��?��?��}
            TURNANGLE,{?��?��?��?��p?��x}  //?��?��?��s?��̂�?��?���?��l?��͉E?��?��]?��?��?��}?��C?��i?��X?��A?��?��?��?��]?��̓v?��?��?��X//
            ARMANGLE,{?��A?��[?��?��?��p?��x}
            TEELANGLE,{?��?��?��?��?��ۂ̖ڕW?��p?��x}
            ENDJ,
            NONE
            */

           /*?��?��?��?��
            WALKER,{?��O?��i?��̃p?��?��?��[,?��?��?��?��̃p?��?��?��[}  //?��?��?��?��̃p?��?��?��[?��͉E?��?��]?��?��?��v?��?��?��X?��A?��?��?��?��]?��̓}?��C?��i?��X//
            TRACER,{?��?��?��x,?��?��?��?��,P,I,D,?��p?��x?��ڕW?��l,?��?��?��?��?��P}
            ARM,{?��ڕW?��̃A?��[?��?��?��̊p?��x}
            TEEL,{?��?��?��?��?��ۂ�??��?��[?��^?��[?��̋�?��?��}
            VIRTUALSTRAIGHT,{?��?��?��s?��p?��x,?��?��?��x,P,I,D}
            END
            */
           
        SecParam spara [100] = {
            {Section::WALKER,{0, 0},Section::TIME,{1},Section::NONE,{}},
            {Section::DEFOLTARMCHANGE,{-15},Section::TIME,{3},Section::NONE,{}},
            {Section::TRACER,{50, -0.3,  48, 10, 13,0,0,LineTracer::RIGHTEDGE},Section::LENGTH,{13},Section::NONE,{}},
            {Section::TRACER,{75, -0.3,  48, 10, 13,0,0,LineTracer::RIGHTEDGE},Section::LENGTH,{280},Section::NONE,{}},
            //{Section::WALKER,{0, 0},Section::TIME,{150},Section::NONE,{}},
            {Section::TRACER,{55, -0.1,  35, 10, 11,-23,0,LineTracer::RIGHTEDGE},Section::LENGTH,{35},Section::NONE,{}},
            //{Section::WALKER,{0, 0},Section::TIME,{150},Section::NONE,{}},
            {Section::TRACER,{75, -0.3,  48, 10, 13,0,0,LineTracer::RIGHTEDGE},Section::LENGTH,{183},Section::NONE,{}},
            //{Section::WALKER,{0, 0},Section::TIME,{150},Section::NONE,{}},
            {Section::TRACER,{55, -0.1,  35, 10, 11,-23,0,LineTracer::RIGHTEDGE},Section::LENGTH,{35},Section::NONE,{}},
            //{Section::WALKER,{0, 0},Section::TIME,{150},Section::NONE,{}},
            {Section::TRACER,{75, -0.3,  48, 10, 13,0,0,LineTracer::RIGHTEDGE},Section::LENGTH,{18},Section::NONE,{}},//LAP
            //{Section::WALKER,{0, 0},Section::TIME,{150},Section::NONE,{}},
            //{Section::TRACER,{11.5, -0.3,  30, 10, 7,0,0,LineTracer::LEFTEDGE},Section::COLOR,{228,0.1},Section::NONE,{}},//青マーカー検知用
            {Section::END,{},Section::ENDJ,{}},
        };
        /*{
            {LineTracer,},{},{},{},{}}
            */
        //右

        
};

#endif
