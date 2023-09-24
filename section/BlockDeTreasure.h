#ifndef _BLOCK_DE_TREASURE_H_
#define _BLOCK_DE_TREASURE_H_
#include "SectionManager.h"
#include "HackEv3.h"

class BlockDeTreasure : public SectionManager {
    public:
        BlockDeTreasure();
        bool IntoBlockDeTreasure();
        bool MoveToBlock();
        bool MoveToBlock2();
        bool MoveToBlock3();
        bool GetoutBlock();
        bool GetoutBlockLeft();
        bool JudgeingColor();
        bool GettingBlock();
        bool GettingBlockLeft();
        bool MoveToGoal();
        
        void SelectGetout();
        void SelectGetoutRed();
        void SelectGetting();
        void SelectMove();

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

            INIT_GETOUT_BLOCK_RED,
            GETOUT_BLOCK_RED,

            INIT_GETOUT_BLOCK_LEFT,
            GETOUT_BLOCK_LEFT,

            INIT_GETOUT_BLOCK_LEFT_RED,
            GETOUT_BLOCK_LEFT_RED,

            INIT_JUDGEING_COLOR,
            JUDGEING_COLOR,

            INIT_GETTING_BLOCK,
            GETTING_BLOCK,

            INIT_GETTING_BLOCK_LEFT,
            GETTING_BLOCK_LEFT,

            INIT_GETTING_BLOCK_1,
            GETTING_BLOCK_1,

            INIT_GETTING_BLOCK_2,
            GETTING_BLOCK_2,

            INIT_GETTING_BLOCK_3,
            GETTING_BLOCK_3,

            INIT_MOVE_TO_GOAL,
            MOVE_TO_GOAL,
            END,
        };

    protected:

    private:
        State mState;

        int WinnerColor;
        int BlockCount = 0;
        int NotJudgeBlockFlag = 0;
        int BlueBlockCount = 0;
            
            
       
    
#if PATARN == 1
        SecParam IntoBlockDeTreasurepara[100] = {

            //{Section::VIRTUALSTRAIGHT,{0,36,30,10,3.45},Section::LENGTH,{400},Section::NONE,{}},


            //{Section::VIRTUALSTRAIGHT,{0,27,10,10,3.8},Section::BRIGHTNESS,{-0.3,0},Section::NONE,{}},


            //{Section::TRACER,{18, -0.25,  30, 16, 3.45,0,0,LineTracer::LEFTEDGE},Section::LENGTH,{1000},Section::NONE,{}},


            //{Section::TRACER,{23, -0.25,  30, 10, 3.45,0,0,LineTracer::LEFTEDGE},Section::LENGTH,{10},Section::NONE,{}},

            {Section::DEFOLTARMCHANGE,{5},Section::TIME,{1},Section::NONE,{}},
            
            {Section::TURNWALKER,{-10,10,1.5,0.7},Section::TURNANGLE,{75},Section::NONE,{}},
            {Section::VIRTUALSTRAIGHT,{0,36,30,10,3.45},Section::LENGTH,{40},Section::NONE,{}},
            {Section::VIRTUALSTRAIGHT,{0,12,15,3,0.7},Section::BRIGHTNESS,{-0.4,0},Section::NONE,{}},
            
            {Section::WALKER,{0, 0},Section::TIME,{2},Section::NONE,{}},
            {Section::TURNWALKER,{10,10,1.5,0.7},Section::TURNANGLE,{-65},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{2},Section::NONE,{}},
            


            /*
            {Section::DEFOLTARMCHANGE,{50},Section::TIME,{1},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{1},Section::NONE,{}},
            {Section::TEEL,{70},Section::TEELANGLE,{4500},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{1},Section::NONE,{}},
            {Section::DEFOLTARMCHANGE,{-33},Section::TIME,{5},Section::NONE,{}},
            //{Section::TURNWALKER,{-20,40,5,3},Section::TURNANGLE,{15},Section::NONE,{}},
            */
            
            {Section::END,{},Section::ENDJ,{}},
        };

        SecParam MoveToBlockpara[100] = {

            {Section::WALKER,{0, 0},Section::TIME,{10},Section::NONE,{}},
            
            {Section::TRACER,{12, -0.25,  30, 16, 3.45,0,0,LineTracer::RIGHTEDGE},Section::LENGTH,{12},Section::NONE,{}},
            
            {Section::VIRTUALSTRAIGHT,{0,12,15,3,0.7,LineTracer::RIGHTEDGE},Section::COLOR,{200,0.5},Section::NONE,{}},//??¿½?¿½?
            
            {Section::VIRTUALSTRAIGHT,{0,12,15,3,0.7},Section::LENGTH,{9},Section::NONE,{}},
            
            
        
            {Section::TRACER,{12, -0.25,  30, 16, 3.45,0,0,LineTracer::RIGHTEDGE},Section::LENGTH,{18},Section::NONE,{}},//???¿½?¿½??¿½?¿½?
            
            {Section::VIRTUALSTRAIGHT,{0,12,15,3,0.7,LineTracer::RIGHTEDGE},Section::COLOR,{15,0.5},Section::NONE,{}},//èµ¤
            {Section::VIRTUALSTRAIGHT,{0,12,15,3,0.7},Section::LENGTH,{9},Section::NONE,{}},
            
          

            {Section::TRACER,{12, -0.25,  30, 16, 3.45,0,0,LineTracer::RIGHTEDGE},Section::LENGTH,{16},Section::NONE,{}},
       
            {Section::WALKER,{0, 0},Section::TIME,{200},Section::NONE,{}},

            
            

            
            {Section::END,{},Section::ENDJ,{}},
        };

        SecParam MoveToBlockpara2[100] = {
            
            
            {Section::VIRTUALSTRAIGHT,{0,12,15,3,0.7},Section::COLOR,{15,0.4},Section::NONE,{}},
            
            {Section::VIRTUALCURVE,{7,12,13,1.5,0.7},Section::LENGTH,{7},Section::NONE,{}},
            {Section::VIRTUALCURVE,{7,12,13,1.5,0.7},Section::BRIGHTNESS,{-0.3,0},Section::NONE,{}},
            //{Section::WALKER,{0, -7},Section::TURNANGLE,{15},Section::NONE,{}},

            //{Section::WALKER,{0, 0},Section::TIME,{80},Section::NONE,{}},
            //{Section::WALKER,{15, 0},Section::LENGTH,{2},Section::NONE,{}},
            {Section::TRACER,{12, -0.25,  30, 16, 3.45,0,0,LineTracer::RIGHTEDGE},Section::LENGTH,{17},Section::NONE,{}},
            //{Section::WALKER,{0, 0},Section::TIME,{100},Section::NONE,{}},
            {Section::VIRTUALSTRAIGHT,{0,12,15,3,0.7,LineTracer::RIGHTEDGE},Section::COLOR,{15,0.5},Section::NONE,{}},//èµ¤
            //{Section::WALKER,{0, 0},Section::TIME,{100},Section::NONE,{}}, 
            {Section::VIRTUALSTRAIGHT,{0,12,15,3,0.7},Section::LENGTH,{9},Section::NONE,{}},

            
            {Section::TRACER,{12, -0.25,  30, 16, 3.45,0,0,LineTracer::RIGHTEDGE},Section::LENGTH,{15},Section::NONE,{}},
            
            {Section::WALKER,{0, 0},Section::TIME,{200},Section::NONE,{}},
            

            

            {Section::END,{},Section::ENDJ,{}},
        };

        SecParam MoveToBlockpara3[100] = {
            //{Section::WALKER,{0, 0},Section::TIME,{100},Section::NONE,{}}, 

            {Section::VIRTUALSTRAIGHT,{0,12,15,3,0.7},Section::COLOR,{120,0.6},Section::NONE,{}},

            {Section::VIRTUALCURVE,{-7,12,13,1.5,0.7},Section::LENGTH,{5},Section::NONE,{}},
            {Section::VIRTUALCURVE,{-7,12,13,1.5,0.7},Section::BRIGHTNESS,{-0.3,0},Section::NONE,{}},

            


            {Section::TRACER,{12, -0.25,  30, 16, 3.45,0,0,LineTracer::LEFTEDGE},Section::LENGTH,{18},Section::NONE,{}},

            {Section::VIRTUALSTRAIGHT,{0,12,15,3,0.7},Section::COLOR,{40,0.5},Section::NONE,{}},//??¿½?¿½?
            {Section::VIRTUALSTRAIGHT,{0,12,15,3,0.7},Section::LENGTH,{9},Section::NONE,{}},
            {Section::TRACER,{12, -0.25,  30, 16, 3.45,0,0,LineTracer::LEFTEDGE},Section::LENGTH,{18},Section::NONE,{}},

            {Section::VIRTUALSTRAIGHT,{0,12,15,3,0.7},Section::COLOR,{40,0.5},Section::NONE,{}},//??¿½?¿½?

            
            {Section::VIRTUALCURVE,{7,12,13,1.5,0.7},Section::LENGTH,{5},Section::NONE,{}},
            {Section::VIRTUALCURVE,{7,12,13,1.5,0.7},Section::BRIGHTNESS,{-0.3,0},Section::NONE,{}},

            //{Section::TRACER,{23, -0.25,  30, 16, 3.45,0,0,LineTracer::LEFTEDGE},Section::LENGTH,{8},Section::NONE,{}},

            //{Section::WALKER,{-10, 0},Section::LENGTH,{-8},Section::NONE,{}},
            {Section::TRACER,{12, -0.25,  30, 16, 3.45,0,0,LineTracer::RIGHTEDGE},Section::LENGTH,{13},Section::NONE,{}},

            
            



            {Section::END,{},Section::ENDJ,{}},
        };
        
        SecParam JudgeingColorpara[100] = {
            {Section::DEFOLTARMCHANGE,{60},Section::TIME,{50},Section::NONE,{}},
            {Section::VIRTUALSTRAIGHT,{0,8,15,3,0.7},Section::LENGTH,{5},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{1},Section::NONE,{}},
            {Section::DEFOLTARMCHANGE,{60},Section::BLOCKCOLOR,{15,200,0.5,300},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{1},Section::NONE,{}},

            {Section::WALKER,{-16, 0},Section::LENGTH,{-3},Section::NONE,{}},
            

            
            
            
            
            {Section::END,{},Section::ENDJ,{}},
        };

        SecParam GetoutBlockpara[100] = {
            {Section::DEFOLTARMCHANGE,{5},Section::TIME,{20},Section::NONE,{}},
            
            {Section::TURNWALKER,{10,10,1.5,0.7},Section::TURNANGLE,{-43},Section::NONE,{}},
            {Section::VIRTUALSTRAIGHT,{0,12,15,3,0.7},Section::LENGTH,{9},Section::NONE,{}},
            {Section::VIRTUALSTRAIGHT,{0,12,15,3,0.7},Section::BRIGHTNESS,{-0.3,0},Section::NONE,{}},
            {Section::TURNWALKER,{10,10,1.5,0.7},Section::TURNANGLE,{-50},Section::NONE,{}},

          
            {Section::TRACER,{12, -0.25,  30, 16, 3.45,0,0,LineTracer::RIGHTEDGE},Section::LENGTH,{7},Section::NONE,{}},
            
            
            
            {Section::END,{},Section::ENDJ,{}},
        };

        SecParam GetoutBlockLeftpara[100] = {

            {Section::DEFOLTARMCHANGE,{5},Section::TIME,{20},Section::NONE,{}},
            
            {Section::TURNWALKER,{-10,10,1.5,0.7},Section::TURNANGLE,{43},Section::NONE,{}},
            {Section::VIRTUALSTRAIGHT,{0,12,15,3,0.7},Section::LENGTH,{9},Section::NONE,{}},
            {Section::VIRTUALSTRAIGHT,{0,12,15,3,0.7},Section::BRIGHTNESS,{-0.3,0},Section::NONE,{}},
            {Section::TURNWALKER,{-10,10,1.5,0.7},Section::TURNANGLE,{50},Section::NONE,{}},

           
            {Section::TRACER,{12, -0.25,  30, 16, 3.45,0,0,LineTracer::LEFTEDGE},Section::LENGTH,{8},Section::NONE,{}},


            
            {Section::END,{},Section::ENDJ,{}},
        };

        SecParam GetoutBlockRedpara[100] = {
            {Section::TURNWALKER,{10,10,1.5,0.7},Section::TURNANGLE,{-43},Section::NONE,{}},
            {Section::VIRTUALSTRAIGHT,{0,12,15,3,0.7},Section::LENGTH,{9},Section::NONE,{}},
            {Section::VIRTUALSTRAIGHT,{0,12,15,3,0.7},Section::BRIGHTNESS,{-0.3,0},Section::NONE,{}},
            {Section::TURNWALKER,{10,10,1.5,0.7},Section::TURNANGLE,{-50},Section::NONE,{}},

     
            {Section::TRACER,{12, -0.25,  30, 16, 3.45,0,0,LineTracer::RIGHTEDGE},Section::LENGTH,{7},Section::NONE,{}},
            
            
            {Section::END,{},Section::ENDJ,{}},
        };

        SecParam GetoutBlockLeftRedpara[100] = {
            {Section::TURNWALKER,{-10,10,1.5,0.7},Section::TURNANGLE,{43},Section::NONE,{}},
            {Section::VIRTUALSTRAIGHT,{0,12,15,3,0.7},Section::LENGTH,{13},Section::NONE,{}},
            {Section::VIRTUALSTRAIGHT,{0,12,15,3,0.7},Section::BRIGHTNESS,{-0.3,0},Section::NONE,{}},
            {Section::WALKER,{0,0},Section::TIME,{200},Section::NONE,{}},
            //{Section::WALKER,{0,0},Section::LENGTH,{500},Section::NONE,{}},

            {Section::TURNWALKER,{-10,10,1.5,0.7},Section::TURNANGLE,{75},Section::NONE,{}},
            //{Section::WALKER,{0,10},Section::TURNANGLE,{-65},Section::NONE,{}},
            //{Section::WALKER,{-13, 0},Section::LENGTH,{-5},Section::NONE,{}},//å¾Œé€²
            {Section::TRACER,{12, -0.25,  30, 16, 3.45,0,0,LineTracer::LEFTEDGE},Section::LENGTH,{7},Section::NONE,{}},

            
            
            {Section::END,{},Section::ENDJ,{}},
            
        };

        SecParam GettingBlockpara[100] = {
            {Section::DEFOLTARMCHANGE,{5},Section::TIME,{20},Section::NONE,{}},
            {Section::WALKER,{15, 0},Section::LENGTH,{7},Section::NONE,{}},
            {Section::VIRTUALCURVE,{-8,12,13,1.5,0.7},Section::LENGTH,{7},Section::NONE,{}},

            {Section::VIRTUALCURVE,{-8,12,13,1.5,0.7},Section::BRIGHTNESS,{-0.3,0},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{100},Section::NONE,{}},
            

            {Section::TRACER,{12, -0.3,  30, 10, 3.45,0,0,LineTracer::LEFTEDGE},Section::LENGTH,{8},Section::NONE,{}},


            //{Section::WALKER,{0, 0},Section::LENGTH,{100},Section::NONE,{}},
            //{Section::TURNWALKER,{-20,40,5,3},Section::TURNANGLE,{22},Section::NONE,{}},

            {Section::END,{},Section::ENDJ,{}},
        };

        SecParam GettingBlockleftpara[100] = {
            {Section::DEFOLTARMCHANGE,{5},Section::TIME,{20},Section::NONE,{}},
            {Section::WALKER,{15, 0},Section::LENGTH,{8},Section::NONE,{}},
            {Section::VIRTUALCURVE,{8,12,13,1.5,0.7},Section::LENGTH,{7},Section::NONE,{}},

            {Section::VIRTUALCURVE,{8,12,13,1.5,0.7},Section::BRIGHTNESS,{-0.3,0},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{100},Section::NONE,{}},
            
            {Section::TRACER,{12, -0.3,  30, 10, 3.45,0,0,LineTracer::RIGHTEDGE},Section::LENGTH,{8},Section::NONE,{}},

            {Section::END,{},Section::ENDJ,{}},
        };

        SecParam GettingBlockpara1[100] = {
            {Section::DEFOLTARMCHANGE,{5},Section::TIME,{20},Section::NONE,{}},
            {Section::VIRTUALSTRAIGHT,{0,12,15,3,0.7},Section::COLOR,{15,0.5},Section::NONE,{}},//??¿½?¿½?
            {Section::WALKER,{15, 0},Section::LENGTH,{4},Section::NONE,{}},
            {Section::VIRTUALCURVE,{8,12,13,1.5,0.7},Section::LENGTH,{7},Section::NONE,{}},

            {Section::VIRTUALCURVE,{8,12,13,1.5,0.7},Section::BRIGHTNESS,{-0.3,0},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{100},Section::NONE,{}},
            

            
            {Section::TRACER,{12, -0.3,  30, 10, 3.45,0,0,LineTracer::RIGHTEDGE},Section::LENGTH,{8},Section::NONE,{}},
            {Section::END,{},Section::ENDJ,{}},
        };


        SecParam GettingBlockpara2[100] = {
            {Section::DEFOLTARMCHANGE,{5},Section::TIME,{20},Section::NONE,{}},
            {Section::VIRTUALSTRAIGHT,{0,12,15,3,0.7},Section::COLOR,{200,0.5},Section::NONE,{}},//??¿½?¿½?
            {Section::WALKER,{15, 0},Section::LENGTH,{4},Section::NONE,{}},
            {Section::VIRTUALCURVE,{-8,12,13,1.5,0.7},Section::LENGTH,{7},Section::NONE,{}},

            {Section::VIRTUALCURVE,{-8,12,13,1.5,0.7},Section::BRIGHTNESS,{-0.3,0},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{100},Section::NONE,{}},
            

            {Section::TRACER,{12, -0.3,  30, 10, 3.45,0,0,LineTracer::LEFTEDGE},Section::LENGTH,{8},Section::NONE,{}},

            {Section::END,{},Section::ENDJ,{}},
        };

        SecParam GettingBlockpara3[100] = {
            {Section::DEFOLTARMCHANGE,{5},Section::TIME,{20},Section::NONE,{}},
            {Section::VIRTUALSTRAIGHT,{0,12,15,3,0.7},Section::COLOR,{40,0.5},Section::NONE,{}},//??¿½?¿½?

            {Section::WALKER,{15, 0},Section::LENGTH,{4},Section::NONE,{}},
            {Section::VIRTUALCURVE,{8,12,13,1.5,0.7},Section::LENGTH,{7},Section::NONE,{}},

            {Section::VIRTUALCURVE,{8,12,13,1.5,0.7},Section::BRIGHTNESS,{-0.3,0},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{100},Section::NONE,{}},
            

            
            {Section::TRACER,{12, -0.3,  30, 10, 3.45,0,0,LineTracer::RIGHTEDGE},Section::LENGTH,{8},Section::NONE,{}},
            {Section::END,{},Section::ENDJ,{}},
        };


        SecParam MoveToGoalpara[100] = { 
            
            {Section::VIRTUALSTRAIGHT,{0,12,15,3,0.7},Section::COLOR,{40,0.8},Section::NONE,{}},//40,0.7

            {Section::TURNWALKER,{10,10,1.5,0.7},Section::TURNANGLE,{-85},Section::NONE,{}},
            //{Section::VIRTUALCURVE,{20,18,22,5,2},Section::LENGTH,{63},Section::NONE,{}},
            {Section::VIRTUALSTRAIGHT,{0,23,15,3,0.7},Section::LENGTH,{36},Section::NONE,{}},
            {Section::VIRTUALSTRAIGHT,{0,12,15,3,0.7},Section::BRIGHTNESS,{-0.4,0},Section::NONE,{}},
            //{Section::VIRTUALSTRAIGHT,{0,18,22,5,2},Section::BRIGHTNESS,{-0.13,0},Section::NONE,{}},

            {Section::TURNWALKER,{10,10,1.5,0.7},Section::TURNANGLE,{-89},Section::NONE,{}},



            
            {Section::TRACER,{18, -0.25,  30, 16, 3.45,0,0,LineTracer::RIGHTEDGE},Section::LENGTH,{30},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::LENGTH,{2000},Section::NONE,{}},

            /*{Section::DEFOLTARMCHANGE,{40},Section::TIME,{1},Section::NONE,{}},//??¿½?¿½??¿½?¿½??¿½?¿½??¿½?¿½??¿½?¿½Û‚ï¿½ß‚ï¿½??¿½?¿½??¿½?¿½??¿½?¿½??¿½?¿½
            {Section::WALKER,{0, 0},Section::TIME,{1},Section::NONE,{}},
            {Section::TEEL,{-70},Section::TEELANGLE,{-4200},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{1},Section::NONE,{}},
            {Section::DEFOLTARMCHANGE,{-15},Section::TIME,{5},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::LENGTH,{2000},Section::NONE,{}},*/
            {Section::END,{},Section::ENDJ,{}},
        };
#endif

#if PATARN == 2
        SecParam IntoBlockDeTreasurepara[100] = {
            {Section::DEFOLTARMCHANGE,{5},Section::TIME,{1},Section::NONE,{}},
            
            
            
            {Section::TURNWALKER,{-10,10,1.5,0.7},Section::TURNANGLE,{72},Section::NONE,{}},
            {Section::VIRTUALSTRAIGHT,{0,36,30,10,3.45},Section::LENGTH,{40},Section::NONE,{}},
            {Section::VIRTUALSTRAIGHT,{0,12,15,3,0.7},Section::BRIGHTNESS,{-0.4,0},Section::NONE,{}},
            
            {Section::WALKER,{0, 0},Section::TIME,{2},Section::NONE,{}},
            {Section::TURNWALKER,{10,10,1.5,0.7},Section::TURNANGLE,{-63},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{2},Section::NONE,{}},
            
           
           
            

            {Section::END,{},Section::ENDJ,{}},
        };

        SecParam MoveToBlockpara[100] = {

            {Section::TRACER,{18, -0.25,  30, 16, 3.45,0,0,LineTracer::RIGHTEDGE},Section::LENGTH,{8},Section::NONE,{}},

            {Section::VIRTUALSTRAIGHT,{0,12,15,3,0.7,LineTracer::LEFTEDGE},Section::COLOR,{200,0.5},Section::NONE,{}},//??¿½?¿½?
            {Section::VIRTUALCURVE,{7,12,13,1.5,0.7},Section::LENGTH,{7},Section::NONE,{}},
            {Section::VIRTUALCURVE,{7,12,13,1.5,0.7},Section::BRIGHTNESS,{-0.3,0},Section::NONE,{}},
            {Section::TRACER,{18, -0.25,  30, 16, 3.45,0,0,LineTracer::RIGHTEDGE},Section::LENGTH,{18},Section::NONE,{}},


            {Section::VIRTUALSTRAIGHT,{0,12,15,3,0.7,LineTracer::RIGHTEDGE},Section::COLOR,{200,0.5},Section::NONE,{}},//??¿½?¿½?
            {Section::VIRTUALCURVE,{7,12,13,1.5,0.7},Section::LENGTH,{7},Section::NONE,{}},
            {Section::VIRTUALCURVE,{7,12,13,1.5,0.7},Section::BRIGHTNESS,{-0.3,0},Section::NONE,{}},
            {Section::TRACER,{18, -0.25,  30, 16, 3.45,0,0,LineTracer::RIGHTEDGE},Section::LENGTH,{18},Section::NONE,{}},

            {Section::VIRTUALSTRAIGHT,{0,12,15,3,0.7,LineTracer::RIGHTEDGE},Section::COLOR,{200,0.5},Section::NONE,{}},//??¿½?¿½?
            {Section::VIRTUALCURVE,{7,12,13,1.5,0.7},Section::LENGTH,{7},Section::NONE,{}},
            {Section::VIRTUALCURVE,{7,12,13,1.5,0.7},Section::BRIGHTNESS,{-0.3,0},Section::NONE,{}},
            {Section::TRACER,{18, -0.25,  30, 16, 3.45,0,0,LineTracer::RIGHTEDGE},Section::LENGTH,{13.5},Section::NONE,{}},

            

            
            {Section::END,{},Section::ENDJ,{}},
        };

        SecParam MoveToBlockpara2[100] = {
            {Section::VIRTUALSTRAIGHT,{0,12,15,3,0.7,LineTracer::RIGHTEDGE},Section::COLOR,{200,0.5},Section::NONE,{}},//??¿½?¿½?
            
            {Section::VIRTUALCURVE,{7,12,13,1.5,0.7},Section::LENGTH,{7},Section::NONE,{}},
            {Section::VIRTUALCURVE,{7,12,13,1.5,0.7},Section::BRIGHTNESS,{-0.3,0},Section::NONE,{}},
            
            {Section::TRACER,{12, -0.25,  30, 16, 3.45,0,0,LineTracer::RIGHTEDGE},Section::LENGTH,{15},Section::NONE,{}},


            {Section::VIRTUALSTRAIGHT,{0,12,15,3,0.7,LineTracer::RIGHTEDGE},Section::COLOR,{200,0.5},Section::NONE,{}},//??¿½?¿½?
            {Section::VIRTUALCURVE,{-7,12,13,1.5,0.7},Section::LENGTH,{7},Section::NONE,{}},
            {Section::VIRTUALCURVE,{-7,12,13,1.5,0.7},Section::BRIGHTNESS,{-0.3,0},Section::NONE,{}},

            
            {Section::TRACER,{12, -0.25,  30, 16, 3.45,0,0,LineTracer::LEFTEDGE},Section::LENGTH,{14},Section::NONE,{}},

            
            {Section::WALKER,{0, 0},Section::TIME,{200},Section::NONE,{}},
            

            {Section::END,{},Section::ENDJ,{}},
        };

        SecParam MoveToBlockpara3[100] = {

            {Section::VIRTUALSTRAIGHT,{0,12,15,3,0.7},Section::COLOR,{40,0.5},Section::NONE,{}},
            {Section::VIRTUALCURVE,{7,12,13,1.5,0.7},Section::LENGTH,{5},Section::NONE,{}},
            {Section::VIRTUALCURVE,{7,12,13,1.5,0.7},Section::BRIGHTNESS,{-0.3,0},Section::NONE,{}},
            {Section::TRACER,{12, -0.25,  30, 16, 3.45,0,0,LineTracer::RIGHTEDGE},Section::LENGTH,{18},Section::NONE,{}},

           
            {Section::VIRTUALSTRAIGHT,{0,12,15,3,0.7},Section::COLOR,{120,0.6},Section::NONE,{}},
            {Section::VIRTUALSTRAIGHT,{0,12,15,3,0.7},Section::LENGTH,{9},Section::NONE,{}},
            {Section::TRACER,{12, -0.25,  30, 16, 3.45,0,0,LineTracer::RIGHTEDGE},Section::LENGTH,{18},Section::NONE,{}},

            {Section::VIRTUALSTRAIGHT,{0,12,15,3,0.7},Section::COLOR,{120,0.6},Section::NONE,{}},


            {Section::VIRTUALCURVE,{-7,12,13,1.5,0.7},Section::LENGTH,{5},Section::NONE,{}},
            {Section::VIRTUALCURVE,{-7,12,13,1.5,0.7},Section::BRIGHTNESS,{-0.3,0},Section::NONE,{}},

            {Section::TRACER,{12, -0.25,  30, 16, 3.45,0,0,LineTracer::LEFTEDGE},Section::LENGTH,{14},Section::NONE,{}},


            {Section::END,{},Section::ENDJ,{}},
        };
        
        SecParam JudgeingColorpara[100] = {
            {Section::DEFOLTARMCHANGE,{60},Section::TIME,{50},Section::NONE,{}},
            {Section::VIRTUALSTRAIGHT,{0,8,15,3,0.7},Section::LENGTH,{5},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{1},Section::NONE,{}},
            {Section::DEFOLTARMCHANGE,{60},Section::BLOCKCOLOR,{15,200,0.5,300},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{1},Section::NONE,{}},

            {Section::WALKER,{-16, 0},Section::LENGTH,{-3},Section::NONE,{}},
            
            {Section::END,{},Section::ENDJ,{}},
        };

        SecParam GetoutBlockpara[100] = {
            {Section::DEFOLTARMCHANGE,{5},Section::TIME,{20},Section::NONE,{}},
            
            {Section::TURNWALKER,{10,10,1.5,0.7},Section::TURNANGLE,{-43},Section::NONE,{}},
            {Section::VIRTUALSTRAIGHT,{0,12,15,3,0.7},Section::LENGTH,{9},Section::NONE,{}},
            {Section::VIRTUALSTRAIGHT,{0,12,15,3,0.7},Section::BRIGHTNESS,{-0.3,0},Section::NONE,{}},
            {Section::TURNWALKER,{10,10,1.5,0.7},Section::TURNANGLE,{-50},Section::NONE,{}},

          
            {Section::TRACER,{12, -0.45,  30, 16, 3.45,0,0,LineTracer::RIGHTEDGE},Section::LENGTH,{14},Section::NONE,{}},
            
            
            
            {Section::END,{},Section::ENDJ,{}},
        };

        SecParam GetoutBlockLeftpara[100] = {
            {Section::DEFOLTARMCHANGE,{5},Section::TIME,{20},Section::NONE,{}},
            
            {Section::TURNWALKER,{-10,10,1.5,0.7},Section::TURNANGLE,{43},Section::NONE,{}},
            {Section::VIRTUALSTRAIGHT,{0,12,15,3,0.7},Section::LENGTH,{9},Section::NONE,{}},
            {Section::VIRTUALSTRAIGHT,{0,12,15,3,0.7},Section::BRIGHTNESS,{-0.3,0},Section::NONE,{}},
            {Section::TURNWALKER,{-10,10,1.5,0.7},Section::TURNANGLE,{50},Section::NONE,{}},

           
            {Section::TRACER,{12, -0.45,  30, 16, 3.45,0,0,LineTracer::LEFTEDGE},Section::LENGTH,{14},Section::NONE,{}},
            {Section::END,{},Section::ENDJ,{}},
        };

        SecParam GetoutBlockRedpara[100] = {
            {Section::TURNWALKER,{10,10,1.5,0.7},Section::TURNANGLE,{-43},Section::NONE,{}},
            {Section::VIRTUALSTRAIGHT,{0,12,15,3,0.7},Section::LENGTH,{9},Section::NONE,{}},
            {Section::VIRTUALSTRAIGHT,{0,12,15,3,0.7},Section::BRIGHTNESS,{-0.3,0},Section::NONE,{}},
            {Section::TURNWALKER,{10,10,1.5,0.7},Section::TURNANGLE,{-50},Section::NONE,{}},

     
            {Section::TRACER,{12, -0.4,  30, 16, 3.45,0,0,LineTracer::RIGHTEDGE},Section::LENGTH,{13},Section::NONE,{}},
            {Section::END,{},Section::ENDJ,{}},
        };

        SecParam GetoutBlockLeftRedpara[100] = {
            {Section::TURNWALKER,{-10,10,1.5,0.7},Section::TURNANGLE,{43},Section::NONE,{}},
            {Section::VIRTUALSTRAIGHT,{0,12,15,3,0.7},Section::LENGTH,{13},Section::NONE,{}},
            {Section::VIRTUALSTRAIGHT,{0,12,15,3,0.7},Section::BRIGHTNESS,{-0.3,0},Section::NONE,{}},
            {Section::WALKER,{0,0},Section::TIME,{200},Section::NONE,{}},
            //{Section::WALKER,{0,0},Section::LENGTH,{500},Section::NONE,{}},

            {Section::TURNWALKER,{-10,10,1.5,0.7},Section::TURNANGLE,{75},Section::NONE,{}},
            //{Section::WALKER,{0,10},Section::TURNANGLE,{-65},Section::NONE,{}},
            //{Section::WALKER,{-13, 0},Section::LENGTH,{-5},Section::NONE,{}},//å¾Œé€²
            {Section::TRACER,{12, -0.25,  30, 16, 3.45,0,0,LineTracer::LEFTEDGE},Section::LENGTH,{14},Section::NONE,{}},

            {Section::END,{},Section::ENDJ,{}},
            
        };

        SecParam GettingBlockpara[100] = {
            {Section::DEFOLTARMCHANGE,{5},Section::TIME,{20},Section::NONE,{}},
            {Section::WALKER,{15, 0},Section::LENGTH,{7},Section::NONE,{}},
            {Section::VIRTUALCURVE,{-7.5,12,13,1.5,0.7},Section::LENGTH,{7},Section::NONE,{}},

            {Section::VIRTUALCURVE,{-7.5,12,13,1.5,0.7},Section::BRIGHTNESS,{-0.3,0},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{100},Section::NONE,{}},
            

            {Section::TRACER,{12, -0.4,  30, 10, 3.45,0,0,LineTracer::LEFTEDGE},Section::LENGTH,{14},Section::NONE,{}},


            //{Section::WALKER,{0, 0},Section::LENGTH,{100},Section::NONE,{}},
            //{Section::TURNWALKER,{-20,40,5,3},Section::TURNANGLE,{22},Section::NONE,{}},
            

            {Section::END,{},Section::ENDJ,{}},
        };

        SecParam GettingBlockleftpara[100] = {
            {Section::DEFOLTARMCHANGE,{5},Section::TIME,{20},Section::NONE,{}},
            {Section::WALKER,{15, 0},Section::LENGTH,{8},Section::NONE,{}},
            {Section::VIRTUALCURVE,{8,12,13,1.5,0.7},Section::LENGTH,{7},Section::NONE,{}},

            {Section::VIRTUALCURVE,{8,12,13,1.5,0.7},Section::BRIGHTNESS,{-0.3,0},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{100},Section::NONE,{}},
            

            
            
            
            {Section::TRACER,{12, -0.4,  30, 10, 3.45,0,0,LineTracer::RIGHTEDGE},Section::LENGTH,{14},Section::NONE,{}},
            {Section::END,{},Section::ENDJ,{}},
        };

        SecParam MoveToGoalpara[100] = {
           {Section::VIRTUALSTRAIGHT,{0,12,15,3,0.7},Section::COLOR,{120,0.6},Section::NONE,{}},

            {Section::TURNWALKER,{-10,10,1.5,0.7},Section::TURNANGLE,{50},Section::NONE,{}},

            
            //{Section::VIRTUALCURVE,{20,18,22,5,2},Section::LENGTH,{63},Section::NONE,{}},
            {Section::VIRTUALSTRAIGHT,{0,23,15,3,0.7},Section::LENGTH,{53},Section::NONE,{}},
            {Section::VIRTUALSTRAIGHT,{0,12,15,3,0.7},Section::BRIGHTNESS,{-0.4,0},Section::NONE,{}},
            //{Section::VIRTUALSTRAIGHT,{0,18,22,5,2},Section::BRIGHTNESS,{-0.13,0},Section::NONE,{}},

            {Section::TURNWALKER,{10,10,1.5,0.7},Section::TURNANGLE,{-53},Section::NONE,{}},



            
            {Section::TRACER,{18, -0.25,  30, 16, 3.45,0,0,LineTracer::RIGHTEDGE},Section::LENGTH,{25},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::LENGTH,{2000},Section::NONE,{}},
            
            {Section::END,{},Section::ENDJ,{}},
        };
#endif

#if PATARN == 3
        SecParam IntoBlockDeTreasurepara[100] = {
            {Section::DEFOLTARMCHANGE,{5},Section::TIME,{1},Section::NONE,{}},
            
            {Section::TURNWALKER,{-10,10,1.5,0.7},Section::TURNANGLE,{75},Section::NONE,{}},
            {Section::VIRTUALSTRAIGHT,{0,36,30,10,3.45},Section::LENGTH,{40},Section::NONE,{}},
            {Section::VIRTUALSTRAIGHT,{0,12,15,3,0.7},Section::BRIGHTNESS,{-0.4,0},Section::NONE,{}},
            
            {Section::WALKER,{0, 0},Section::TIME,{2},Section::NONE,{}},
            {Section::TURNWALKER,{10,10,1.5,0.7},Section::TURNANGLE,{-65},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{2},Section::NONE,{}},
            {Section::END,{},Section::ENDJ,{}},
        };

        SecParam MoveToBlockpara[100] = {

            {Section::WALKER,{0, 0},Section::TIME,{10},Section::NONE,{}},
            
            {Section::TRACER,{12, -0.25,  30, 16, 3.45,0,0,LineTracer::RIGHTEDGE},Section::LENGTH,{12},Section::NONE,{}},
            
            {Section::VIRTUALSTRAIGHT,{0,12,15,3,0.7,LineTracer::RIGHTEDGE},Section::COLOR,{200,0.5},Section::NONE,{}},//??¿½?¿½?
            
            {Section::VIRTUALSTRAIGHT,{0,12,15,3,0.7},Section::LENGTH,{9},Section::NONE,{}},
            
            
        
            {Section::TRACER,{12, -0.25,  30, 16, 3.45,0,0,LineTracer::RIGHTEDGE},Section::LENGTH,{18},Section::NONE,{}},//???¿½?¿½??¿½?¿½?
            
            {Section::VIRTUALSTRAIGHT,{0,12,15,3,0.7,LineTracer::RIGHTEDGE},Section::COLOR,{15,0.5},Section::NONE,{}},//èµ¤
            {Section::VIRTUALSTRAIGHT,{0,12,15,3,0.7},Section::LENGTH,{9},Section::NONE,{}},
            
          

            {Section::TRACER,{12, -0.25,  30, 16, 3.45,0,0,LineTracer::RIGHTEDGE},Section::LENGTH,{14.8},Section::NONE,{}},
       
            {Section::WALKER,{0, 0},Section::TIME,{200},Section::NONE,{}},
            
            {Section::END,{},Section::ENDJ,{}},
        };

        SecParam MoveToBlockpara2[100] = {
            {Section::VIRTUALSTRAIGHT,{0,12,15,3,0.7},Section::COLOR,{15,0.4},Section::NONE,{}},
            
            {Section::VIRTUALCURVE,{7,12,13,1.5,0.7},Section::LENGTH,{7},Section::NONE,{}},
            {Section::VIRTUALCURVE,{7,12,13,1.5,0.7},Section::BRIGHTNESS,{-0.3,0},Section::NONE,{}},
            
            {Section::TRACER,{12, -0.25,  30, 16, 3.45,0,0,LineTracer::RIGHTEDGE},Section::LENGTH,{17},Section::NONE,{}},
            //{Section::WALKER,{0, 0},Section::TIME,{100},Section::NONE,{}},
            {Section::VIRTUALSTRAIGHT,{0,12,15,3,0.7,LineTracer::RIGHTEDGE},Section::COLOR,{15,0.5},Section::NONE,{}},//èµ¤
            //{Section::WALKER,{0, 0},Section::TIME,{100},Section::NONE,{}}, 
            {Section::VIRTUALSTRAIGHT,{0,12,15,3,0.7},Section::LENGTH,{9},Section::NONE,{}},

            
            {Section::TRACER,{12, -0.25,  30, 16, 3.45,0,0,LineTracer::RIGHTEDGE},Section::LENGTH,{15},Section::NONE,{}},
            
            {Section::WALKER,{0, 0},Section::TIME,{200},Section::NONE,{}},
            

            {Section::END,{},Section::ENDJ,{}},
        };

        SecParam MoveToBlockpara3[100] = {
           
            {Section::VIRTUALSTRAIGHT,{0,12,15,3,0.7},Section::COLOR,{120,0.6},Section::NONE,{}},

            {Section::VIRTUALCURVE,{-7,12,13,1.5,0.7},Section::LENGTH,{5},Section::NONE,{}},
            {Section::VIRTUALCURVE,{-7,12,13,1.5,0.7},Section::BRIGHTNESS,{-0.3,0},Section::NONE,{}},

            


            {Section::TRACER,{12, -0.25,  30, 16, 3.45,0,0,LineTracer::LEFTEDGE},Section::LENGTH,{13.5},Section::NONE,{}},

            
            {Section::END,{},Section::ENDJ,{}},
        };
        
        SecParam JudgeingColorpara[100] = {
            {Section::DEFOLTARMCHANGE,{60},Section::TIME,{50},Section::NONE,{}},
            {Section::VIRTUALSTRAIGHT,{0,8,15,3,0.7},Section::LENGTH,{5},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{1},Section::NONE,{}},
            {Section::DEFOLTARMCHANGE,{60},Section::BLOCKCOLOR,{15,200,0.5,300},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{1},Section::NONE,{}},

            {Section::WALKER,{-16, 0},Section::LENGTH,{-3},Section::NONE,{}},
            
            {Section::END,{},Section::ENDJ,{}},
        };

        SecParam GetoutBlockpara[100] = {
            {Section::DEFOLTARMCHANGE,{5},Section::TIME,{20},Section::NONE,{}},
            
            {Section::TURNWALKER,{10,10,1.5,0.7},Section::TURNANGLE,{-43},Section::NONE,{}},
            {Section::VIRTUALSTRAIGHT,{0,12,15,3,0.7},Section::LENGTH,{9},Section::NONE,{}},
            {Section::VIRTUALSTRAIGHT,{0,12,15,3,0.7},Section::BRIGHTNESS,{-0.3,0},Section::NONE,{}},
            {Section::TURNWALKER,{10,10,1.5,0.7},Section::TURNANGLE,{-50},Section::NONE,{}},

          
            {Section::TRACER,{12, -0.25,  30, 16, 3.45,0,0,LineTracer::RIGHTEDGE},Section::LENGTH,{7},Section::NONE,{}},
            
            
            
            {Section::END,{},Section::ENDJ,{}},
        };

        SecParam GetoutBlockLeftpara[100] = {
            {Section::DEFOLTARMCHANGE,{5},Section::TIME,{20},Section::NONE,{}},
            
            {Section::TURNWALKER,{-10,10,1.5,0.7},Section::TURNANGLE,{43},Section::NONE,{}},
            {Section::VIRTUALSTRAIGHT,{0,12,15,3,0.7},Section::LENGTH,{9},Section::NONE,{}},
            {Section::VIRTUALSTRAIGHT,{0,12,15,3,0.7},Section::BRIGHTNESS,{-0.3,0},Section::NONE,{}},
            {Section::TURNWALKER,{-10,10,1.5,0.7},Section::TURNANGLE,{50},Section::NONE,{}},

           
            {Section::TRACER,{12, -0.25,  30, 16, 3.45,0,0,LineTracer::LEFTEDGE},Section::LENGTH,{8},Section::NONE,{}},
            {Section::END,{},Section::ENDJ,{}},
        };

        SecParam GetoutBlockRedpara[100] = {
            {Section::TURNWALKER,{10,10,1.5,0.7},Section::TURNANGLE,{-43},Section::NONE,{}},
            {Section::VIRTUALSTRAIGHT,{0,12,15,3,0.7},Section::LENGTH,{9},Section::NONE,{}},
            {Section::VIRTUALSTRAIGHT,{0,12,15,3,0.7},Section::BRIGHTNESS,{-0.3,0},Section::NONE,{}},
            {Section::TURNWALKER,{10,10,1.5,0.7},Section::TURNANGLE,{-50},Section::NONE,{}},

     
            {Section::TRACER,{12, -0.25,  30, 16, 3.45,0,0,LineTracer::RIGHTEDGE},Section::LENGTH,{7},Section::NONE,{}},
            {Section::END,{},Section::ENDJ,{}},
        };

        SecParam GetoutBlockLeftRedpara[100] = {
            {Section::TURNWALKER,{-10,10,1.5,0.7},Section::TURNANGLE,{43},Section::NONE,{}},
            {Section::VIRTUALSTRAIGHT,{0,12,15,3,0.7},Section::LENGTH,{13},Section::NONE,{}},
            {Section::VIRTUALSTRAIGHT,{0,12,15,3,0.7},Section::BRIGHTNESS,{-0.3,0},Section::NONE,{}},
            {Section::WALKER,{0,0},Section::TIME,{200},Section::NONE,{}},
            //{Section::WALKER,{0,0},Section::LENGTH,{500},Section::NONE,{}},

            {Section::TURNWALKER,{-10,10,1.5,0.7},Section::TURNANGLE,{75},Section::NONE,{}},
            //{Section::WALKER,{0,10},Section::TURNANGLE,{-65},Section::NONE,{}},
            //{Section::WALKER,{-13, 0},Section::LENGTH,{-5},Section::NONE,{}},//å¾Œé€²
            {Section::TRACER,{12, -0.25,  30, 16, 3.45,0,0,LineTracer::LEFTEDGE},Section::LENGTH,{7},Section::NONE,{}},

            {Section::END,{},Section::ENDJ,{}},
            
        };

        SecParam GettingBlockpara[100] = {
            {Section::DEFOLTARMCHANGE,{5},Section::TIME,{20},Section::NONE,{}},
            {Section::WALKER,{15, 0},Section::LENGTH,{7},Section::NONE,{}},
            {Section::VIRTUALCURVE,{-8,12,13,1.5,0.7},Section::LENGTH,{7},Section::NONE,{}},

            {Section::VIRTUALCURVE,{-8,12,13,1.5,0.7},Section::BRIGHTNESS,{-0.3,0},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{100},Section::NONE,{}},
            

            {Section::TRACER,{12, -0.3,  30, 10, 3.45,0,0,LineTracer::LEFTEDGE},Section::LENGTH,{8},Section::NONE,{}},


            //{Section::WALKER,{0, 0},Section::LENGTH,{100},Section::NONE,{}},
            //{Section::TURNWALKER,{-20,40,5,3},Section::TURNANGLE,{22},Section::NONE,{}},
            

            {Section::END,{},Section::ENDJ,{}},
        };

        SecParam GettingBlockleftpara[100] = {
            {Section::DEFOLTARMCHANGE,{5},Section::TIME,{20},Section::NONE,{}},
            {Section::WALKER,{15, 0},Section::LENGTH,{8},Section::NONE,{}},
            {Section::VIRTUALCURVE,{8,12,13,1.5,0.7},Section::LENGTH,{7},Section::NONE,{}},

            {Section::VIRTUALCURVE,{8,12,13,1.5,0.7},Section::BRIGHTNESS,{-0.3,0},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{100},Section::NONE,{}},
            

            
            
            
            {Section::TRACER,{12, -0.3,  30, 10, 3.45,0,0,LineTracer::RIGHTEDGE},Section::LENGTH,{8},Section::NONE,{}},
            {Section::END,{},Section::ENDJ,{}},
        };

        SecParam MoveToGoalpara[100] = {
           
            {Section::VIRTUALSTRAIGHT,{0,12,15,3,0.7},Section::COLOR,{40,0.8},Section::NONE,{}},//40,0.7

            
            //{Section::VIRTUALCURVE,{20,18,22,5,2},Section::LENGTH,{63},Section::NONE,{}},
            {Section::VIRTUALSTRAIGHT,{0,23,15,3,0.7},Section::LENGTH,{48},Section::NONE,{}},
            {Section::VIRTUALSTRAIGHT,{0,12,15,3,0.7},Section::BRIGHTNESS,{-0.4,0},Section::NONE,{}},
            //{Section::VIRTUALSTRAIGHT,{0,18,22,5,2},Section::BRIGHTNESS,{-0.13,0},Section::NONE,{}},

            {Section::TURNWALKER,{10,10,1.5,0.7},Section::TURNANGLE,{-89},Section::NONE,{}},



            
            {Section::TRACER,{18, -0.25,  30, 16, 3.45,0,0,LineTracer::RIGHTEDGE},Section::LENGTH,{31},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::LENGTH,{2000},Section::NONE,{}},
            {Section::END,{},Section::ENDJ,{}},
        };
#endif

#if PATARN == 4
        SecParam IntoBlockDeTreasurepara[100] = {
            {Section::DEFOLTARMCHANGE,{5},Section::TIME,{1},Section::NONE,{}},

            
            {Section::TURNWALKER,{-10,10,1.5,0.7},Section::TURNANGLE,{75},Section::NONE,{}},
            {Section::VIRTUALSTRAIGHT,{0,36,30,10,3.45},Section::LENGTH,{40},Section::NONE,{}},
            {Section::VIRTUALSTRAIGHT,{0,12,15,3,0.7},Section::BRIGHTNESS,{-0.4,0},Section::NONE,{}},
            
            {Section::WALKER,{0, 0},Section::TIME,{2},Section::NONE,{}},
            {Section::TURNWALKER,{10,10,1.5,0.7},Section::TURNANGLE,{-65},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{2},Section::NONE,{}},

            {Section::END,{},Section::ENDJ,{}},
        };

        SecParam MoveToBlockpara[100] = {

            {Section::WALKER,{0, 0},Section::TIME,{10},Section::NONE,{}},
            
            {Section::TRACER,{12, -0.25,  30, 16, 3.45,0,0,LineTracer::RIGHTEDGE},Section::LENGTH,{12},Section::NONE,{}},
            
            {Section::VIRTUALSTRAIGHT,{0,12,15,3,0.7,LineTracer::RIGHTEDGE},Section::COLOR,{200,0.5},Section::NONE,{}},
            {Section::VIRTUALCURVE,{7,12,13,1.5,0.7},Section::LENGTH,{5},Section::NONE,{}},
            {Section::VIRTUALCURVE,{7,12,13,1.5,0.7},Section::BRIGHTNESS,{-0.3,0},Section::NONE,{}},
            {Section::TRACER,{12, -0.25,  30, 16, 3.45,0,0,LineTracer::RIGHTEDGE},Section::LENGTH,{13.5},Section::NONE,{}},

            
            {Section::END,{},Section::ENDJ,{}},
        };

        SecParam MoveToBlockpara2[100] = {

            {Section::VIRTUALSTRAIGHT,{0,12,15,3,0.7},Section::COLOR,{15,0.4},Section::NONE,{}},
            {Section::VIRTUALSTRAIGHT,{0,12,15,3,0.7},Section::LENGTH,{9},Section::NONE,{}},
            {Section::TRACER,{12, -0.25,  30, 16, 3.45,0,0,LineTracer::LEFTEDGE},Section::LENGTH,{17},Section::NONE,{}},
            

            {Section::VIRTUALSTRAIGHT,{0,12,15,3,0.7},Section::COLOR,{15,0.4},Section::NONE,{}},
            
            {Section::VIRTUALCURVE,{7,12,13,1.5,0.7},Section::LENGTH,{7},Section::NONE,{}},
            {Section::VIRTUALCURVE,{7,12,13,1.5,0.7},Section::BRIGHTNESS,{-0.3,0},Section::NONE,{}},
            //{Section::WALKER,{0, -7},Section::TURNANGLE,{15},Section::NONE,{}},


            
            {Section::TRACER,{12, -0.25,  30, 16, 3.45,0,0,LineTracer::RIGHTEDGE},Section::LENGTH,{14},Section::NONE,{}},
            
            {Section::WALKER,{0, 0},Section::TIME,{200},Section::NONE,{}},
            

            {Section::END,{},Section::ENDJ,{}},
        };

        SecParam MoveToBlockpara3[100] = {
           
            //{Section::WALKER,{0, 0},Section::TIME,{100},Section::NONE,{}},


            {Section::VIRTUALSTRAIGHT,{0,12,15,3,0.7},Section::COLOR,{40,0.5},Section::NONE,{}},//??¿½?¿½?
            {Section::VIRTUALSTRAIGHT,{0,12,15,3,0.7},Section::LENGTH,{9},Section::NONE,{}},
            {Section::TRACER,{12, -0.25,  30, 16, 3.45,0,0,LineTracer::RIGHTEDGE},Section::LENGTH,{18},Section::NONE,{}},


            {Section::VIRTUALSTRAIGHT,{0,12,15,3,0.7},Section::COLOR,{120,0.6},Section::NONE,{}},
            {Section::VIRTUALSTRAIGHT,{0,12,15,3,0.7},Section::LENGTH,{9},Section::NONE,{}},
            {Section::TRACER,{12, -0.25,  30, 16, 3.45,0,0,LineTracer::RIGHTEDGE},Section::LENGTH,{18},Section::NONE,{}},
            

            {Section::VIRTUALSTRAIGHT,{0,12,15,3,0.7},Section::COLOR,{120,0.6},Section::NONE,{}},
            {Section::VIRTUALCURVE,{-7,12,13,1.5,0.7},Section::LENGTH,{5},Section::NONE,{}},
            {Section::VIRTUALCURVE,{-7,12,13,1.5,0.7},Section::BRIGHTNESS,{-0.3,0},Section::NONE,{}},

            


            {Section::TRACER,{12, -0.25,  30, 16, 3.45,0,0,LineTracer::LEFTEDGE},Section::LENGTH,{14},Section::NONE,{}},

            
            {Section::END,{},Section::ENDJ,{}},
        };
        
        SecParam JudgeingColorpara[100] = {
            {Section::DEFOLTARMCHANGE,{60},Section::TIME,{50},Section::NONE,{}},
            {Section::VIRTUALSTRAIGHT,{0,8,15,3,0.7},Section::LENGTH,{5},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{1},Section::NONE,{}},
            {Section::DEFOLTARMCHANGE,{60},Section::BLOCKCOLOR,{15,200,0.5,300},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{1},Section::NONE,{}},

            {Section::WALKER,{-16, 0},Section::LENGTH,{-3},Section::NONE,{}},
            
            {Section::END,{},Section::ENDJ,{}},
        };

        SecParam GetoutBlockpara[100] = {
            {Section::DEFOLTARMCHANGE,{5},Section::TIME,{20},Section::NONE,{}},
            
            {Section::TURNWALKER,{10,10,1.5,0.7},Section::TURNANGLE,{-43},Section::NONE,{}},
            {Section::VIRTUALSTRAIGHT,{0,12,15,3,0.7},Section::LENGTH,{9},Section::NONE,{}},
            {Section::VIRTUALSTRAIGHT,{0,12,15,3,0.7},Section::BRIGHTNESS,{-0.3,0},Section::NONE,{}},
            {Section::VIRTUALSTRAIGHT,{0,12,15,3,0.7},Section::LENGTH,{3},Section::NONE,{}},
            {Section::TURNWALKER,{10,10,1.5,0.7},Section::BRIGHTNESS,{-0.4,0},Section::NONE,{}},

          
            {Section::TRACER,{12, -0.25,  30, 16, 3.45,0,0,LineTracer::LEFTEDGE},Section::LENGTH,{10},Section::NONE,{}},
            
            
            
            {Section::END,{},Section::ENDJ,{}},
        };

        SecParam GetoutBlockLeftpara[100] = {
            {Section::DEFOLTARMCHANGE,{5},Section::TIME,{20},Section::NONE,{}},
            
            {Section::TURNWALKER,{-10,10,1.5,0.7},Section::TURNANGLE,{43},Section::NONE,{}},
            {Section::VIRTUALSTRAIGHT,{0,12,15,3,0.7},Section::LENGTH,{9},Section::NONE,{}},
            {Section::VIRTUALSTRAIGHT,{0,12,15,3,0.7},Section::BRIGHTNESS,{-0.3,0},Section::NONE,{}},
            {Section::VIRTUALSTRAIGHT,{0,12,15,3,0.7},Section::LENGTH,{3},Section::NONE,{}},
            {Section::TURNWALKER,{-10,10,1.5,0.7},Section::BRIGHTNESS,{-0.4,0},Section::NONE,{}},

           
            {Section::TRACER,{12, -0.25,  30, 16, 3.45,0,0,LineTracer::RIGHTEDGE},Section::LENGTH,{10},Section::NONE,{}},
            {Section::END,{},Section::ENDJ,{}},
        };

        SecParam GetoutBlockRedpara[100] = {
            {Section::TURNWALKER,{10,10,1.5,0.7},Section::TURNANGLE,{-43},Section::NONE,{}},
            {Section::VIRTUALSTRAIGHT,{0,12,15,3,0.7},Section::LENGTH,{9},Section::NONE,{}},
            {Section::VIRTUALSTRAIGHT,{0,12,15,3,0.7},Section::BRIGHTNESS,{-0.3,0},Section::NONE,{}},
            {Section::VIRTUALSTRAIGHT,{0,12,15,3,0.7},Section::LENGTH,{3},Section::NONE,{}},
            {Section::TURNWALKER,{10,10,1.5,0.7},Section::BRIGHTNESS,{-0.4,0},Section::NONE,{}},

     
            {Section::TRACER,{12, -0.25,  30, 16, 3.45,0,0,LineTracer::LEFTEDGE},Section::LENGTH,{10},Section::NONE,{}},
            {Section::END,{},Section::ENDJ,{}},
        };

        SecParam GetoutBlockLeftRedpara[100] = {
            {Section::TURNWALKER,{-10,10,1.5,0.7},Section::TURNANGLE,{43},Section::NONE,{}},
            {Section::VIRTUALSTRAIGHT,{0,12,15,3,0.7},Section::LENGTH,{13},Section::NONE,{}},
            {Section::VIRTUALSTRAIGHT,{0,12,15,3,0.7},Section::BRIGHTNESS,{-0.3,0},Section::NONE,{}},
            {Section::WALKER,{0,0},Section::TIME,{200},Section::NONE,{}},
            //{Section::WALKER,{0,0},Section::LENGTH,{500},Section::NONE,{}},
            {Section::VIRTUALSTRAIGHT,{0,12,15,3,0.7},Section::LENGTH,{3},Section::NONE,{}},
            {Section::TURNWALKER,{-10,10,1.5,0.7},Section::BRIGHTNESS,{-0.4,0},Section::NONE,{}},
            //{Section::WALKER,{0,10},Section::TURNANGLE,{-65},Section::NONE,{}},
            //{Section::WALKER,{-13, 0},Section::LENGTH,{-5},Section::NONE,{}},//å¾Œé€²
            {Section::TRACER,{12, -0.25,  30, 16, 3.45,0,0,LineTracer::RIGHTEDGE},Section::LENGTH,{10},Section::NONE,{}},

            {Section::END,{},Section::ENDJ,{}},
            
        };

        SecParam GettingBlockpara[100] = {
            {Section::DEFOLTARMCHANGE,{5},Section::TIME,{20},Section::NONE,{}},
            {Section::WALKER,{15, 0},Section::LENGTH,{7},Section::NONE,{}},
            {Section::VIRTUALCURVE,{-8,12,13,1.5,0.7},Section::LENGTH,{7},Section::NONE,{}},

            {Section::VIRTUALCURVE,{-8,12,13,1.5,0.7},Section::BRIGHTNESS,{-0.3,0},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{100},Section::NONE,{}},
            

            {Section::TRACER,{12, -0.25,  30, 10, 3.45,0,0,LineTracer::LEFTEDGE},Section::LENGTH,{14},Section::NONE,{}},


            //{Section::WALKER,{0, 0},Section::LENGTH,{100},Section::NONE,{}},
            //{Section::TURNWALKER,{-20,40,5,3},Section::TURNANGLE,{22},Section::NONE,{}},
            

            {Section::END,{},Section::ENDJ,{}},
        };

        SecParam GettingBlockleftpara[100] = {
            {Section::DEFOLTARMCHANGE,{5},Section::TIME,{20},Section::NONE,{}},
            {Section::WALKER,{15, 0},Section::LENGTH,{8},Section::NONE,{}},
            {Section::VIRTUALCURVE,{8,12,13,1.5,0.7},Section::LENGTH,{7},Section::NONE,{}},

            {Section::VIRTUALCURVE,{8,12,13,1.5,0.7},Section::BRIGHTNESS,{-0.3,0},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{100},Section::NONE,{}},
            

            
            
            
            {Section::TRACER,{12, -0.25,  30, 10, 3.45,0,0,LineTracer::RIGHTEDGE},Section::LENGTH,{14},Section::NONE,{}},
            {Section::END,{},Section::ENDJ,{}},
        };

        SecParam MoveToGoalpara[100] = {
           
            {Section::VIRTUALSTRAIGHT,{0,12,15,3,0.7},Section::COLOR,{120,0.6},Section::NONE,{}},

            {Section::TURNWALKER,{-10,10,1.5,0.7},Section::TURNANGLE,{50},Section::NONE,{}},

            
            //{Section::VIRTUALCURVE,{20,18,22,5,2},Section::LENGTH,{63},Section::NONE,{}},
            {Section::VIRTUALSTRAIGHT,{0,23,15,3,0.7},Section::LENGTH,{53},Section::NONE,{}},
            {Section::VIRTUALSTRAIGHT,{0,12,15,3,0.7},Section::BRIGHTNESS,{-0.4,0},Section::NONE,{}},
            //{Section::VIRTUALSTRAIGHT,{0,18,22,5,2},Section::BRIGHTNESS,{-0.13,0},Section::NONE,{}},

            {Section::TURNWALKER,{10,10,1.5,0.7},Section::TURNANGLE,{-53},Section::NONE,{}},



            
            {Section::TRACER,{18, -0.25,  30, 16, 3.45,0,0,LineTracer::RIGHTEDGE},Section::LENGTH,{25},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::LENGTH,{2000},Section::NONE,{}},
            {Section::END,{},Section::ENDJ,{}},
        };
#endif

#if PATARN == 5
        SecParam IntoBlockDeTreasurepara[100] = {
            
            {Section::DEFOLTARMCHANGE,{5},Section::TIME,{1},Section::NONE,{}},
            
            {Section::TURNWALKER,{-10,10,1.5,0.7},Section::TURNANGLE,{70},Section::NONE,{}},
            {Section::VIRTUALSTRAIGHT,{0,36,30,10,3.45},Section::LENGTH,{40},Section::NONE,{}},
            {Section::VIRTUALSTRAIGHT,{0,12,15,3,0.7},Section::BRIGHTNESS,{-0.4,0},Section::NONE,{}},
            
            {Section::WALKER,{0, 0},Section::TIME,{2},Section::NONE,{}},
            {Section::TURNWALKER,{10,10,1.5,0.7},Section::TURNANGLE,{-65},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{2},Section::NONE,{}},

            {Section::END,{},Section::ENDJ,{}},
        };

        SecParam MoveToBlockpara[100] = {

            {Section::WALKER,{0, 0},Section::TIME,{10},Section::NONE,{}},
            
            {Section::TRACER,{12, -0.25,  30, 16, 3.45,0,0,LineTracer::RIGHTEDGE},Section::LENGTH,{12},Section::NONE,{}},
            
            {Section::VIRTUALSTRAIGHT,{0,12,15,3,0.7,LineTracer::RIGHTEDGE},Section::COLOR,{200,0.5},Section::NONE,{}},//??¿½?¿½?
            
            {Section::VIRTUALSTRAIGHT,{0,12,15,3,0.7},Section::LENGTH,{9},Section::NONE,{}},
            
            
        
            {Section::TRACER,{12, -0.25,  30, 16, 3.45,0,0,LineTracer::RIGHTEDGE},Section::LENGTH,{18},Section::NONE,{}},//???¿½?¿½??¿½?¿½?
            
            {Section::VIRTUALSTRAIGHT,{0,12,15,3,0.7,LineTracer::RIGHTEDGE},Section::COLOR,{15,0.5},Section::NONE,{}},//èµ¤
            {Section::VIRTUALSTRAIGHT,{0,12,15,3,0.7},Section::LENGTH,{9},Section::NONE,{}},
            
          

            {Section::TRACER,{12, -0.25,  30, 16, 3.45,0,0,LineTracer::RIGHTEDGE},Section::LENGTH,{16},Section::NONE,{}},
       
            {Section::WALKER,{0, 0},Section::TIME,{200},Section::NONE,{}},
            
            {Section::END,{},Section::ENDJ,{}},
        };

        SecParam MoveToBlockpara2[100] = {
            {Section::VIRTUALSTRAIGHT,{0,12,15,3,0.7,LineTracer::RIGHTEDGE},Section::COLOR,{15,0.5},Section::NONE,{}},//èµ¤
            {Section::VIRTUALCURVE,{7,12,13,1.5,0.7},Section::LENGTH,{5},Section::NONE,{}},
            {Section::VIRTUALCURVE,{7,12,13,1.5,0.7},Section::BRIGHTNESS,{-0.3,0},Section::NONE,{}},
            {Section::TRACER,{12, -0.25,  30, 16, 3.45,0,0,LineTracer::RIGHTEDGE},Section::LENGTH,{16},Section::NONE,{}},//???¿½?¿½??¿½?¿½?
            

            {Section::VIRTUALSTRAIGHT,{0,12,15,3,0.7,LineTracer::LEFTEDGE},Section::COLOR,{15,0.5},Section::NONE,{}},//èµ¤
            {Section::VIRTUALSTRAIGHT,{0,12,15,3,0.7},Section::LENGTH,{9},Section::NONE,{}},
            {Section::TRACER,{12, -0.25,  30, 16, 3.45,0,0,LineTracer::RIGHTEDGE},Section::LENGTH,{18},Section::NONE,{}},


            {Section::VIRTUALSTRAIGHT,{0,12,15,3,0.7,LineTracer::RIGHTEDGE},Section::COLOR,{200,0.5},Section::NONE,{}},//??¿½?¿½?
            {Section::VIRTUALSTRAIGHT,{0,12,15,3,0.7},Section::LENGTH,{9},Section::NONE,{}},

            {Section::TRACER,{12, -0.25,  30, 16, 3.45,0,0,LineTracer::RIGHTEDGE},Section::LENGTH,{14},Section::NONE,{}},
            

            {Section::END,{},Section::ENDJ,{}},
        };

        SecParam MoveToBlockpara3[100] = {
           
            {Section::VIRTUALSTRAIGHT,{0,12,15,3,0.7},Section::COLOR,{120,0.6},Section::NONE,{}},
            {Section::VIRTUALCURVE,{-7,12,13,1.5,0.7},Section::LENGTH,{5},Section::NONE,{}},
            {Section::VIRTUALCURVE,{-7,12,13,1.5,0.7},Section::BRIGHTNESS,{-0.3,0},Section::NONE,{}},

            {Section::TRACER,{12, -0.25,  30, 16, 3.45,0,0,LineTracer::LEFTEDGE},Section::LENGTH,{14},Section::NONE,{}},


            {Section::END,{},Section::ENDJ,{}},
        };
        
        SecParam JudgeingColorpara[100] = {
            {Section::DEFOLTARMCHANGE,{60},Section::TIME,{50},Section::NONE,{}},
            {Section::VIRTUALSTRAIGHT,{0,8,15,3,0.7},Section::LENGTH,{5},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{1},Section::NONE,{}},
            {Section::DEFOLTARMCHANGE,{60},Section::BLOCKCOLOR,{15,200,0.5,300},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{1},Section::NONE,{}},

            {Section::WALKER,{-16, 0},Section::LENGTH,{-3},Section::NONE,{}},
            
            {Section::END,{},Section::ENDJ,{}},
        };

        SecParam GetoutBlockpara[100] = {
            {Section::DEFOLTARMCHANGE,{5},Section::TIME,{20},Section::NONE,{}},
            
            {Section::TURNWALKER,{10,10,1.5,0.7},Section::TURNANGLE,{-43},Section::NONE,{}},
            {Section::VIRTUALSTRAIGHT,{0,12,15,3,0.7},Section::LENGTH,{9},Section::NONE,{}},
            {Section::VIRTUALSTRAIGHT,{0,12,15,3,0.7},Section::BRIGHTNESS,{-0.3,0},Section::NONE,{}},
            {Section::TURNWALKER,{10,10,1.5,0.7},Section::TURNANGLE,{-50},Section::NONE,{}},

          
            {Section::TRACER,{12, -0.45,  30, 16, 3.45,0,0,LineTracer::RIGHTEDGE},Section::LENGTH,{13},Section::NONE,{}},
            
            
            
            {Section::END,{},Section::ENDJ,{}},
        };

        SecParam GetoutBlockLeftpara[100] = {
            {Section::DEFOLTARMCHANGE,{5},Section::TIME,{20},Section::NONE,{}},
            
            {Section::TURNWALKER,{-10,10,1.5,0.7},Section::TURNANGLE,{43},Section::NONE,{}},
            {Section::VIRTUALSTRAIGHT,{0,12,15,3,0.7},Section::LENGTH,{9},Section::NONE,{}},
            {Section::VIRTUALSTRAIGHT,{0,12,15,3,0.7},Section::BRIGHTNESS,{-0.3,0},Section::NONE,{}},
            {Section::TURNWALKER,{-10,10,1.5,0.7},Section::TURNANGLE,{50},Section::NONE,{}},

           
            {Section::TRACER,{12, -0.45,  30, 16, 3.45,0,0,LineTracer::LEFTEDGE},Section::LENGTH,{13},Section::NONE,{}},
            {Section::END,{},Section::ENDJ,{}},
        };

        SecParam GetoutBlockRedpara[100] = {
            {Section::TURNWALKER,{10,10,1.5,0.7},Section::TURNANGLE,{-43},Section::NONE,{}},
            {Section::VIRTUALSTRAIGHT,{0,12,15,3,0.7},Section::LENGTH,{9},Section::NONE,{}},
            {Section::VIRTUALSTRAIGHT,{0,12,15,3,0.7},Section::BRIGHTNESS,{-0.3,0},Section::NONE,{}},
            {Section::TURNWALKER,{10,10,1.5,0.7},Section::TURNANGLE,{-50},Section::NONE,{}},

     
            {Section::TRACER,{12, -0.4,  30, 16, 3.45,0,0,LineTracer::RIGHTEDGE},Section::LENGTH,{13},Section::NONE,{}},
            {Section::END,{},Section::ENDJ,{}},
        };

        SecParam GetoutBlockLeftRedpara[100] = {
            {Section::TURNWALKER,{-10,10,1.5,0.7},Section::TURNANGLE,{43},Section::NONE,{}},
            {Section::VIRTUALSTRAIGHT,{0,12,15,3,0.7},Section::LENGTH,{13},Section::NONE,{}},
            {Section::VIRTUALSTRAIGHT,{0,12,15,3,0.7},Section::BRIGHTNESS,{-0.3,0},Section::NONE,{}},
            {Section::WALKER,{0,0},Section::TIME,{200},Section::NONE,{}},
            //{Section::WALKER,{0,0},Section::LENGTH,{500},Section::NONE,{}},

            {Section::TURNWALKER,{-10,10,1.5,0.7},Section::TURNANGLE,{75},Section::NONE,{}},
            //{Section::WALKER,{0,10},Section::TURNANGLE,{-65},Section::NONE,{}},
            //{Section::WALKER,{-13, 0},Section::LENGTH,{-5},Section::NONE,{}},//å¾Œé€²
            {Section::TRACER,{12, -0.25,  30, 16, 3.45,0,0,LineTracer::LEFTEDGE},Section::LENGTH,{13},Section::NONE,{}},

            {Section::END,{},Section::ENDJ,{}},
            
        };

        SecParam GettingBlockpara[100] = {
            {Section::DEFOLTARMCHANGE,{5},Section::TIME,{20},Section::NONE,{}},
            {Section::WALKER,{15, 0},Section::LENGTH,{7},Section::NONE,{}},
            {Section::VIRTUALCURVE,{-7.5,12,13,1.5,0.7},Section::LENGTH,{7},Section::NONE,{}},

            {Section::VIRTUALCURVE,{-7.5,12,13,1.5,0.7},Section::BRIGHTNESS,{-0.3,0},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{100},Section::NONE,{}},
            

            {Section::TRACER,{12, -0.4,  30, 10, 3.45,0,0,LineTracer::LEFTEDGE},Section::LENGTH,{13},Section::NONE,{}},


            //{Section::WALKER,{0, 0},Section::LENGTH,{100},Section::NONE,{}},
            //{Section::TURNWALKER,{-20,40,5,3},Section::TURNANGLE,{22},Section::NONE,{}},
            

            {Section::END,{},Section::ENDJ,{}},
        };

        SecParam GettingBlockleftpara[100] = {
            {Section::DEFOLTARMCHANGE,{5},Section::TIME,{20},Section::NONE,{}},
            {Section::WALKER,{15, 0},Section::LENGTH,{8},Section::NONE,{}},
            {Section::VIRTUALCURVE,{8,12,13,1.5,0.7},Section::LENGTH,{7},Section::NONE,{}},

            {Section::VIRTUALCURVE,{8,12,13,1.5,0.7},Section::BRIGHTNESS,{-0.3,0},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{100},Section::NONE,{}},
            

            
            
            
            {Section::TRACER,{12, -0.4,  30, 10, 3.45,0,0,LineTracer::RIGHTEDGE},Section::LENGTH,{13},Section::NONE,{}},
            {Section::END,{},Section::ENDJ,{}},
        };

        SecParam MoveToGoalpara[100] = {
           
            {Section::VIRTUALSTRAIGHT,{0,11,15,3,0.7},Section::COLOR,{120,0.63},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{50},Section::NONE,{}},

            {Section::TURNWALKER,{10,10,1.5,0.7},Section::TURNANGLE,{-43},Section::NONE,{}},

            
            //{Section::VIRTUALCURVE,{20,18,22,5,2},Section::LENGTH,{63},Section::NONE,{}},
            {Section::VIRTUALSTRAIGHT,{0,23,15,3,0.7},Section::LENGTH,{53},Section::NONE,{}},
            {Section::VIRTUALSTRAIGHT,{0,12,15,3,0.7},Section::BRIGHTNESS,{-0.4,0},Section::NONE,{}},
            //{Section::VIRTUALSTRAIGHT,{0,18,22,5,2},Section::BRIGHTNESS,{-0.13,0},Section::NONE,{}},

            {Section::TURNWALKER,{10,10,1.5,0.7},Section::TURNANGLE,{-63},Section::NONE,{}},



            
            {Section::TRACER,{18, -0.25,  30, 16, 3.45,0,0,LineTracer::RIGHTEDGE},Section::LENGTH,{20},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::LENGTH,{2000},Section::NONE,{}},
            {Section::END,{},Section::ENDJ,{}},
        };
#endif





  
        

};

#endif
