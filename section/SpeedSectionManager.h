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

           /*??ｿｽ?ｿｽ??ｿｽ?ｿｽ??ｿｽ?ｿｽ??ｿｽ?ｿｽ
            WALKER,{??ｿｽ?ｿｽO??ｿｽ?ｿｽi??ｿｽ?ｿｽﾌパ??ｿｽ?ｿｽ??ｿｽ?ｿｽ??ｿｽ?ｿｽ[,??ｿｽ?ｿｽ??ｿｽ?ｿｽ??ｿｽ?ｿｽ??ｿｽ?ｿｽﾌパ??ｿｽ?ｿｽ??ｿｽ?ｿｽ??ｿｽ?ｿｽ[}  //??ｿｽ?ｿｽ??ｿｽ?ｿｽ??ｿｽ?ｿｽ??ｿｽ?ｿｽﾌパ??ｿｽ?ｿｽ??ｿｽ?ｿｽ??ｿｽ?ｿｽ[??ｿｽ?ｿｽﾍ右??ｿｽ?ｿｽ??ｿｽ?ｿｽ]??ｿｽ?ｿｽ??ｿｽ?ｿｽ??ｿｽ?ｿｽv??ｿｽ?ｿｽ??ｿｽ?ｿｽ??ｿｽ?ｿｽX??ｿｽ?ｿｽA??ｿｽ?ｿｽ??ｿｽ?ｿｽ??ｿｽ?ｿｽ??ｿｽ?ｿｽ]??ｿｽ?ｿｽﾍマ??ｿｽ?ｿｽC??ｿｽ?ｿｽi??ｿｽ?ｿｽX//
            TRACER,{??ｿｽ?ｿｽ??ｿｽ?ｿｽ??ｿｽ?ｿｽx,??ｿｽ?ｿｽ??ｿｽ?ｿｽ??ｿｽ?ｿｽ??ｿｽ?ｿｽ,P,I,D,??ｿｽ?ｿｽp??ｿｽ?ｿｽx??ｿｽ?ｿｽﾚ標??ｿｽ?ｿｽl,??ｿｽ?ｿｽ??ｿｽ?ｿｽ??ｿｽ?ｿｽ??ｿｽ?ｿｽ??ｿｽ?ｿｽP}
            ARM,{??ｿｽ?ｿｽﾚ標??ｿｽ?ｿｽﾌア??ｿｽ?ｿｽ[??ｿｽ?ｿｽ??ｿｽ?ｿｽ??ｿｽ?ｿｽﾌ角??ｿｽ?ｿｽx}
            TEEL,{??ｿｽ?ｿｽ??ｿｽ?ｿｽ??ｿｽ?ｿｽ??ｿｽ?ｿｽ??ｿｽ?ｿｽﾛゑｿｽ???ｿｽ?ｿｽ??ｿｽ?ｿｽ[??ｿｽ?ｿｽ^??ｿｽ?ｿｽ[??ｿｽ?ｿｽﾌ具ｿｽ??ｿｽ?ｿｽ??ｿｽ?ｿｽ}
            VIRTUALSTRAIGHT,{??ｿｽ?ｿｽ??ｿｽ?ｿｽ??ｿｽ?ｿｽs??ｿｽ?ｿｽp??ｿｽ?ｿｽx,??ｿｽ?ｿｽ??ｿｽ?ｿｽ??ｿｽ?ｿｽx,P,I,D}
            END
            */
           
        SecParam spara [100] = {
            {Section::WALKER,{0, 0},Section::TIME,{1},Section::NONE,{}},

            
            {Section::DEFOLTARMCHANGE,{-15},Section::TIME,{3},Section::NONE,{}},
            //{Section::TRACER,{50, 0,  48, 10, 13,0,0,LineTracer::LEFTEDGE},Section::LENGTH,{13},Section::NONE,{}},
            {Section::TRACER,{80, 0,  49, 10, 12,0,0,LineTracer::LEFTEDGE},Section::LENGTH,{294},Section::NONE,{}},
            //{Section::WALKER,{0, 0},Section::TIME,{150},Section::NONE,{}},
            {Section::TRACER,{40, 0,  40, 10, 10,20,0,LineTracer::LEFTEDGE},Section::LENGTH,{36},Section::NONE,{}},
            //{Section::WALKER,{0, 0},Section::TIME,{150},Section::NONE,{}},
            {Section::TRACER,{80, 0,  49, 10, 12,0,0,LineTracer::LEFTEDGE},Section::LENGTH,{175},Section::NONE,{}},
            //{Section::WALKER,{0, 0},Section::TIME,{150},Section::NONE,{}},
            {Section::TRACER,{40, 0,  40, 10, 10,20,0,LineTracer::LEFTEDGE},Section::LENGTH,{36},Section::NONE,{}},
            //{Section::WALKER,{0, 0},Section::TIME,{150},Section::NONE,{}},
            {Section::TRACER,{60, 0,  49, 10, 12,0,0,LineTracer::LEFTEDGE},Section::LENGTH,{13},Section::NONE,{}},//LAP
            
            //{Section::TRACER,{0, 0, 0, 0, 0,0,0,LineTracer::LEFTEDGE},Section::LENGTH,{500},Section::NONE,{}},
            

            {Section::END,{},Section::ENDJ,{}},
        };
        /*{
            {LineTracer,},{},{},{},{}}
            */
        //右
};

#endif
