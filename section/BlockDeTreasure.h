#ifndef _BLOCK_DE_TREASURE_H_
#define _BLOCK_DE_TREASURE_H_
#include "SectionManager.h"

class BlockDeTreasure : public SectionManager {
    public:
        BlockDeTreasure();
        bool IntoBlockDeTreasure();
        bool MoveToBlock();
        bool GetoutBlock();
        bool JudgeingColor();
        bool GettingBlock();
        bool MoveToGoal();
        bool MoveToBlock2();
        bool MoveToBlock3();

        bool run();

        bool runBlock();

        enum State {
            INIT_INTO_BLOCK_DE_TREASURE,
            INTO_BLOCK_DE_TREASURE,

            INIT_MOVE_TO_BLOCK,
            MOVE_TO_BLOCK,

            INIT_MOVE_TO_BLOCK_2,
            MOVE_TO_BLOCK_2,

            INIT_MOVE_TO_BLOCK_3,
            MOVE_TO_BLOCK_3,

            INIT_GETOUT_BLOCK,
            GETOUT_BLOCK,

            INIT_JUDGEING_COLOR,
            JUDGEING_COLOR,

            INIT_GETTING_BLOCK,
            GETTING_BLOCK,

            INIT_MOVE_TO_GOAL,
            MOVE_TO_GOAL,
            END,
        };

    protected:

    private:
        State mState;

        int WinnerColor;
        int BlockCount = 0;
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
            VIRTUALCURVE,{蜊雁ｾ?,騾溷ｺｦ,P,I,D}
            END
            */
           
        /*SecParam spara [100] = {
            {Section::WALKER,{0, 0},Section::TIME,{1},Section::NONE,{}},
            {Section::TEEL,{60},Section::TEELANGLE,{3000},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{1},Section::NONE,{}},
            {Section::ARM,{55},Section::BLOCKCOLOR,{13,200,0.5,400},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{1},Section::NONE,{}},

            {Section::TRACER,{0, 0, 0, 0, 0,0,0,LineTracer::LEFTEDGE},Section::LENGTH,{500},Section::NONE,{}},//?ｿｽ~?ｿｽﾜゑｿｽ

            {Section::END,{},Section::ENDJ,{}},
        };*/
        

        SecParam IntoBlockDeTreasurepara[100] = {
            {Section::DEFOLTARMCHANGE,{0},Section::TIME,{1},Section::NONE,{}},
            /*{Section::WALKER,{0, 0},Section::TIME,{1},Section::NONE,{}},
            {Section::TEEL,{-70},Section::TEELANGLE,{-4300},Section::NONE,{}},//しっぽのちょうど良い角度消すな
            {Section::WALKER,{0, 0},Section::TIME,{1},Section::NONE,{}},*/

            {Section::WALKER,{40, 0},Section::LENGTH,{55},Section::NONE,{}},
            {Section::WALKER,{0, -20},Section::TURNANGLE,{71},Section::NONE,{}},
            {Section::WALKER,{20, 0},Section::LENGTH,{16},Section::NONE,{}},
            {Section::DEFOLTARMCHANGE,{40},Section::TIME,{1},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{1},Section::NONE,{}},
            {Section::TEEL,{70},Section::TEELANGLE,{4200},Section::NONE,{}},//しっぽのちょうど良い角度消すな
            {Section::WALKER,{0, 0},Section::TIME,{1},Section::NONE,{}},
            {Section::DEFOLTARMCHANGE,{-15},Section::TIME,{1},Section::NONE,{}},
            {Section::TRACER,{20, -0.25,  55, 10, 7.8,0,0,LineTracer::RIGHTEDGE},Section::COLOR,{200,0.5},Section::NONE,{}},
            {Section::WALKER,{20, 0},Section::LENGTH,{8},Section::NONE,{}},




            //もとに戻す処理
            {Section::WALKER,{0, 0},Section::TIME,{500},Section::NONE,{}},
            {Section::DEFOLTARMCHANGE,{40},Section::TIME,{1},Section::NONE,{}},
            {Section::TEEL,{-70},Section::TEELANGLE,{-4200},Section::NONE,{}},//しっぽのちょうど良い角度消すな
            {Section::WALKER,{0, 0},Section::TIME,{1},Section::NONE,{}},
            {Section::DEFOLTARMCHANGE,{0},Section::TIME,{1},Section::NONE,{}},//ここまで
            

            //{Section::DEFOLTARMCHANGE,{40},Section::TIME,{1},Section::NONE,{}},


            //{Section::WALKER,{40, 0},Section::TIME,{100},Section::NONE,{}},
            //{Section::CHANGEDEFOLTARM,{0},Section::TIME,{1},Section::NONE,{}},
           /*{Section::WALKER,{0, -40},Section::TURNANGLE,{55},Section::NONE,{}},
            {Section::WALKER,{40, 0},Section::LENGTH,{10},Section::NONE,{}},*/
            /*{Section::WALKER,{0, 0},Section::TIME,{1},Section::NONE,{}},
            {Section::ARM,{60},Section::BLOCKCOLOR,{13,200,0.5,100},Section::NONE,{}},*/
            /*{Section::WALKER,{0, 0},Section::TIME,{1},Section::NONE,{}},
            {Section::TEEL,{70},Section::TEELANGLE,{4300},Section::NONE,{}},//しっぽのちょうど良い角度消すな
            {Section::WALKER,{0, 0},Section::TIME,{1},Section::NONE,{}},*/
            //{Section::WALKER,{0, 0},Section::TIME,{1},Section::NONE,{}},
            //{Section::ARM,{-10},Section::BLOCKCOLOR,{13,200,0.5,100},Section::NONE,{}},
            //{Section::WALKER,{0, 0},Section::TIME,{1},Section::NONE,{}},
           // {Section::TRACER,{20, -0.25,  45, 10, 9.8,0,0,LineTracer::RIGHTEDGE},Section::LENGTH,{19},Section::NONE,{}},
            //{Section::WALKER,{20, 0},Section::LENGTH,{8},Section::NONE,{}},


            /*{Section::WALKER,{0, 0},Section::TIME,{1},Section::NONE,{}},
            {Section::TEEL,{-70},Section::TEELANGLE,{-4300},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{1},Section::NONE,{}},*/

            {Section::WALKER,{0, 0},Section::LENGTH,{2000},Section::NONE,{}},
            


            //{Section::WALKER,{40, 0},Section::LENGTH,{52},Section::NONE,{}},
            {Section::WALKER,{0, -20},Section::TURNANGLE,{80},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{1},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{1},Section::NONE,{}},
            //{Section::VIRTUALCURVE,{}}
            {Section::WALKER,{20, 0},Section::LENGTH,{30},Section::NONE,{}},

            {Section::TURNWALKER,{25},Section::TURNANGLE,{-90},Section::NONE,{}},
            //{Section::VIRTUALSTRAIGHT,{-45,20,15,5,3},Section::LENGTH,{50},Section::NONE,{}},


            //{Section::WALKER,{0, -20},Section::TURNANGLE,{60},Section::NONE,{}},
            //{Section::WALKER,{40, 0},Section::LENGTH,{55},Section::NONE,{}},
            //{Section::TRACER,{60, -0.25,  30, 70, 6.2525,0,0,LineTracer::LEFTEDGE},Section::LENGTH,{40},Section::NONE,{}},
            /*{Section::WALKER,{40, 0},Section::LENGTH,{38},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{1},Section::NONE,{}},
            {Section::ARM,{60},Section::BLOCKCOLOR,{13,200,0.5,100},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{1},Section::NONE,{}},*/


            {Section::WALKER,{0, 0},Section::LENGTH,{1000},Section::NONE,{}},//豁｢縺ｾ繧?

            {Section::END,{},Section::ENDJ,{}},
        };

        SecParam MoveToBlockpara[100] = {
            {Section::WALKER,{0, 20},Section::TURNANGLE,{-55},Section::NONE,{}},
            {Section::END,{},Section::ENDJ,{}},
        };

        SecParam MoveToBlockpara2[100] = {
            {Section::WALKER,{0, 20},Section::TURNANGLE,{-55},Section::NONE,{}},
            {Section::END,{},Section::ENDJ,{}},
        };

        SecParam MoveToBlockpara3[100] = {
           
            {Section::WALKER,{0, 20},Section::TURNANGLE,{-55},Section::NONE,{}},
            //{Section::WALKER,{0, 0},Section::LENGTH,{100},Section::NONE,{}},
            {Section::END,{},Section::ENDJ,{}},
        };
        
        SecParam JudgeingColorpara[100] = {
            {Section::WALKER,{0, 0},Section::TIME,{1},Section::NONE,{}},
            {Section::ARM,{60},Section::BLOCKCOLOR,{13,200,0.5,100},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{1},Section::NONE,{}},

            //{Section::WALKER,{0, 0},Section::LENGTH,{100},Section::NONE,{}},//豁｢縺ｾ繧?
            {Section::END,{},Section::ENDJ,{}},
        };

        SecParam GetoutBlockpara[100] = {
            {Section::WALKER,{-15, 0},Section::LENGTH,{-10},Section::NONE,{}},
            {Section::WALKER,{0, 20},Section::TURNANGLE,{-45},Section::NONE,{}},
            {Section::WALKER,{15, 0},Section::LENGTH,{30},Section::NONE,{}},
            {Section::WALKER,{0, 20},Section::TURNANGLE,{-55},Section::NONE,{}},

            //{Section::WALKER,{0, 0},Section::LENGTH,{100},Section::NONE,{}},
            {Section::END,{},Section::ENDJ,{}},
        };


        SecParam GettingBlockpara[100] = {
            {Section::WALKER,{40, 0},Section::LENGTH,{20},Section::NONE,{}},
            {Section::WALKER,{0, 20},Section::TURNANGLE,{-90},Section::NONE,{}},
            {Section::WALKER,{20, 0},Section::LENGTH,{50},Section::NONE,{}},

            //{Section::WALKER,{0, 0},Section::LENGTH,{100},Section::NONE,{}},
            {Section::END,{},Section::ENDJ,{}},
        };

        SecParam MoveToGoalpara[100] = {
           

            {Section::WALKER,{0, 0},Section::LENGTH,{100},Section::NONE,{}},
            {Section::END,{},Section::ENDJ,{}},
        };

        

};

#endif
