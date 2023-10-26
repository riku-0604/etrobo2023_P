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
            

            
            {Section::TRACER,{50, -0.2,  33, 12, 9,0,0,LineTracer::RIGHTEDGE},Section::LENGTH,{5},Section::NONE,{}},
            //{Section::TRACER,{50, -0.2,  30, 12, 9,0,0,LineTracer::LEFTEDGE},Section::LENGTH,{2},Section::NONE,{}},
            {Section::TRACER,{40, -0.2,  28, 12, 8,0,0,LineTracer::RIGHTEDGE},Section::LENGTH,{5},Section::NONE,{}},
            {Section::TRACER,{20, -0.2,  18, 12, 8,0,0,LineTracer::RIGHTEDGE},Section::LENGTH,{6},Section::NONE,{}},

            {Section::TRACER,{19, -0.2,  18, 12, 8,0,0,LineTracer::RIGHTEDGE},Section::COLOR,{228,0.16},Section::NONE,{}},//髱偵?槭?ｼ繧ｫ繝ｼ讀懃衍逕ｨ
            //{Section::TRACER,{22, 0,  30, 10, 5,0,0,LineTracer::LEFTEDGE},Section::LENGTH,{10},Section::NONE,{}},
            //{Section::TRACER,{22, -0.5,  30, 10, 5,0,0,LineTracer::LEFTEDGE},Section::LENGTH,{10},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{150},Section::NONE,{}},
            //{Section::TURNWALKER,{-50,20,5,2},Section::TURNANGLE,{1},Section::NONE,{}},
            //{Section::WALKER,{0, 0},Section::TIME,{100},Section::NONE,{}},
            {Section::VIRTUALSTRAIGHT,{14.5,25,20,5,3,LineTracer::RIGHTEDGE},Section::LENGTH,{18},Section::NONE,{}},
            

            //{Section::TRACER,{22, -0.5,  30, 10, 5,0,0,LineTracer::RIGHTEDGE},Section::LENGTH,{10},Section::NONE,{}},
            {Section::TRACER,{33, 0,  18, 12, 8,0,0,LineTracer::RIGHTEDGE},Section::LENGTH,{128},Section::NONE,{}},
            //{Section::WALKER,{0, 0},Section::TIME,{100},Section::NONE,{}},
            {Section::TRACER,{21, -0.2,  18, 12, 8,0,0,LineTracer::RIGHTEDGE},Section::COLOR,{228,0.16},Section::NONE,{}},//髱偵?槭?ｼ繧ｫ繝ｼ讀懃衍逕ｨ
            //{Section::WALKER,{0, 0},Section::TIME,{150},Section::NONE,{}},
            {Section::TRACER,{23, 0,  18, 12, 8,0,0,LineTracer::RIGHTEDGE},Section::LENGTH,{14},Section::NONE,{}},
            {Section::VIRTUALSTRAIGHT,{15,25,20,5,2,LineTracer::RIGHTEDGE},Section::LENGTH,{13},Section::NONE,{}},
            {Section::TRACER,{23, 0,  18, 12, 10,0,0,LineTracer::RIGHTEDGE},Section::LENGTH,{10},Section::NONE,{}},
            {Section::TRACER,{30, 0,  18, 12, 8,0,0,LineTracer::RIGHTEDGE},Section::LENGTH,{128},Section::NONE,{}},
            
            {Section::TRACER,{21, -0.2,  18, 12, 7,0,0,LineTracer::RIGHTEDGE},Section::COLOR,{228,0.16},Section::NONE,{}},
            //{Section::WALKER,{0, 0},Section::TIME,{150},Section::NONE,{}},
            //{Section::TRACER,{0, 0, 0, 0, 0,0,0,LineTracer::LEFTEDGE},Section::LENGTH,{500},Section::NONE,{}},//forced termination
            //{Section::WALKER,{0, 0},Section::TIME,{100},Section::NONE,{}},
            {Section::TRACER,{21, 0,  18, 12, 8,0,0,LineTracer::RIGHTEDGE},Section::LENGTH,{28.5},Section::NONE,{}},
            //{Section::WALKER,{0, 0},Section::TIME,{150},Section::NONE,{}},
            {Section::VIRTUALSTRAIGHT,{12.3,21,20,5,2,LineTracer::RIGHTEDGE},Section::LENGTH,{6},Section::NONE,{}},
            {Section::TRACER,{29, 0,  16, 0, 8,0,0,LineTracer::LEFTEDGE},Section::LENGTH,{20},Section::NONE,{}},
            {Section::TRACER,{31, 0,  16, 0, 8,0,0,LineTracer::LEFTEDGE},Section::LENGTH,{210},Section::NONE,{}},
            {Section::TRACER,{21, -0.2, 18, 12, 8,0,0,LineTracer::LEFTEDGE},Section::COLOR,{228,0.16},Section::NONE,{}},
            //{Section::WALKER,{0, 0},Section::TIME,{150},Section::NONE,{}},
            {Section::TRACER,{21, -0.1,  18, 12, 8,0,0,LineTracer::LEFTEDGE},Section::LENGTH,{34},Section::NONE,{}},
            //{Section::TRACER,{30, -0.4,  40, 10, 9,0,0,LineTracer::LEFTEDGE},Section::LENGTH,{5},Section::NONE,{}},
            
            {Section::VIRTUALSTRAIGHT,{-2,23,20,5,2,LineTracer::RIGHTEDGE},Section::LENGTH,{8},Section::NONE,{}},
            //{Section::TRACER,{25, 0,  17, 12, 8,0,0,LineTracer::LEFTEDGE},Section::LENGTH,{10},Section::NONE,{}},
            {Section::TRACER,{30, 0,  18, 12, 8,0,0,LineTracer::RIGHTEDGE},Section::LENGTH,{97},Section::NONE,{}},
            //{Section::WALKER,{0, 0},Section::TIME,{150},Section::NONE,{}},
            {Section::VIRTUALSTRAIGHT,{6,25,20,5,2,LineTracer::RIGHTEDGE},Section::LENGTH,{19},Section::NONE,{}},
            {Section::TRACER,{32, 0,  18, 10, 8,0,0,LineTracer::RIGHTEDGE},Section::LENGTH,{43},Section::NONE,{}},
            //{Section::TRACER,{0, 0, 0, 0, 0,0,0,LineTracer::LEFTEDGE},Section::LENGTH,{500},Section::NONE,{}},
            {Section::TRACER,{40, 0, 38, 13, 10,-20,0,LineTracer::RIGHTEDGE},Section::LENGTH,{34},Section::NONE,{}},
            //{Section::WALKER,{0, 0},Section::TIME,{100},Section::NONE,{}},
            {Section::TRACER,{33, -0.1,  20, 12, 8,0,0,LineTracer::RIGHTEDGE},Section::LENGTH,{20},Section::NONE,{}},
            {Section::TRACER,{23, -0.2,  18, 12, 8,0,0,LineTracer::RIGHTEDGE},Section::COLOR,{228,0.16},Section::NONE,{}},
            {Section::TRACER,{45, 0,  40, 10, 12,0,0,LineTracer::RIGHTEDGE},Section::LENGTH,{83},Section::NONE,{}},
            {Section::TRACER,{32, 0,  18, 12, 8,0,0,LineTracer::RIGHTEDGE},Section::LENGTH,{30},Section::NONE,{}},
            
            {Section::TRACER,{23, -0.2,  18, 12, 8,0,0,LineTracer::RIGHTEDGE},Section::LENGTH,{23},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{80},Section::NONE,{}},
            {Section::VIRTUALSTRAIGHT,{0,18,20,5,2,LineTracer::RIGHTEDGE},Section::COLOR,{20,0.5},Section::NONE,{}},//襍､
            //{Section::TRACER,{25, 0,  30, 10, 7,0,0,LineTracer::LEFTEDGE},Section::COLOR,{15,0.1},Section::NONE,{}},
            
            //{Section::TRACER,{0, 0, 0, 0, 0,0,0,LineTracer::LEFTEDGE},Section::LENGTH,{500},Section::NONE,{}},
            

            

            {Section::TRACER,{0, 0, 0, 0, 0,0,0,LineTracer::LEFTEDGE},Section::LENGTH,{500},Section::NONE,{}},

            {Section::END,{},Section::ENDJ,{}},
        };
        /*{
            {LineTracer,},{},{},{},{}}
            */

};

#endif
