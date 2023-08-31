#ifndef _DOUBLE_LOOP_H_
#define _DOUBLE_LOOP_H_
#include "SectionManager.h"

class DoubleLoop : public SectionManager {
    public:
        DoubleLoop();
        

    protected:

    private:
        /*判定
            LENGTH,{長さ}
            TIME,{時間}
            COLOR,{色,彩度}
            BLOCKCOLOR,{赤ブロック,青ブロック,彩度,時間}
            TURNANGLE,{旋回角度}  //走行体が受け取る値は右回転がマイナス、左回転はプラス//
            ARMANGLE,{アーム角度}
            TEELANGLE,{しっぽの目標角度}
            BRIGHTNESS,{輝度値,白判定1黒判定0}
            ENDJ,
            NONE
            */

           /*動作
            WALKER,{前進のパワー,旋回のパワー}  //旋回のパワーは右回転がプラス、左回転はマイナス//
            TRACER,{速度,白黒,P,I,D,角度目標値,旋回のP}
            ARM,{目標のアームの角度}
            TEEL,{しっぽのモーターの強さ}
            END
            */
           
        SecParam spara [100] = {
            {Section::WALKER,{0, 0},Section::TIME,{1},Section::NONE,{}},
            //{Section::TRACER,{16, -0.25,  50, 30, 13,0,0,LineTracer::LEFTEDGE},Section::LENGTH,{10},Section::NONE,{}},
            //{Section::VIRTUALSTRAIGHT,{0,16,20,5,2},Section::COLOR,{15,0.5},Section::NONE,{}},
            //{Section::TRACER,{20, -0.25,  55, 10, 7.8,0,0,LineTracer::RIGHTEDGE},Section::COLOR,{200,0.5},Section::NONE,{}},



            //{Section::WALKER,{0, 0},Section::LENGTH,{2000},Section::NONE,{}},
            /*{Section::WALKER,{40, 0},Section::TIME,{100},Section::NONE,{}},

            {Section::WALKER,{0, 0},Section::TIME,{1},Section::NONE,{}},
            {Section::ARM,{60},Section::BLOCKCOLOR,{13,200,0.5,400},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{1},Section::NONE,{}},*/

           
            

           //{Section::TRACER,{0, 0, 0, 0, 0,0,0,LineTracer::LEFTEDGE},Section::LENGTH,{500},Section::NONE,{}},//止まる

            {Section::END,{},Section::ENDJ,{}},
        };
        /*{
            {LineTracer,},{},{},{},{}}
            */

};

#endif
