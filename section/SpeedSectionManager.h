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
            //{Section::WALKER,{0, 0},Section::COLOR,{120,0.3},Section::NONE,{}},
            //{Section::TRACER,{18, -0.25,  35, 14, 9.8,0,0,LineTracer::LEFTEDGE},Section::COLOR,{103,0.4},Section::NONE,{}},
            //{Section::WALKER,{0, 0},Section::LENGTH,{2000},Section::NONE,{}},

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


            //{Section::TRACER,{0, 0, 0, 0, 0,0,0,LineTracer::LEFTEDGE},Section::LENGTH,{500},Section::NONE,{}},//�~�܂�

            {Section::END,{},Section::ENDJ,{}},
        };
        /*{
            {LineTracer,},{},{},{},{}}
            */

};

#endif
