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
            {Section::WALKER,{0, 0},Section::TIME,{80},Section::NONE,{}},
            {Section::TURNWALKER,{25,40,5,3},Section::TURNANGLE,{-8},Section::NONE,{}},
            {Section::VIRTUALSTRAIGHT,{0,25,20,5,2},Section::LENGTH,{15},Section::NONE,{}},
            {Section::TRACER,{30, 0,  30, 10, 7,0,0,LineTracer::LEFTEDGE},Section::LENGTH,{100},Section::NONE,{}},
            //{Section::TRACER,{40, 0,  30, 10, 8,0,0,LineTracer::LEFTEDGE},Section::LENGTH,{90},Section::NONE,{}},
            {Section::TRACER,{20, -0.3,  30, 10, 7,0,0,LineTracer::LEFTEDGE},Section::COLOR,{228,0.1},Section::NONE,{}},//青マーカー検知用
            //{Section::WALKER,{0, 0},Section::TIME,{100},Section::NONE,{}},
            {Section::TRACER,{23, 0,  30, 10, 7,0,0,LineTracer::LEFTEDGE},Section::LENGTH,{160},Section::NONE,{}},
            {Section::TRACER,{18, -0.3,  30, 10, 7,0,0,LineTracer::LEFTEDGE},Section::COLOR,{228,0.1},Section::NONE,{}},
            //{Section::WALKER,{0, 0},Section::TIME,{100},Section::NONE,{}},
            {Section::TRACER,{23, 0,  30, 10, 7,0,0,LineTracer::LEFTEDGE},Section::LENGTH,{15},Section::NONE,{}},
            {Section::TRACER,{23, -0.3,  30, 10, 7,0,0,LineTracer::LEFTEDGE},Section::LENGTH,{6},Section::NONE,{}},
            {Section::TRACER,{23, 0,  30, 10, 8.5,0,0,LineTracer::RIGHTEDGE},Section::LENGTH,{230},Section::NONE,{}},
            {Section::TRACER,{20, -0.3,  30, 10, 7,0,0,LineTracer::RIGHTEDGE},Section::COLOR,{228,0.1},Section::NONE,{}},
            //{Section::WALKER,{0, 0},Section::TIME,{100},Section::NONE,{}},
            {Section::TRACER,{23, 0,  30, 10, 7,0,0,LineTracer::RIGHTEDGE},Section::LENGTH,{40},Section::NONE,{}},
            {Section::TRACER,{23, -0.3,  30, 10, 8,0,0,LineTracer::RIGHTEDGE},Section::LENGTH,{5},Section::NONE,{}},
            {Section::TRACER,{23, 0,  30, 10, 8.5,0,0,LineTracer::LEFTEDGE},Section::LENGTH,{158},Section::NONE,{}},
            //{Section::TRACER,{28, 0,  30, 10, 8,20,0,LineTracer::LEFTEDGE},Section::LENGTH,{35},Section::NONE,{}},
            {Section::TRACER,{25, 0,  30, 10, 7,10,0,LineTracer::LEFTEDGE},Section::LENGTH,{30},Section::NONE,{}},
            {Section::TRACER,{23, 0,  30, 10, 7,0,0,LineTracer::LEFTEDGE},Section::LENGTH,{23},Section::NONE,{}},
            {Section::TRACER,{20, -0.3,  30, 10, 7,0,0,LineTracer::LEFTEDGE},Section::COLOR,{228,0.1},Section::NONE,{}},
            {Section::TRACER,{23, 0,  30, 10, 7,0,0,LineTracer::LEFTEDGE},Section::LENGTH,{130},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{200},Section::NONE,{}},
            {Section::VIRTUALSTRAIGHT,{0,15,20,5,2,LineTracer::LEFTEDGE},Section::COLOR,{15,0.5},Section::NONE,{}},//赤
            //{Section::TRACER,{25, 0,  30, 10, 7,0,0,LineTracer::LEFTEDGE},Section::COLOR,{15,0.1},Section::NONE,{}},
            
            {Section::TRACER,{0, 0, 0, 0, 0,0,0,LineTracer::LEFTEDGE},Section::LENGTH,{500},Section::NONE,{}},
            {Section::END,{},Section::ENDJ,{}},
        };
        /*{
            {LineTracer,},{},{},{},{}}
            */

};

#endif
