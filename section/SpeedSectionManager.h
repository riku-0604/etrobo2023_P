#ifndef _SPEED_SECTION_MANAGER_H_
#define _SPEED_SECTION_MANAGER_H_
#include "SectionManager.h"

class SpeedSectionManager : public SectionManager {
    public:
        SpeedSectionManager();
        

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
            ENDJ,
            NONE
            */

           /*動作
            WALKER,{前進のパワー,旋回のパワー}  //旋回のパワーは右回転がプラス、左回転はマイナス//
            TRACER,{速度,白黒,P,I,D,角度目標値,旋回のP}
            ARM,{目標のアームの角度}
            TEEL,{しっぽのモーターの強さ}
            VIRTUALSTRAIGHT,{走行角度,速度,P,I,D}
            END
            */
           
        SecParam spara [100] = {
            {Section::WALKER,{0, 0},Section::TIME,{1},Section::NONE,{}},
            //{Section::TRACER,{60, -0.25,  30, 70, 6.2525,0,0,LineTracer::LEFTEDGE},Section::LENGTH,{400},Section::NONE,{}},
            //{Section::WALKER,{0, 0},Section::LENGTH,{100},Section::NONE,{}},
            //{Section::WALKER,{0, 0},Section::TIME,{1},Section::NONE,{}},
           // {Section::WALKER,{60, 0},Section::TIME,{200},Section::NONE,{}},
            /*{Section::ARM,{60},Section::BLOCKCOLOR,{13,200,0.5,100},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{1},Section::NONE,{}},*/
            //{Section::WALKER,{0, 0},Section::TIME,{100},Section::NONE,{}},
            //{Section::TRACER,{40, -0.25,  30, 70, 6.2525,0,0,LineTracer::LEFTEDGE},Section::LENGTH,{50},Section::NONE,{}},
            /*{Section::WALKER,{0, 0},Section::TIME,{100},Section::NONE,{}},
            {Section::TRACER,{60, -0.25,  30, 70, 6.2525,0,0,LineTracer::LEFTEDGE},Section::LENGTH,{100},Section::NONE,{}},*/
            /*{Section::WALKER,{0, 60},Section::TIME,{100},Section::NONE,{}},
            {Section::TRACER,{60, -0.25,  30, 70, 6.2525,0,0,LineTracer::LEFTEDGE},Section::LENGTH,{200},Section::NONE,{}},
            {Section::TRACER,{60, -0.25,  30, 70, 6.2525,0,0,LineTracer::LEFTEDGE},Section::LENGTH,{300},Section::NONE,{}},
            {Section::TRACER,{60, -0.25,  30, 70, 6.2525,0,0,LineTracer::LEFTEDGE},Section::LENGTH,{400},Section::NONE,{}},*/
            /*{Section::TEEL,{60},Section::TEELANGLE,{1000},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{300},Section::NONE,{}},
            /*{Section::TRACER,{60, -0.25,  30, 70, 6.2525,0,0,LineTracer::LEFTEDGE},Section::LENGTH,{100},Section::NONE,{}},*/
            /*{Section::WALKER,{20, 0},Section::TIME,{100},Section::NONE,{}},*/
            /*{Section::TEEL,{60},Section::TEELANGLE,{4000},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{100},Section::NONE,{}},
            {Section::TEEL,{-60},Section::TEELANGLE,{-4000},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{100},Section::NONE,{}},*/
            /*{Section::ARM,{65},Section::BLOCKCOLOR,{13,200,0.5,800},Section::NONE,{}},
            {Section::WALKER,{0, 20},Section::TIME,{100},Section::NONE,{}},*/
            /*{Section::ARM,{-40},Section::ARMANGLE,{0},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{100},Section::NONE,{}},*/
           /* {Section::ARM,{0},Section::ARMANGLE,{0,1},Section::NONE,{}},
            {Section::WALKER,{50, 0},Section::TIME,{500},Section::NONE,{}},*/
           /* {Section::ARM,{-50},Section::ARMANGLE,{-50,0},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{1},Section::NONE,{}},*/

            /*{Section::WALKER,{0, -20},Section::TURNANGLE,{80},Section::NONE,{}},
            {Section::WALKER,{40, 0},Section::LENGTH,{30},Section::NONE,{}},
            {Section::WALKER,{20, 0},Section::LENGTH,{10},Section::NONE,{}},
            {Section::WALKER,{0, 20},Section::TURNANGLE,{-80},Section::NONE,{}},
            {Section::WALKER,{40, 0},Section::LENGTH,{30},Section::NONE,{}},
            {Section::WALKER,{20, 0},Section::LENGTH,{10},Section::NONE,{}},
            {Section::WALKER,{0, 20},Section::TURNANGLE,{-80},Section::NONE,{}},
            {Section::WALKER,{40, 0},Section::LENGTH,{100},Section::NONE,{}},*/


            //{Section::TRACER,{60, -0.25,  30, 70, 6.2525,0,0,LineTracer::LEFTEDGE},Section::LENGTH,{100},Section::NONE,{}},
            //{Section::TEEL,{-70},Section::TEELANGLE,{-70},Section::NONE,{}},
            /*{Section::TRACER,{28, -0.25,  30, 70, 6.2525,0,0,LineTracer::LEFTEDGE},Section::LENGTH,{30},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{1},Section::NONE,{}},
            {Section::ARM,{0},Section::ARMANGLE,{0,1},Section::NONE,{}},
            {Section::TEEL,{70},Section::TEELANGLE,{70},Section::NONE,{}},
            {Section::TEEL,{0},Section::TEELANGLE,{0},Section::NONE,{}},
            /*{Section::TRACER,{28, -0.25,  30, 70, 6.2525,0,0,LineTracer::LEFTEDGE},Section::COLOR,{29,0.5},Section::NONE,{}},
            {Section::TRACER,{60, -0.25,  30, 70, 6.2525,0,0,LineTracer::LEFTEDGE},Section::TIME,{6000},Section::NONE,{}},*/
            /*{Section::WALKER,{60, 60},Section::TIME,{450},Section::NONE,{}},*/
            
            /*{Section::TRACER,{28, -0.25,  30, 70, 6.2525,0,0,LineTracer::LEFTEDGE},Section::LENGTH,{30},Section::NONE,{}},*/


            //{Section::TRACER,{0, 0, 0, 0, 0,0,0,LineTracer::LEFTEDGE},Section::LENGTH,{500},Section::NONE,{}},//止まる

            {Section::END,{},Section::ENDJ,{}},
        };
        /*{
            {LineTracer,},{},{},{},{}}
            */

};

#endif
