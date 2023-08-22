#ifndef _SPEED_SECTION_MANAGER_H_
#define _SPEED_SECTION_MANAGER_H_
#include "SectionManager.h"

class SpeedSectionManager : public SectionManager {
    public:
        SpeedSectionManager();
        

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
            ENDJ,
            NONE
            */

           /*����
            WALKER,{�O�i�̃p���[,����̃p���[}  //����̃p���[�͉E��]���v���X�A����]�̓}�C�i�X//
            TRACER,{���x,����,P,I,D,�p�x�ڕW�l,�����P}
            ARM,{�ڕW�̃A�[���̊p�x}
            TEEL,{�����ۂ̃��[�^�[�̋���}
            VIRTUALSTRAIGHT,{���s�p�x,���x,P,I,D}
            END
            */
           
        SecParam spara [100] = {
            {Section::WALKER,{0, 0},Section::TIME,{1},Section::NONE,{}},
            {Section::DEFOLTARMCHANGE,{-15},Section::TIME,{3},Section::NONE,{}},
            {Section::TRACER,{70, -0.25,  30, 10, 9.8,0,0,LineTracer::LEFTEDGE},Section::LENGTH,{300},Section::NONE,{}},
            {Section::TRACER,{35, -0.25,  0, 0, 0,10,0,LineTracer::LEFTEDGE},Section::LENGTH,{50},Section::NONE,{}},
        /*  {Section::TRACER,{70, -0.25,  30, 10, 9.8,0,0,LineTracer::LEFTEDGE},Section::LENGTH,{170},Section::NONE,{}},
            {Section::TRACER,{35, -0.25,  0, 0,0,10,0,LineTracer::LEFTEDGE},Section::LENGTH,{50},Section::NONE,{}},
            {Section::TRACER,{70, -0.25,  30, 10, 9.8,0,0,LineTracer::LEFTEDGE},Section::LENGTH,{25},Section::NONE,{}},

            {Section::WALKER,{0, 0},Section::TIME,{50},Section::NONE,{}},
            {Section::TRACER,{28, -0.25,  30, 10, 9.8,0,0,LineTracer::LEFTEDGE},Section::LENGTH,{15},Section::NONE,{}},
        */      //{Section::VIRTUALCURVE,{-10,18,22,5,2},Section::LENGTH,{15},Section::NONE,{}},



            {Section::TRACER,{0, 0, 0, 0, 0,0,0,LineTracer::LEFTEDGE},Section::LENGTH,{500},Section::NONE,{}},

            {Section::END,{},Section::ENDJ,{}},
        };
        /*{
            {LineTracer,},{},{},{},{}}
            */

};

#endif
