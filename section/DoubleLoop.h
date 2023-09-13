#ifndef _DOUBLE_LOOP_H_
#define _DOUBLE_LOOP_H_
#include "SectionManager.h"

class DoubleLoop : public SectionManager {
    public:
        DoubleLoop();
        

    protected:

    private:
        /*??ｿｽ?ｿｽ??ｿｽ?ｿｽ??ｿｽ?ｿｽ??ｿｽ?ｿｽ
            LENGTH,{??ｿｽ?ｿｽ??ｿｽ?ｿｽ??ｿｽ?ｿｽ??ｿｽ?ｿｽ}
            TIME,{??ｿｽ?ｿｽ??ｿｽ?ｿｽ??ｿｽ?ｿｽ??ｿｽ?ｿｽ}
            COLOR,{??ｿｽ?ｿｽF,??ｿｽ?ｿｽﾊ度}
            BLOCKCOLOR,{??ｿｽ?ｿｽﾔブ??ｿｽ?ｿｽ??ｿｽ?ｿｽ??ｿｽ?ｿｽb??ｿｽ?ｿｽN,??ｿｽ?ｿｽﾂブ??ｿｽ?ｿｽ??ｿｽ?ｿｽ??ｿｽ?ｿｽb??ｿｽ?ｿｽN,??ｿｽ?ｿｽﾊ度,??ｿｽ?ｿｽ??ｿｽ?ｿｽ??ｿｽ?ｿｽ??ｿｽ?ｿｽ}
            TURNANGLE,{??ｿｽ?ｿｽ??ｿｽ?ｿｽ??ｿｽ?ｿｽ??ｿｽ?ｿｽp??ｿｽ?ｿｽx}  //??ｿｽ?ｿｽ??ｿｽ?ｿｽ??ｿｽ?ｿｽs??ｿｽ?ｿｽﾌゑｿｽ??ｿｽ?ｿｽ??ｿｽ?ｿｽ?ｿｽ??ｿｽ?ｿｽl??ｿｽ?ｿｽﾍ右??ｿｽ?ｿｽ??ｿｽ?ｿｽ]??ｿｽ?ｿｽ??ｿｽ?ｿｽ??ｿｽ?ｿｽ}??ｿｽ?ｿｽC??ｿｽ?ｿｽi??ｿｽ?ｿｽX??ｿｽ?ｿｽA??ｿｽ?ｿｽ??ｿｽ?ｿｽ??ｿｽ?ｿｽ??ｿｽ?ｿｽ]??ｿｽ?ｿｽﾍプ??ｿｽ?ｿｽ??ｿｽ?ｿｽ??ｿｽ?ｿｽX//
            ARMANGLE,{??ｿｽ?ｿｽA??ｿｽ?ｿｽ[??ｿｽ?ｿｽ??ｿｽ?ｿｽ??ｿｽ?ｿｽp??ｿｽ?ｿｽx}
            TEELANGLE,{??ｿｽ?ｿｽ??ｿｽ?ｿｽ??ｿｽ?ｿｽ??ｿｽ?ｿｽ??ｿｽ?ｿｽﾛの目標??ｿｽ?ｿｽp??ｿｽ?ｿｽx}
            BRIGHTNESS,{??ｿｽ?ｿｽP??ｿｽ?ｿｽx??ｿｽ?ｿｽl,??ｿｽ?ｿｽ??ｿｽ?ｿｽ??ｿｽ?ｿｽ??ｿｽ?ｿｽ??ｿｽ?ｿｽ??ｿｽ?ｿｽ1??ｿｽ?ｿｽ??ｿｽ?ｿｽ??ｿｽ?ｿｽ??ｿｽ?ｿｽ??ｿｽ?ｿｽ??ｿｽ?ｿｽ0}
            ENDJ,
            NONE
            */

           /*??ｿｽ?ｿｽ??ｿｽ?ｿｽ??ｿｽ?ｿｽ??ｿｽ?ｿｽ
            WALKER,{??ｿｽ?ｿｽO??ｿｽ?ｿｽi??ｿｽ?ｿｽﾌパ??ｿｽ?ｿｽ??ｿｽ?ｿｽ??ｿｽ?ｿｽ[,??ｿｽ?ｿｽ??ｿｽ?ｿｽ??ｿｽ?ｿｽ??ｿｽ?ｿｽﾌパ??ｿｽ?ｿｽ??ｿｽ?ｿｽ??ｿｽ?ｿｽ[}  //??ｿｽ?ｿｽ??ｿｽ?ｿｽ??ｿｽ?ｿｽ??ｿｽ?ｿｽﾌパ??ｿｽ?ｿｽ??ｿｽ?ｿｽ??ｿｽ?ｿｽ[??ｿｽ?ｿｽﾍ右??ｿｽ?ｿｽ??ｿｽ?ｿｽ]??ｿｽ?ｿｽ??ｿｽ?ｿｽ??ｿｽ?ｿｽv??ｿｽ?ｿｽ??ｿｽ?ｿｽ??ｿｽ?ｿｽX??ｿｽ?ｿｽA??ｿｽ?ｿｽ??ｿｽ?ｿｽ??ｿｽ?ｿｽ??ｿｽ?ｿｽ]??ｿｽ?ｿｽﾍマ??ｿｽ?ｿｽC??ｿｽ?ｿｽi??ｿｽ?ｿｽX//
            TRACER,{??ｿｽ?ｿｽ??ｿｽ?ｿｽ??ｿｽ?ｿｽx,??ｿｽ?ｿｽ??ｿｽ?ｿｽ??ｿｽ?ｿｽ??ｿｽ?ｿｽ,P,I,D,??ｿｽ?ｿｽp??ｿｽ?ｿｽx??ｿｽ?ｿｽﾚ標??ｿｽ?ｿｽl,??ｿｽ?ｿｽ??ｿｽ?ｿｽ??ｿｽ?ｿｽ??ｿｽ?ｿｽ??ｿｽ?ｿｽP}
            ARM,{??ｿｽ?ｿｽﾚ標??ｿｽ?ｿｽﾌア??ｿｽ?ｿｽ[??ｿｽ?ｿｽ??ｿｽ?ｿｽ??ｿｽ?ｿｽﾌ角??ｿｽ?ｿｽx}
            TEEL,{??ｿｽ?ｿｽ??ｿｽ?ｿｽ??ｿｽ?ｿｽ??ｿｽ?ｿｽ??ｿｽ?ｿｽﾛゑｿｽ???ｿｽ?ｿｽ??ｿｽ?ｿｽ[??ｿｽ?ｿｽ^??ｿｽ?ｿｽ[??ｿｽ?ｿｽﾌ具ｿｽ??ｿｽ?ｿｽ??ｿｽ?ｿｽ}
            END
            */
           
        SecParam spara [100] = {
            {Section::WALKER,{0, 0},Section::TIME,{1},Section::NONE,{}},
            
            

            
            {Section::TRACER,{50, -0.2,  33, 12, 9,0,0,LineTracer::LEFTEDGE},Section::LENGTH,{5},Section::NONE,{}},
            //{Section::TRACER,{50, -0.2,  30, 12, 9,0,0,LineTracer::LEFTEDGE},Section::LENGTH,{2},Section::NONE,{}},
            {Section::TRACER,{40, -0.2,  28, 12, 8,0,0,LineTracer::LEFTEDGE},Section::LENGTH,{5},Section::NONE,{}},
            {Section::TRACER,{21, -0.2,  17, 12, 8,0,0,LineTracer::LEFTEDGE},Section::LENGTH,{6},Section::NONE,{}},

            {Section::TRACER,{21, -0.2,  17, 12, 8,0,0,LineTracer::LEFTEDGE},Section::COLOR,{228,0.16},Section::NONE,{}},//髱抵ｿｽ??ｿｽ?ｿｽ??ｿｽ繧ｫ繝ｼ讀懃衍逕ｨ
            //{Section::TRACER,{22, 0,  30, 10, 5,0,0,LineTracer::LEFTEDGE},Section::LENGTH,{10},Section::NONE,{}},
            //{Section::TRACER,{22, -0.5,  30, 10, 5,0,0,LineTracer::LEFTEDGE},Section::LENGTH,{10},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{100},Section::NONE,{}},
            //{Section::TURNWALKER,{-50,20,5,2},Section::TURNANGLE,{1},Section::NONE,{}},
            //{Section::WALKER,{0, 0},Section::TIME,{100},Section::NONE,{}},
            {Section::VIRTUALSTRAIGHT,{-10,25,20,5,3,LineTracer::LEFTEDGE},Section::LENGTH,{16},Section::NONE,{}},
            

            //{Section::TRACER,{22, -0.5,  30, 10, 5,0,0,LineTracer::RIGHTEDGE},Section::LENGTH,{10},Section::NONE,{}},
            {Section::TRACER,{33, 0,  17, 12, 8,0,0,LineTracer::LEFTEDGE},Section::LENGTH,{128},Section::NONE,{}},
            //{Section::WALKER,{0, 0},Section::TIME,{100},Section::NONE,{}},
            {Section::TRACER,{21, -0.2,  17, 12, 8,0,0,LineTracer::LEFTEDGE},Section::COLOR,{228,0.16},Section::NONE,{}},//髱抵ｿｽ??ｿｽ?ｿｽ??ｿｽ繧ｫ繝ｼ讀懃衍逕ｨ
            //{Section::WALKER,{0, 0},Section::TIME,{150},Section::NONE,{}},
            {Section::TRACER,{23, 0,  17, 12, 8,0,0,LineTracer::LEFTEDGE},Section::LENGTH,{14},Section::NONE,{}},
            {Section::VIRTUALSTRAIGHT,{-15,25,20,5,2,LineTracer::LEFTEDGE},Section::LENGTH,{13},Section::NONE,{}},
            {Section::TRACER,{23, 0,  17, 12, 10,0,0,LineTracer::LEFTEDGE},Section::LENGTH,{10},Section::NONE,{}},
            {Section::TRACER,{30, 0,  17, 12, 8,0,0,LineTracer::LEFTEDGE},Section::LENGTH,{128},Section::NONE,{}},
            
            {Section::TRACER,{21, -0.2,  17, 12, 7,0,0,LineTracer::LEFTEDGE},Section::COLOR,{228,0.16},Section::NONE,{}},
            //{Section::WALKER,{0, 0},Section::TIME,{150},Section::NONE,{}},
            //{Section::TRACER,{0, 0, 0, 0, 0,0,0,LineTracer::LEFTEDGE},Section::LENGTH,{500},Section::NONE,{}},//forced termination
            //{Section::WALKER,{0, 0},Section::TIME,{100},Section::NONE,{}},
            {Section::TRACER,{21, 0,  17, 12, 8,0,0,LineTracer::LEFTEDGE},Section::LENGTH,{28.5},Section::NONE,{}},
            //{Section::WALKER,{0, 0},Section::TIME,{150},Section::NONE,{}},
            {Section::VIRTUALSTRAIGHT,{-9,21,20,5,2,LineTracer::LEFTEDGE},Section::LENGTH,{6},Section::NONE,{}},
            {Section::TRACER,{31, 0,  16, 0, 8,0,0,LineTracer::RIGHTEDGE},Section::LENGTH,{230},Section::NONE,{}},
            {Section::TRACER,{21, -0.2, 17, 12, 8,0,0,LineTracer::RIGHTEDGE},Section::COLOR,{228,0.16},Section::NONE,{}},
            //{Section::WALKER,{0, 0},Section::TIME,{150},Section::NONE,{}},
            {Section::TRACER,{21, -0.1,  17, 12, 8,0,0,LineTracer::RIGHTEDGE},Section::LENGTH,{34},Section::NONE,{}},
            //{Section::TRACER,{30, -0.4,  40, 10, 9,0,0,LineTracer::LEFTEDGE},Section::LENGTH,{5},Section::NONE,{}},
            
            {Section::VIRTUALSTRAIGHT,{2,23,20,5,2,LineTracer::LEFTEDGE},Section::LENGTH,{8},Section::NONE,{}},
            //{Section::TRACER,{25, 0,  17, 12, 8,0,0,LineTracer::LEFTEDGE},Section::LENGTH,{10},Section::NONE,{}},
            {Section::TRACER,{30, 0,  17, 12, 8,0,0,LineTracer::LEFTEDGE},Section::LENGTH,{97},Section::NONE,{}},
            //{Section::WALKER,{0, 0},Section::TIME,{150},Section::NONE,{}},
            {Section::VIRTUALSTRAIGHT,{-6,25,20,5,2,LineTracer::LEFTEDGE},Section::LENGTH,{19},Section::NONE,{}},
            {Section::TRACER,{32, 0,  17, 10, 8,0,0,LineTracer::LEFTEDGE},Section::LENGTH,{45},Section::NONE,{}},
            //{Section::TRACER,{0, 0, 0, 0, 0,0,0,LineTracer::LEFTEDGE},Section::LENGTH,{500},Section::NONE,{}},
            {Section::TRACER,{40, 0, 45, 10, 10,20,0,LineTracer::LEFTEDGE},Section::LENGTH,{35},Section::NONE,{}},
            //{Section::WALKER,{0, 0},Section::TIME,{100},Section::NONE,{}},
            {Section::TRACER,{33, -0.1,  17, 12, 8,0,0,LineTracer::LEFTEDGE},Section::LENGTH,{20},Section::NONE,{}},
            {Section::TRACER,{23, -0.2,  17, 12, 8,0,0,LineTracer::LEFTEDGE},Section::COLOR,{228,0.16},Section::NONE,{}},
            {Section::TRACER,{70, 0,  49, 10, 12,0,0,LineTracer::LEFTEDGE},Section::LENGTH,{63},Section::NONE,{}},
            {Section::TRACER,{32, 0,  17, 12, 8,0,0,LineTracer::LEFTEDGE},Section::LENGTH,{30},Section::NONE,{}},
            
            
            
            {Section::TRACER,{23, -0.2,  17, 12, 8,0,0,LineTracer::LEFTEDGE},Section::LENGTH,{20},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{80},Section::NONE,{}},
            
            {Section::VIRTUALSTRAIGHT,{0,16,20,5,2,LineTracer::LEFTEDGE},Section::COLOR,{20,0.5},Section::NONE,{}},//襍､
            //{Section::TRACER,{25, 0,  30, 10, 7,0,0,LineTracer::LEFTEDGE},Section::COLOR,{15,0.1},Section::NONE,{}},
            
            //{Section::TRACER,{0, 0, 0, 0, 0,0,0,LineTracer::LEFTEDGE},Section::LENGTH,{500},Section::NONE,{}},
            
            //{Section::DEFOLTARMCHANGE,{-15},Section::TIME,{3},Section::NONE,{}},
            

            {Section::END,{},Section::ENDJ,{}},
        };
        /*{
            {LineTracer,},{},{},{},{}}
            */

};

#endif
