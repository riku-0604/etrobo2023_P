#ifndef _DOUBLE_LOOP_H_
#define _DOUBLE_LOOP_H_
#include "SectionManager.h"

class DoubleLoop : public SectionManager {
    public:
        DoubleLoop();
        

    protected:

    private:
        /*����
            LENGTH,{����}
            TIME,{����}
            COLOR,{�F,�ʓx}
            BLOCKCOLOR,{�ԃu���b�N,�u���b�N,�ʓx,����}
            TURNANGLE,{����p�x}  //���s�̂��󂯎��l�͉E��]���}�C�i�X�A����]�̓v���X//
            ARMANGLE,{�A�[���p�x}
            TEELANGLE,{�����ۂ̖ڕW�p�x}
            BRIGHTNESS,{�P�x�l,������1������0}
            ENDJ,
            NONE
            */

           /*����
            WALKER,{�O�i�̃p���[,����̃p���[}  //����̃p���[�͉E��]���v���X�A����]�̓}�C�i�X//
            TRACER,{���x,����,P,I,D,�p�x�ڕW�l,�����P}
            ARM,{�ڕW�̃A�[���̊p�x}
            TEEL,{�����ۂ̃��[�^�[�̋���}
            END
            */
           
        SecParam spara [100] = {
            {Section::TRACER,{50, -0.5,  35, 10, 8,0,0,LineTracer::RIGHTEDGE},Section::LENGTH,{4},Section::NONE,{}},
            {Section::TRACER,{35, -0.5,  30, 10, 8,0,0,LineTracer::RIGHTEDGE},Section::LENGTH,{6},Section::NONE,{}},
            //{Section::TRACER,{20, -0.5,  30, 10, 8,0,0,LineTracer::RIGHTEDGE},Section::LENGTH,{4},Section::NONE,{}},
            //{Section::TRACER,{19, -0.5,  30, 10, 4,0,0,LineTracer::RIGHTEDGE},Section::LENGTH,{10},Section::NONE,{}},
            //{Section::TRACER,{19, -0.5,  30, 10, 4,0,0,LineTracer::LEFTEDGE},Section::LENGTH,{55},Section::NONE,{}},
            //{Section::TRACER,{19, -0.5,  30, 10, 4,0,0,LineTracer::RIGHTEDGE},Section::LENGTH,{10},Section::NONE,{}},

            {Section::TRACER,{20, -0.6,  30, 10, 8,0,0,LineTracer::RIGHTEDGE},Section::COLOR,{228,0.3},Section::NONE,{}},//青マーカー検知用
            //{Section::TRACER,{22, 0,  30, 10, 5,0,0,LineTracer::LEFTEDGE},Section::LENGTH,{10},Section::NONE,{}},
            //{Section::TRACER,{22, -0.5,  30, 10, 5,0,0,LineTracer::LEFTEDGE},Section::LENGTH,{10},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{150},Section::NONE,{}},
            //{Section::TURNWALKER,{-50,20,5,2},Section::TURNANGLE,{1},Section::NONE,{}},
            //{Section::WALKER,{0, 0},Section::TIME,{100},Section::NONE,{}},
            {Section::VIRTUALSTRAIGHT,{9,25,20,5,3,LineTracer::RIGHTEDGE},Section::LENGTH,{16},Section::NONE,{}},
            

            //{Section::TRACER,{22, -0.5,  30, 10, 5,0,0,LineTracer::RIGHTEDGE},Section::LENGTH,{10},Section::NONE,{}},
            {Section::TRACER,{30, 0,  16, 10, 8,0,0,LineTracer::RIGHTEDGE},Section::LENGTH,{128},Section::NONE,{}},
            //{Section::WALKER,{0, 0},Section::TIME,{100},Section::NONE,{}},
            {Section::TRACER,{20, -0.3,  16, 10, 8,0,0,LineTracer::RIGHTEDGE},Section::COLOR,{228,0.3},Section::NONE,{}},//青マーカー検知用
            //{Section::WALKER,{0, 0},Section::TIME,{150},Section::NONE,{}},
            {Section::TRACER,{23, 0,  16, 10, 8,0,0,LineTracer::RIGHTEDGE},Section::LENGTH,{12},Section::NONE,{}},
            //{Section::WALKER,{0, 0},Section::TIME,{100},Section::NONE,{}},
            {Section::VIRTUALSTRAIGHT,{16,25,20,5,2,LineTracer::RIGHTEDGE},Section::LENGTH,{12},Section::NONE,{}},
            {Section::TRACER,{30, 0,  16, 10, 9,0,0,LineTracer::RIGHTEDGE},Section::LENGTH,{10},Section::NONE,{}},
            {Section::TRACER,{30, 0,  16, 10, 8,0,0,LineTracer::RIGHTEDGE},Section::LENGTH,{120},Section::NONE,{}},
            //{Section::WALKER,{0, 0},Section::TIME,{100},Section::NONE,{}},
            //{Section::TRACER,{30, 0,  32, 10, 8,0,0,LineTracer::RIGHTEDGE},Section::LENGTH,{110},Section::NONE,{}},
            {Section::TRACER,{20, -0.3,  16, 10, 7,0,0,LineTracer::RIGHTEDGE},Section::COLOR,{228,0.3},Section::NONE,{}},
            //{Section::TRACER,{0, 0, 0, 0, 0,0,0,LineTracer::LEFTEDGE},Section::LENGTH,{500},Section::NONE,{}},//forced termination
            //{Section::WALKER,{0, 0},Section::TIME,{100},Section::NONE,{}},
            {Section::TRACER,{23, -0.1,  16, 10, 8,0,0,LineTracer::RIGHTEDGE},Section::LENGTH,{25},Section::NONE,{}},
            {Section::TRACER,{23, -0.1,  16, 10, 8,0,0,LineTracer::LEFTEDGE},Section::LENGTH,{10},Section::NONE,{}},
            {Section::TRACER,{30, 0,  16, 10, 8,0,0,LineTracer::LEFTEDGE},Section::LENGTH,{230},Section::NONE,{}},
            {Section::TRACER,{20, -0.3,  16, 10, 8,0,0,LineTracer::LEFTEDGE},Section::COLOR,{228,0.3},Section::NONE,{}},
            //{Section::WALKER,{0, 0},Section::TIME,{100},Section::NONE,{}},
            {Section::TRACER,{30, -0.1,  17, 10, 8,0,0,LineTracer::LEFTEDGE},Section::LENGTH,{35},Section::NONE,{}},
            //{Section::TRACER,{30, -0.4,  40, 10, 9,0,0,LineTracer::LEFTEDGE},Section::LENGTH,{5},Section::NONE,{}},
            
            {Section::TRACER,{30, 0,  16, 10, 8,0,0,LineTracer::RIGHTEDGE},Section::LENGTH,{160},Section::NONE,{}},
            //{Section::TRACER,{28, 0,  30, 10, 8,20,0,LineTracer::LEFTEDGE},Section::LENGTH,{35},Section::NONE,{}},
            {Section::TRACER,{30, 0,  16, 10, 8,-20,0,LineTracer::RIGHTEDGE},Section::LENGTH,{30},Section::NONE,{}},
            {Section::TRACER,{30, -0.5,  16, 10, 8,0,0,LineTracer::RIGHTEDGE},Section::LENGTH,{25},Section::NONE,{}},
            {Section::TRACER,{23, 0,  16, 10, 8,0,0,LineTracer::RIGHTEDGE},Section::COLOR,{228,0.3},Section::NONE,{}},
            {Section::TRACER,{35, 0,  16, 10, 7,0,0,LineTracer::RIGHTEDGE},Section::LENGTH,{140},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{200},Section::NONE,{}},
            {Section::VIRTUALSTRAIGHT,{0,19,20,5,2,LineTracer::RIGHTEDGE},Section::COLOR,{20,0.5},Section::NONE,{}},//赤
            //{Section::TRACER,{25, 0,  30, 10, 7,0,0,LineTracer::LEFTEDGE},Section::COLOR,{15,0.1},Section::NONE,{}},
            
            {Section::TRACER,{0, 0, 0, 0, 0,0,0,LineTracer::LEFTEDGE},Section::LENGTH,{500},Section::NONE,{}},
            {Section::END,{},Section::ENDJ,{}},
        };
        /*{
            {LineTracer,},{},{},{},{}}
            */

};

#endif
