#ifndef _DOUBLE_LOOP_H_
#define _DOUBLE_LOOP_H_
#include "SectionManager.h"

class DoubleLoop : public SectionManager {
    public:
        DoubleLoop();
        

    protected:

    private:
        /*?ｿｽ?ｿｽ?ｿｽ?ｿｽ
            LENGTH,{?ｿｽ?ｿｽ?ｿｽ?ｿｽ}
            TIME,{?ｿｽ?ｿｽ?ｿｽ?ｿｽ}
            COLOR,{?ｿｽF,?ｿｽﾊ度}
            BLOCKCOLOR,{?ｿｽﾔブ?ｿｽ?ｿｽ?ｿｽb?ｿｽN,?ｿｽﾂブ?ｿｽ?ｿｽ?ｿｽb?ｿｽN,?ｿｽﾊ度,?ｿｽ?ｿｽ?ｿｽ?ｿｽ}
            TURNANGLE,{?ｿｽ?ｿｽ?ｿｽ?ｿｽp?ｿｽx}  //?ｿｽ?ｿｽ?ｿｽs?ｿｽﾌゑｿｽ?ｿｽ?ｯ趣ｿｽ?ｿｽl?ｿｽﾍ右?ｿｽ?ｿｽ]?ｿｽ?ｿｽ?ｿｽ}?ｿｽC?ｿｽi?ｿｽX?ｿｽA?ｿｽ?ｿｽ?ｿｽ?ｿｽ]?ｿｽﾍプ?ｿｽ?ｿｽ?ｿｽX//
            ARMANGLE,{?ｿｽA?ｿｽ[?ｿｽ?ｿｽ?ｿｽp?ｿｽx}
            TEELANGLE,{?ｿｽ?ｿｽ?ｿｽ?ｿｽ?ｿｽﾛの目標?ｿｽp?ｿｽx}
            BRIGHTNESS,{?ｿｽP?ｿｽx?ｿｽl,?ｿｽ?ｿｽ?ｿｽ?ｿｽ?ｿｽ?ｿｽ1?ｿｽ?ｿｽ?ｿｽ?ｿｽ?ｿｽ?ｿｽ0}
            ENDJ,
            NONE
            */

           /*?ｿｽ?ｿｽ?ｿｽ?ｿｽ
            WALKER,{?ｿｽO?ｿｽi?ｿｽﾌパ?ｿｽ?ｿｽ?ｿｽ[,?ｿｽ?ｿｽ?ｿｽ?ｿｽﾌパ?ｿｽ?ｿｽ?ｿｽ[}  //?ｿｽ?ｿｽ?ｿｽ?ｿｽﾌパ?ｿｽ?ｿｽ?ｿｽ[?ｿｽﾍ右?ｿｽ?ｿｽ]?ｿｽ?ｿｽ?ｿｽv?ｿｽ?ｿｽ?ｿｽX?ｿｽA?ｿｽ?ｿｽ?ｿｽ?ｿｽ]?ｿｽﾍマ?ｿｽC?ｿｽi?ｿｽX//
            TRACER,{?ｿｽ?ｿｽ?ｿｽx,?ｿｽ?ｿｽ?ｿｽ?ｿｽ,P,I,D,?ｿｽp?ｿｽx?ｿｽﾚ標?ｿｽl,?ｿｽ?ｿｽ?ｿｽ?ｿｽ?ｿｽP}
            ARM,{?ｿｽﾚ標?ｿｽﾌア?ｿｽ[?ｿｽ?ｿｽ?ｿｽﾌ角?ｿｽx}
            TEEL,{?ｿｽ?ｿｽ?ｿｽ?ｿｽ?ｿｽﾛの??ｿｽ?ｿｽ[?ｿｽ^?ｿｽ[?ｿｽﾌ具ｿｽ?ｿｽ?ｿｽ}
            END
            */
           
        SecParam spara [100] = {
            {Section::WALKER,{0, 0},Section::TIME,{1},Section::NONE,{}},

            //{Section::TRACER,{30, 0,  33, 18, 4.8,0,0,LineTracer::LEFTEDGE},Section::LENGTH,{100},Section::NONE,{}},//入るところ
            //{Section::WALKER,{0, 0},Section::LENGTH,{150},Section::NONE,{}},

            //{Section::TRACER,{30, 0,  33, 18, 4.8,0,0,LineTracer::LEFTEDGE},Section::LENGTH,{100},Section::NONE,{}},//入るところ
            //{Section::TRACER,{30, 0,  33, 18, 4.8,0,0,LineTracer::RIGHTEDGE},Section::LENGTH,{100},Section::NONE,{}},//入るところ
            //{Section::TRACER,{30, 0,  33, 23, 4.8,0,0,LineTracer::RIGHTEDGE},Section::LENGTH,{150},Section::NONE,{}},//大円の内側
            //{Section::TRACER,{30, 0,  34, 28, 5,0,0,LineTracer::LEFTEDGE},Section::LENGTH,{200},Section::NONE,{}},//小円の内側
            //{Section::VIRTUALSTRAIGHT,{10,30,30,10,3.35},Section::LENGTH,{400},Section::NONE,{}},//直線仮想

            

            {Section::TRACER,{20, -0.5,  30, 10, 7,0,0,LineTracer::LEFTEDGE},Section::LENGTH,{12},Section::NONE,{}},
            {Section::TRACER,{20, -0.5,  30, 10, 7,0,0,LineTracer::LEFTEDGE},Section::COLOR,{228,0.1},Section::NONE,{}},
            //{Section::WALKER,{0, 0},Section::LENGTH,{100},Section::NONE,{}},//青検知して止まる

            {Section::VIRTUALSTRAIGHT,{-10.5,30,30,10,3.35},Section::LENGTH,{20},Section::NONE,{}},//直線仮想
            {Section::TRACER,{30, -0.25,  8, 18, 3.3,0,0,LineTracer::LEFTEDGE},Section::LENGTH,{100},Section::NONE,{}},//入るところ
            {Section::TRACER,{30, -0.5,  8, 20, 3.3,0,0,LineTracer::LEFTEDGE},Section::LENGTH,{30},Section::NONE,{}},//大円の内側
            {Section::TRACER,{30, -0.5,  15, 23, 3.7,0,0,LineTracer::LEFTEDGE},Section::LENGTH,{30},Section::NONE,{}},//大円の内側
            {Section::TRACER,{30, -0.5,  15, 23, 3.7,0,0,LineTracer::LEFTEDGE},Section::LENGTH,{25},Section::NONE,{}},//大円の内側
            {Section::TRACER,{30, -0.5,  15, 23, 3.7,0,0,LineTracer::LEFTEDGE},Section::COLOR,{228,0.1},Section::NONE,{}},


           
            {Section::WALKER,{0, 0},Section::LENGTH,{150},Section::NONE,{}},
            
           
            {Section::TRACER,{12, -0.25,  30, 16, 3.45,0,0,LineTracer::LEFTEDGE},Section::LENGTH,{18},Section::NONE,{}},//??ｿｽ?ｿｽ?
            {Section::VIRTUALSTRAIGHT,{0,15,20,5,2,LineTracer::LEFTEDGE},Section::COLOR,{15,0.5},Section::NONE,{}},

            {Section::END,{},Section::ENDJ,{}},
        };
        /*{
            {LineTracer,},{},{},{},{}}
            */

};

#endif
