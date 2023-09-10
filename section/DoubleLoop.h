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
            

            /*
            {Section::TRACER,{20, -0.5,  30, 10, 7,0,0,LineTracer::LEFTEDGE},Section::LENGTH,{12},Section::NONE,{}},
            {Section::TRACER,{20, -0.5,  30, 10, 7,0,0,LineTracer::LEFTEDGE},Section::COLOR,{228,0.1},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{100},Section::NONE,{}},//青検知して止まる

            //{Section::TRACER,{20, -0.4,  30, 10, 7,0,0,LineTracer::LEFTEDGE},Section::LENGTH,{6},Section::NONE,{}},
            {Section::TRACER,{20, 0,  30, 10, 7,0,0,LineTracer::RIGHTEDGE},Section::LENGTH,{20},Section::NONE,{}},
            {Section::TRACER,{20, -0.4,  30, 10, 7,0,0,LineTracer::RIGHTEDGE},Section::LENGTH,{6},Section::NONE,{}},
            //{Section::TRACER,{20, 0,  30, 10, 7,0,0,LineTracer::LEFTEDGE},Section::LENGTH,{5},Section::NONE,{}},
            
            
            {Section::TRACER,{20, 0,  30, 10, 7,0,0,LineTracer::LEFTEDGE},Section::LENGTH,{88},Section::NONE,{}},
            //{Section::TRACER,{40, 0,  30, 10, 8,0,0,LineTracer::LEFTEDGE},Section::LENGTH,{90},Section::NONE,{}},
            {Section::TRACER,{20, -0.3,  30, 10, 7,0,0,LineTracer::LEFTEDGE},Section::COLOR,{228,0.1},Section::NONE,{}},//髱偵?槭?ｼ繧ｫ繝ｼ讀懃衍逕ｨ
            //{Section::WALKER,{0, 0},Section::TIME,{100},Section::NONE,{}},
            {Section::TRACER,{23, 0,  30, 10, 7,0,0,LineTracer::LEFTEDGE},Section::LENGTH,{160},Section::NONE,{}},
            {Section::TRACER,{18, -0.3,  30, 10, 7,0,0,LineTracer::LEFTEDGE},Section::COLOR,{228,0.1},Section::NONE,{}},
            //{Section::WALKER,{0, 0},Section::TIME,{100},Section::NONE,{}},
            {Section::TRACER,{23, 0,  30, 10, 7,0,0,LineTracer::LEFTEDGE},Section::LENGTH,{17},Section::NONE,{}},
            {Section::TRACER,{23, -0.3,  30, 10, 7,0,0,LineTracer::LEFTEDGE},Section::LENGTH,{7},Section::NONE,{}},
            {Section::TRACER,{23, 0,  30, 10, 8.5,0,0,LineTracer::RIGHTEDGE},Section::LENGTH,{230},Section::NONE,{}},
            {Section::TRACER,{20, -0.3,  30, 10, 7,0,0,LineTracer::RIGHTEDGE},Section::COLOR,{228,0.1},Section::NONE,{}},
            //{Section::WALKER,{0, 0},Section::TIME,{100},Section::NONE,{}},
            {Section::TRACER,{23, 0,  30, 10, 7,0,0,LineTracer::RIGHTEDGE},Section::LENGTH,{40},Section::NONE,{}},
            {Section::TRACER,{23, -0.4,  30, 10, 8,0,0,LineTracer::RIGHTEDGE},Section::LENGTH,{5},Section::NONE,{}},
            {Section::TRACER,{23, 0,  30, 10, 8.5,0,0,LineTracer::LEFTEDGE},Section::LENGTH,{158},Section::NONE,{}},
            //{Section::TRACER,{28, 0,  30, 10, 8,20,0,LineTracer::LEFTEDGE},Section::LENGTH,{35},Section::NONE,{}},
            {Section::TRACER,{25, 0,  30, 10, 7,10,0,LineTracer::LEFTEDGE},Section::LENGTH,{30},Section::NONE,{}},
            {Section::TRACER,{23, 0,  30, 10, 7,0,0,LineTracer::LEFTEDGE},Section::LENGTH,{23},Section::NONE,{}},
            {Section::TRACER,{20, -0.3,  30, 10, 7,0,0,LineTracer::LEFTEDGE},Section::COLOR,{228,0.1},Section::NONE,{}},
            {Section::TRACER,{23, 0,  30, 10, 7,0,0,LineTracer::LEFTEDGE},Section::LENGTH,{145},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{200},Section::NONE,{}},
            {Section::VIRTUALSTRAIGHT,{0,15,20,5,2,LineTracer::LEFTEDGE},Section::COLOR,{15,0.5},Section::NONE,{}},//襍､
            //{Section::TRACER,{25, 0,  30, 10, 7,0,0,LineTracer::LEFTEDGE},Section::COLOR,{15,0.1},Section::NONE,{}},
            
            //{Section::TRACER,{0, 0, 0, 0, 0,0,0,LineTracer::LEFTEDGE},Section::LENGTH,{500},Section::NONE,{}},

            {Section::WALKER,{0, 0},Section::LENGTH,{150},Section::NONE,{}},
            */
           
            {Section::TRACER,{12, -0.25,  30, 16, 3.45,0,0,LineTracer::LEFTEDGE},Section::LENGTH,{18},Section::NONE,{}},//??ｿｽ?ｿｽ?
            {Section::VIRTUALSTRAIGHT,{0,15,20,5,2,LineTracer::LEFTEDGE},Section::COLOR,{15,0.5},Section::NONE,{}},

            {Section::END,{},Section::ENDJ,{}},
        };
        /*{
            {LineTracer,},{},{},{},{}}
            */

};

#endif
