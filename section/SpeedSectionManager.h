#ifndef _SPEED_SECTION_MANAGER_H_
#define _SPEED_SECTION_MANAGER_H_
#include "SectionManager.h"

class SpeedSectionManager : public SectionManager {
    public:
        SpeedSectionManager();
        

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
            ENDJ,
            NONE
            */

           /*?ｿｽ?ｿｽ?ｿｽ?ｿｽ
            WALKER,{?ｿｽO?ｿｽi?ｿｽﾌパ?ｿｽ?ｿｽ?ｿｽ[,?ｿｽ?ｿｽ?ｿｽ?ｿｽﾌパ?ｿｽ?ｿｽ?ｿｽ[}  //?ｿｽ?ｿｽ?ｿｽ?ｿｽﾌパ?ｿｽ?ｿｽ?ｿｽ[?ｿｽﾍ右?ｿｽ?ｿｽ]?ｿｽ?ｿｽ?ｿｽv?ｿｽ?ｿｽ?ｿｽX?ｿｽA?ｿｽ?ｿｽ?ｿｽ?ｿｽ]?ｿｽﾍマ?ｿｽC?ｿｽi?ｿｽX//
            TRACER,{?ｿｽ?ｿｽ?ｿｽx,?ｿｽ?ｿｽ?ｿｽ?ｿｽ,P,I,D,?ｿｽp?ｿｽx?ｿｽﾚ標?ｿｽl,?ｿｽ?ｿｽ?ｿｽ?ｿｽ?ｿｽP}
            ARM,{?ｿｽﾚ標?ｿｽﾌア?ｿｽ[?ｿｽ?ｿｽ?ｿｽﾌ角?ｿｽx}
            TEEL,{?ｿｽ?ｿｽ?ｿｽ?ｿｽ?ｿｽﾛの??ｿｽ?ｿｽ[?ｿｽ^?ｿｽ[?ｿｽﾌ具ｿｽ?ｿｽ?ｿｽ}
            VIRTUALSTRAIGHT,{?ｿｽ?ｿｽ?ｿｽs?ｿｽp?ｿｽx,?ｿｽ?ｿｽ?ｿｽx,P,I,D}
            END
            */
           
        SecParam spara [100] = {
            //{Section::TRACER,{60, -0.25,  30, 70, 6.2525,0,0,LineTracer::LEFTEDGE},Section::LENGTH,{250},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{1},Section::NONE,{}},


            //{Section::WALKER,{0, 0},Section::LENGTH,{100},Section::NONE,{}},
            //{Section::WALKER,{20,0},Section::BRIGHTNESS,{0.25,0},Section::NONE,{}},
            //{Section::DEFOLTARMCHANGE,{-15},Section::TIME,{3},Section::NONE,{}},
            //{Section::TRACER,{70, -0.25,  30, 10, 9.8,0,0,LineTracer::LEFTEDGE},Section::LENGTH,{300},Section::NONE,{}},
            //{Section::TRACER,{35, -0.25,  0, 0, 0,10,0,LineTracer::LEFTEDGE},Section::LENGTH,{50},Section::NONE,{}},
        /*  {Section::TRACER,{70, -0.25,  30, 10, 9.8,0,0,LineTracer::LEFTEDGE},Section::LENGTH,{170},Section::NONE,{}},
            {Section::TRACER,{35, -0.25,  0, 0,0,10,0,LineTracer::LEFTEDGE},Section::LENGTH,{50},Section::NONE,{}},
            {Section::TRACER,{70, -0.25,  30, 10, 9.8,0,0,LineTracer::LEFTEDGE},Section::LENGTH,{25},Section::NONE,{}},

            {Section::WALKER,{0, 0},Section::TIME,{50},Section::NONE,{}},
            {Section::TRACER,{28, -0.25,  30, 10, 9.8,0,0,LineTracer::LEFTEDGE},Section::LENGTH,{15},Section::NONE,{}},
        */      //{Section::VIRTUALCURVE,{-10,18,22,5,2},Section::LENGTH,{15},Section::NONE,{}},



            //{Section::TRACER,{0, 0, 0, 0, 0,0,0,LineTracer::LEFTEDGE},Section::LENGTH,{500},Section::NONE,{}},
            //{Section::WALKER,{0, 0},Section::LENGTH,{100},Section::NONE,{}},
            {Section::END,{},Section::ENDJ,{}},
        };
        /*{
            {LineTracer,},{},{},{},{}}
            */

};

#endif
