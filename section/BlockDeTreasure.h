#ifndef _BLOCK_DE_TREASURE_H_
#define _BLOCK_DE_TREASURE_H_
#include "SectionManager.h"
#include "HackEv3.h"

class BlockDeTreasure : public SectionManager {
    public:
        BlockDeTreasure();
        bool IntoBlockDeTreasure();//�u���b�N�G���A�ɓ���
        bool MoveToBlock();//�u���b�N�܂ňړ�����
        bool MoveToBlock2();
        bool MoveToBlock3();
        bool GetoutBlock();//�u���b�N��ǂ��o��
        bool GetoutBlockLeft();
        bool JudgeingColor();//�u���b�N�̐F�𔻒肷��
        bool GettingBlock();//�u���b�N���擾����
        bool GettingBlockLeft();
        bool MoveToGoal();//�S�[���܂ňړ�����
        
        void SelectGetout();
        void SelectGetting();
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

            INIT_GETOUT_BLOCK_LEFT,
            GETOUT_BLOCK_LEFT,

            INIT_JUDGEING_COLOR,
            JUDGEING_COLOR,

            INIT_GETTING_BLOCK,
            GETTING_BLOCK,

            INIT_GETTING_BLOCK_LEFT,
            GETTING_BLOCK_LEFT,

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
        
            
            
       
    
#if PATARN == 1
        SecParam IntoBlockDeTreasurepara[100] = {
            {Section::DEFOLTARMCHANGE,{-15},Section::TIME,{1},Section::NONE,{}},
            
            {Section::TURNWALKER,{20,40,5,3},Section::TURNANGLE,{-78},Section::NONE,{}},
            {Section::VIRTUALSTRAIGHT,{0,15,20,5,2},Section::LENGTH,{58},Section::NONE,{}},
            
            {Section::WALKER,{0, 0},Section::TIME,{2},Section::NONE,{}},
            {Section::TURNWALKER,{-20,40,5,3},Section::TURNANGLE,{70},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{2},Section::NONE,{}},
            
            {Section::DEFOLTARMCHANGE,{40},Section::TIME,{1},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{1},Section::NONE,{}},
            {Section::TEEL,{70},Section::TEELANGLE,{4200},Section::NONE,{}},//?��?��?��?��?��ۂ̂�?��傤?��Ǘǂ�?��p?��x?��?��?��?��?��?��
            {Section::WALKER,{0, 0},Section::TIME,{1},Section::NONE,{}},
            {Section::DEFOLTARMCHANGE,{-15},Section::TIME,{5},Section::NONE,{}},


            //試験用
        /*    {Section::DEFOLTARMCHANGE,{-15},Section::TIME,{5},Section::NONE,{}},
            {Section::TRACER,{10, -0.25,  50, 53, 9,0,0,LineTracer::LEFTEDGE},Section::LENGTH,{17},Section::NONE,{}},
            {Section::TURNWALKER,{20,40,5,3},Section::TURNANGLE,{-47},Section::NONE,{}},
            {Section::VIRTUALSTRAIGHT,{0,18,22,5,2},Section::LENGTH,{24},Section::NONE,{}},
            {Section::TURNWALKER,{80,40,5,3},Section::TURNANGLE,{-95},Section::NONE,{}},
            {Section::TURNWALKER,{-20,40,5,3},Section::TURNANGLE,{42},Section::NONE,{}},
            //{Section::WALKER,{-15, 0},Section::LENGTH,{-6},Section::NONE,{}},//後進
            {Section::TRACER,{10, -0.25,  50, 53, 9,0,0,LineTracer::LEFTEDGE},Section::LENGTH,{15},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::LENGTH,{2000},Section::NONE,{}},
   */
            {Section::END,{},Section::ENDJ,{}},
        };

        SecParam MoveToBlockpara[100] = {

            {Section::DEFOLTARMCHANGE,{-15},Section::TIME,{1},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{10},Section::NONE,{}},
            //{Section::WALKER,{-10, 0},Section::LENGTH,{-6},Section::NONE,{}},
            {Section::TRACER,{10, -0.25,  50, 53, 9,0,0,LineTracer::LEFTEDGE},Section::LENGTH,{16},Section::NONE,{}},
            {Section::WALKER,{-10, 0},Section::LENGTH,{-13},Section::NONE,{}},
            {Section::TRACER,{10, -0.25,  50, 53, 9,0,0,LineTracer::LEFTEDGE},Section::LENGTH,{16},Section::NONE,{}},
            //{Section::WALKER,{0, 0},Section::TIME,{100},Section::NONE,{}},
            {Section::VIRTUALSTRAIGHT,{0,10,20,5,2,LineTracer::LEFTEDGE},Section::COLOR,{200,0.5},Section::NONE,{}},//青
            //{Section::WALKER,{0, 0},Section::TIME,{100},Section::NONE,{}},
            {Section::VIRTUALSTRAIGHT,{0,10,20,5,2},Section::LENGTH,{9},Section::NONE,{}},
            //{Section::WALKER,{0, 0},Section::TIME,{100},Section::NONE,{}}, 
            
        
            {Section::TRACER,{10, -0.25,  50, 53, 9,0,0,LineTracer::LEFTEDGE},Section::LENGTH,{17},Section::NONE,{}},//�?
            //{Section::WALKER,{0, 0},Section::TIME,{100},Section::NONE,{}},
            {Section::VIRTUALSTRAIGHT,{0,10,20,5,2,LineTracer::LEFTEDGE},Section::COLOR,{15,0.5},Section::NONE,{}},//赤
            //{Section::WALKER,{0, 0},Section::TIME,{100},Section::NONE,{}}, 
             {Section::VIRTUALSTRAIGHT,{0,10,20,5,2},Section::LENGTH,{9},Section::NONE,{}},
            //{Section::WALKER,{5, 0},Section::LENGTH,{12},Section::NONE,{}},
            //{Section::WALKER,{0, 0},Section::TIME,{50},Section::NONE,{}}, 
            //{Section::DEFOLTARMCHANGE,{-15},Section::TIME,{5},Section::NONE,{}},
            {Section::TRACER,{10, -0.25,  50, 53, 9,0,0,LineTracer::LEFTEDGE},Section::LENGTH,{12},Section::NONE,{}},
            {Section::WALKER,{-10, 0},Section::LENGTH,{-10},Section::NONE,{}},
            {Section::TRACER,{10, -0.25,  50, 53, 9,0,0,LineTracer::LEFTEDGE},Section::LENGTH,{10},Section::NONE,{}},
            //{Section::WALKER,{0, 0},Section::TIME,{30},Section::NONE,{}},
            {Section::DEFOLTARMCHANGE,{55},Section::TIME,{50},Section::NONE,{}},
            {Section::VIRTUALSTRAIGHT,{0,10,20,5,2},Section::LENGTH,{5},Section::NONE,{}},

            
            {Section::END,{},Section::ENDJ,{}},
        };

        SecParam MoveToBlockpara2[100] = {
            //{Section::WALKER,{0, 0},Section::TIME,{50},Section::NONE,{}}, 
            {Section::VIRTUALSTRAIGHT,{0,10,20,5,2,LineTracer::LEFTEDGE},Section::COLOR,{15,0.5},Section::NONE,{}},//赤
            //{Section::WALKER,{0, 0},Section::TIME,{100},Section::NONE,{}}, 
            
            {Section::TURNWALKER,{40,40,5,3},Section::TURNANGLE,{-47},Section::NONE,{}},
            {Section::VIRTUALSTRAIGHT,{0,12,22,5,2},Section::LENGTH,{11},Section::NONE,{}},
            {Section::TURNWALKER,{40,40,5,3},Section::TURNANGLE,{-34},Section::NONE,{}},
            //{Section::WALKER,{0, 0},Section::TIME,{80},Section::NONE,{}},
            //{Section::WALKER,{15, 0},Section::LENGTH,{2},Section::NONE,{}},
            {Section::TRACER,{10, -0.25,  50, 53, 9,0,0,LineTracer::LEFTEDGE},Section::LENGTH,{17},Section::NONE,{}},//�?
            //{Section::WALKER,{0, 0},Section::TIME,{100},Section::NONE,{}},
            {Section::VIRTUALSTRAIGHT,{0,10,20,5,2,LineTracer::LEFTEDGE},Section::COLOR,{15,0.5},Section::NONE,{}},//赤
            //{Section::WALKER,{0, 0},Section::TIME,{100},Section::NONE,{}}, 
            {Section::VIRTUALSTRAIGHT,{0,10,20,5,2},Section::LENGTH,{9},Section::NONE,{}},
            
            {Section::TRACER,{10, -0.25,  50, 53, 9,0,0,LineTracer::LEFTEDGE},Section::LENGTH,{12},Section::NONE,{}},
            {Section::WALKER,{-10, 0},Section::LENGTH,{-12},Section::NONE,{}},
            {Section::TRACER,{10, -0.25,  50, 53, 9,0,0,LineTracer::LEFTEDGE},Section::LENGTH,{12},Section::NONE,{}},
            {Section::DEFOLTARMCHANGE,{55},Section::TIME,{50},Section::NONE,{}},
            {Section::VIRTUALSTRAIGHT,{0,10,20,5,2},Section::LENGTH,{5},Section::NONE,{}},

            {Section::END,{},Section::ENDJ,{}},
        };

        SecParam MoveToBlockpara3[100] = {
            //{Section::WALKER,{0, 0},Section::TIME,{100},Section::NONE,{}}, 
            {Section::VIRTUALSTRAIGHT,{0,10,20,5,2,LineTracer::LEFTEDGE},Section::COLOR,{104,0.5},Section::NONE,{}},//緑
            
            {Section::TURNWALKER,{-40,40,5,3},Section::TURNANGLE,{44},Section::NONE,{}},
            {Section::VIRTUALSTRAIGHT,{0,12,22,5,2},Section::LENGTH,{6},Section::NONE,{}},
            {Section::TURNWALKER,{-40,40,5,3},Section::TURNANGLE,{34},Section::NONE,{}},


            {Section::TRACER,{10, -0.25,  50, 53, 9,0,0,LineTracer::LEFTEDGE},Section::LENGTH,{17},Section::NONE,{}},
            {Section::VIRTUALSTRAIGHT,{0,10,20,5,2,LineTracer::LEFTEDGE},Section::COLOR,{40,0.5},Section::NONE,{}},//黄
            {Section::VIRTUALSTRAIGHT,{0,10,20,5,2},Section::LENGTH,{9},Section::NONE,{}},
            {Section::TRACER,{10, -0.25,  50, 53, 9,0,0,LineTracer::LEFTEDGE},Section::LENGTH,{17},Section::NONE,{}},
            {Section::VIRTUALSTRAIGHT,{0,10,20,5,2,LineTracer::LEFTEDGE},Section::COLOR,{40,0.5},Section::NONE,{}},//黄

            {Section::TURNWALKER,{40,40,5,3},Section::TURNANGLE,{-47},Section::NONE,{}},
            {Section::VIRTUALSTRAIGHT,{0,12,22,5,2},Section::LENGTH,{10},Section::NONE,{}},
            {Section::TURNWALKER,{40,40,5,3},Section::TURNANGLE,{-34},Section::NONE,{}},

            {Section::TRACER,{10, -0.25,  50, 53, 9,0,0,LineTracer::LEFTEDGE},Section::LENGTH,{11},Section::NONE,{}},
            {Section::WALKER,{-10, 0},Section::LENGTH,{-10},Section::NONE,{}},
            {Section::TRACER,{8, -0.25,  50, 53, 9,0,0,LineTracer::LEFTEDGE},Section::LENGTH,{11},Section::NONE,{}},
            {Section::DEFOLTARMCHANGE,{55},Section::TIME,{50},Section::NONE,{}},
            {Section::VIRTUALSTRAIGHT,{0,8,20,5,2},Section::LENGTH,{5},Section::NONE,{}},


            {Section::END,{},Section::ENDJ,{}},
        };
        
        SecParam JudgeingColorpara[100] = {
            {Section::WALKER,{0, 0},Section::TIME,{1},Section::NONE,{}},
            {Section::DEFOLTARMCHANGE,{55},Section::BLOCKCOLOR,{15,200,0.5,300},Section::NONE,{}},
            
            
            
            
            {Section::END,{},Section::ENDJ,{}},
        };

        SecParam GetoutBlockpara[100] = {
            
            {Section::WALKER,{-15, 0},Section::LENGTH,{-7},Section::NONE,{}},//後進
            {Section::DEFOLTARMCHANGE,{-15},Section::TIME,{3},Section::NONE,{}},
            {Section::TURNWALKER,{20,40,5,3},Section::TURNANGLE,{-47},Section::NONE,{}},
            {Section::VIRTUALSTRAIGHT,{0,18,22,5,2},Section::LENGTH,{24},Section::NONE,{}},
            {Section::TURNWALKER,{80,40,5,3},Section::TURNANGLE,{-95},Section::NONE,{}},
            {Section::TURNWALKER,{-50,40,5,3},Section::TURNANGLE,{42},Section::NONE,{}},
            {Section::WALKER,{-13, 0},Section::LENGTH,{-5},Section::NONE,{}},//後進
            {Section::TRACER,{10, -0.25,  50, 53, 9,0,0,LineTracer::LEFTEDGE},Section::LENGTH,{16},Section::NONE,{}},
            //{Section::WALKER,{0, 0},Section::TIME,{50},Section::NONE,{}},
            
            
            
            {Section::END,{},Section::ENDJ,{}},
        };

        SecParam GetoutBlockLeftpara[100] = {

            {Section::WALKER,{-15, 0},Section::LENGTH,{-7},Section::NONE,{}},//後進
            {Section::DEFOLTARMCHANGE,{-15},Section::TIME,{3},Section::NONE,{}},
            {Section::TURNWALKER,{-20,40,5,3},Section::TURNANGLE,{43},Section::NONE,{}},
            {Section::VIRTUALSTRAIGHT,{0,18,22,5,2},Section::LENGTH,{22},Section::NONE,{}},
            {Section::TURNWALKER,{-80,40,5,3},Section::TURNANGLE,{90},Section::NONE,{}},
            
            {Section::TURNWALKER,{50,40,5,3},Section::TURNANGLE,{-40},Section::NONE,{}},
            {Section::WALKER,{-13, 0},Section::LENGTH,{-5},Section::NONE,{}},//後進
            {Section::TRACER,{10, -0.25,  50, 53, 9,0,0,LineTracer::LEFTEDGE},Section::LENGTH,{16},Section::NONE,{}},
            //{Section::WALKER,{0, 0},Section::TIME,{30},Section::NONE,{}},


            {Section::END,{},Section::ENDJ,{}},
        };

         SecParam GettingBlockpara[100] = {
            {Section::WALKER,{-15, 0},Section::LENGTH,{-3},Section::NONE,{}},//後進
            {Section::DEFOLTARMCHANGE,{-15},Section::TIME,{3},Section::NONE,{}},
            {Section::WALKER,{10, 0},Section::LENGTH,{8},Section::NONE,{}},

            
            {Section::TURNWALKER,{-30,40,5,3},Section::TURNANGLE,{45},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{100},Section::NONE,{}},
            {Section::END,{},Section::ENDJ,{}},
        };

        SecParam GettingBlockleftpara[100] = {
            {Section::WALKER,{-20, -20},Section::TIME,{100},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{100},Section::NONE,{}},
            {Section::END,{},Section::ENDJ,{}},
        };

        SecParam MoveToGoalpara[100] = {
           
         /* {Section::TURNWALKER,{16,40,5,3},Section::TURNANGLE,{-88},Section::NONE,{}},
            {Section::VIRTUALSTRAIGHT,{0,18,22,5,2},Section::LENGTH,{25},Section::NONE,{}},
            {Section::TURNWALKER,{-20,40,5,3},Section::TURNANGLE,{90},Section::NONE,{}},
            {Section::VIRTUALSTRAIGHT,{0,20,22,5,2},Section::LENGTH,{53},Section::NONE,{}},
            {Section::TURNWALKER,{-20,40,5,3},Section::TURNANGLE,{90},Section::NONE,{}},
            {Section::VIRTUALSTRAIGHT,{0,20,22,5,2},Section::LENGTH,{60},Section::NONE,{}},
        */     
            
            {Section::VIRTUALCURVE,{-10,18,22,5,2},Section::LENGTH,{15},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{50},Section::NONE,{}},
            {Section::VIRTUALCURVE,{20,18,22,5,2},Section::LENGTH,{63},Section::NONE,{}},
            {Section::VIRTUALSTRAIGHT,{0,18,22,5,2},Section::LENGTH,{19},Section::NONE,{}},

            {Section::WALKER,{-18, 0},Section::LENGTH,{-5},Section::NONE,{}},

            {Section::WALKER,{0, 0},Section::TIME,{100},Section::NONE,{}},
            {Section::DEFOLTARMCHANGE,{40},Section::TIME,{1},Section::NONE,{}},
            {Section::TEEL,{-70},Section::TEELANGLE,{-4200},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{1},Section::NONE,{}},
            {Section::DEFOLTARMCHANGE,{-10},Section::TIME,{1},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::LENGTH,{2000},Section::NONE,{}},
            {Section::END,{},Section::ENDJ,{}},
        };
#endif

#if PATARN == 2
        SecParam IntoBlockDeTreasurepara[100] = {
            {Section::WALKER,{10, 0},Section::LENGTH,{20},Section::NONE,{}},

            {Section::END,{},Section::ENDJ,{}},
        };

        SecParam MoveToBlockpara[100] = {

            {Section::WALKER,{10, 0},Section::LENGTH,{20},Section::NONE,{}},
            
            {Section::END,{},Section::ENDJ,{}},
        };

        SecParam MoveToBlockpara2[100] = {
            {Section::WALKER,{10, 0},Section::LENGTH,{20},Section::NONE,{}},
            {Section::VIRTUALSTRAIGHT,{-40,12,22,5,2},Section::LENGTH,{10},Section::NONE,{}},
            

            {Section::END,{},Section::ENDJ,{}},
        };

        SecParam MoveToBlockpara3[100] = {
           
            {Section::WALKER,{20, 20},Section::LENGTH,{40},Section::NONE,{}},
            //{Section::WALKER,{0, 0},Section::LENGTH,{100},Section::NONE,{}},
            {Section::END,{},Section::ENDJ,{}},
        };
        
        SecParam JudgeingColorpara[100] = {
            {Section::WALKER,{0, 0},Section::TIME,{1},Section::NONE,{}},
            {Section::DEFOLTARMCHANGE,{55},Section::BLOCKCOLOR,{15,200,0.5,300},Section::NONE,{}},
            {Section::DEFOLTARMCHANGE,{0},Section::TIME,{1},Section::NONE,{}},
            
            {Section::END,{},Section::ENDJ,{}},
        };

        SecParam GetoutBlockpara[100] = {
            {Section::TURNWALKER,{30,40,5,3},Section::TURNANGLE,{-45},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{100},Section::NONE,{}},
            
            
            
            {Section::END,{},Section::ENDJ,{}},
        };

        SecParam GetoutBlockLeftpara[100] = {
            {Section::TURNWALKER,{-30,40,5,3},Section::TURNANGLE,{45},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{100},Section::NONE,{}},
            {Section::END,{},Section::ENDJ,{}},
        };

        SecParam GettingBlockpara[100] = {
            //{Section::TURNWALKER,{-30,40,5,3},Section::TURNANGLE,{45},Section::NONE,{}},
            {Section::WALKER,{20, 20},Section::TIME,{100},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{100},Section::NONE,{}},
            

            {Section::END,{},Section::ENDJ,{}},
        };

        SecParam GettingBlockleftpara[100] = {
            {Section::WALKER,{-20, -20},Section::TIME,{100},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{100},Section::NONE,{}},
            {Section::END,{},Section::ENDJ,{}},
        };

        SecParam MoveToGoalpara[100] = {
           
            {Section::TURNWALKER,{-30,40,5,3},Section::TURNANGLE,{-45},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::LENGTH,{100},Section::NONE,{}},
            {Section::END,{},Section::ENDJ,{}},
        };
#endif

#if PATARN == 3
        SecParam IntoBlockDeTreasurepara[100] = {
            {Section::WALKER,{10, 0},Section::LENGTH,{20},Section::NONE,{}},

            {Section::END,{},Section::ENDJ,{}},
        };

        SecParam MoveToBlockpara[100] = {

            {Section::WALKER,{10, 0},Section::LENGTH,{20},Section::NONE,{}},
            
            {Section::END,{},Section::ENDJ,{}},
        };

        SecParam MoveToBlockpara2[100] = {
            {Section::WALKER,{10, 0},Section::LENGTH,{20},Section::NONE,{}},
            {Section::VIRTUALSTRAIGHT,{-40,12,22,5,2},Section::LENGTH,{10},Section::NONE,{}},
            

            {Section::END,{},Section::ENDJ,{}},
        };

        SecParam MoveToBlockpara3[100] = {
           
            {Section::WALKER,{20, 20},Section::LENGTH,{40},Section::NONE,{}},
            //{Section::WALKER,{0, 0},Section::LENGTH,{100},Section::NONE,{}},
            {Section::END,{},Section::ENDJ,{}},
        };
        
        SecParam JudgeingColorpara[100] = {
            {Section::WALKER,{0, 0},Section::TIME,{1},Section::NONE,{}},
            {Section::DEFOLTARMCHANGE,{60},Section::BLOCKCOLOR,{15,200,0.5,300},Section::NONE,{}},
            {Section::DEFOLTARMCHANGE,{-50},Section::TIME,{1},Section::NONE,{}},
            
            {Section::END,{},Section::ENDJ,{}},
        };

        SecParam GetoutBlockpara[100] = {
            {Section::TURNWALKER,{30,40,5,3},Section::TURNANGLE,{-45},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{100},Section::NONE,{}},
            
            
            
            {Section::END,{},Section::ENDJ,{}},
        };

        SecParam GetoutBlockLeftpara[100] = {
            {Section::TURNWALKER,{-30,40,5,3},Section::TURNANGLE,{45},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{100},Section::NONE,{}},
            {Section::END,{},Section::ENDJ,{}},
        };

        SecParam GettingBlockpara[100] = {
            //{Section::TURNWALKER,{-30,40,5,3},Section::TURNANGLE,{45},Section::NONE,{}},
            {Section::WALKER,{20, 20},Section::TIME,{100},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{100},Section::NONE,{}},
            

            {Section::END,{},Section::ENDJ,{}},
        };

        SecParam GettingBlockleftpara[100] = {
            {Section::WALKER,{-20, -20},Section::TIME,{100},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{100},Section::NONE,{}},
            {Section::END,{},Section::ENDJ,{}},
        };

        SecParam MoveToGoalpara[100] = {
           
            {Section::TURNWALKER,{-30,40,5,3},Section::TURNANGLE,{-45},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::LENGTH,{100},Section::NONE,{}},
            {Section::END,{},Section::ENDJ,{}},
        };
#endif

#if PATARN == 4
        SecParam IntoBlockDeTreasurepara[100] = {
            {Section::WALKER,{10, 0},Section::LENGTH,{20},Section::NONE,{}},

            {Section::END,{},Section::ENDJ,{}},
        };

        SecParam MoveToBlockpara[100] = {

            {Section::WALKER,{10, 0},Section::LENGTH,{20},Section::NONE,{}},
            
            {Section::END,{},Section::ENDJ,{}},
        };

        SecParam MoveToBlockpara2[100] = {
            {Section::WALKER,{10, 0},Section::LENGTH,{20},Section::NONE,{}},
            {Section::VIRTUALSTRAIGHT,{-40,12,22,5,2},Section::LENGTH,{10},Section::NONE,{}},
            

            {Section::END,{},Section::ENDJ,{}},
        };

        SecParam MoveToBlockpara3[100] = {
           
            {Section::WALKER,{20, 20},Section::LENGTH,{40},Section::NONE,{}},
            //{Section::WALKER,{0, 0},Section::LENGTH,{100},Section::NONE,{}},
            {Section::END,{},Section::ENDJ,{}},
        };
        
        SecParam JudgeingColorpara[100] = {
            {Section::WALKER,{0, 0},Section::TIME,{1},Section::NONE,{}},
            {Section::DEFOLTARMCHANGE,{60},Section::BLOCKCOLOR,{15,200,0.5,300},Section::NONE,{}},
            {Section::DEFOLTARMCHANGE,{-50},Section::TIME,{1},Section::NONE,{}},
            
            {Section::END,{},Section::ENDJ,{}},
        };

        SecParam GetoutBlockpara[100] = {
            {Section::TURNWALKER,{30,40,5,3},Section::TURNANGLE,{-45},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{100},Section::NONE,{}},
            
            
            
            {Section::END,{},Section::ENDJ,{}},
        };

        SecParam GetoutBlockLeftpara[100] = {
            {Section::TURNWALKER,{-30,40,5,3},Section::TURNANGLE,{45},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{100},Section::NONE,{}},
            {Section::END,{},Section::ENDJ,{}},
        };

        SecParam GettingBlockpara[100] = {
            //{Section::TURNWALKER,{-30,40,5,3},Section::TURNANGLE,{45},Section::NONE,{}},
            {Section::WALKER,{20, 20},Section::TIME,{100},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{100},Section::NONE,{}},
            

            {Section::END,{},Section::ENDJ,{}},
        };

        SecParam GettingBlockleftpara[100] = {
            {Section::WALKER,{-20, -20},Section::TIME,{100},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{100},Section::NONE,{}},
            {Section::END,{},Section::ENDJ,{}},
        };

        SecParam MoveToGoalpara[100] = {
           
            {Section::TURNWALKER,{-30,40,5,3},Section::TURNANGLE,{-45},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::LENGTH,{100},Section::NONE,{}},
            {Section::END,{},Section::ENDJ,{}},
        };
#endif

#if PATARN == 5
        SecParam IntoBlockDeTreasurepara[100] = {
            {Section::WALKER,{10, 0},Section::LENGTH,{20},Section::NONE,{}},

            {Section::END,{},Section::ENDJ,{}},
        };

        SecParam MoveToBlockpara[100] = {

            {Section::WALKER,{10, 0},Section::LENGTH,{20},Section::NONE,{}},
            
            {Section::END,{},Section::ENDJ,{}},
        };

        SecParam MoveToBlockpara2[100] = {
            {Section::WALKER,{10, 0},Section::LENGTH,{20},Section::NONE,{}},
            {Section::VIRTUALSTRAIGHT,{-40,12,22,5,2},Section::LENGTH,{10},Section::NONE,{}},
            

            {Section::END,{},Section::ENDJ,{}},
        };

        SecParam MoveToBlockpara3[100] = {
           
            {Section::WALKER,{20, 20},Section::LENGTH,{40},Section::NONE,{}},
            //{Section::WALKER,{0, 0},Section::LENGTH,{100},Section::NONE,{}},
            {Section::END,{},Section::ENDJ,{}},
        };
        
        SecParam JudgeingColorpara[100] = {
            {Section::WALKER,{0, 0},Section::TIME,{1},Section::NONE,{}},
            {Section::DEFOLTARMCHANGE,{60},Section::BLOCKCOLOR,{15,200,0.5,300},Section::NONE,{}},
            {Section::DEFOLTARMCHANGE,{-50},Section::TIME,{1},Section::NONE,{}},
            
            {Section::END,{},Section::ENDJ,{}},
        };

        SecParam GetoutBlockpara[100] = {
            {Section::TURNWALKER,{30,40,5,3},Section::TURNANGLE,{-45},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{100},Section::NONE,{}},
            
            
            
            {Section::END,{},Section::ENDJ,{}},
        };

        SecParam GetoutBlockLeftpara[100] = {
            {Section::TURNWALKER,{-30,40,5,3},Section::TURNANGLE,{45},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{100},Section::NONE,{}},
            {Section::END,{},Section::ENDJ,{}},
        };

        SecParam GettingBlockpara[100] = {
            //{Section::TURNWALKER,{-30,40,5,3},Section::TURNANGLE,{45},Section::NONE,{}},
            {Section::WALKER,{20, 20},Section::TIME,{100},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{100},Section::NONE,{}},
            

            {Section::END,{},Section::ENDJ,{}},
        };

        SecParam GettingBlockleftpara[100] = {
            {Section::WALKER,{-20, -20},Section::TIME,{100},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::TIME,{100},Section::NONE,{}},
            {Section::END,{},Section::ENDJ,{}},
        };

        SecParam MoveToGoalpara[100] = {
           
            {Section::TURNWALKER,{-30,40,5,3},Section::TURNANGLE,{-45},Section::NONE,{}},
            {Section::WALKER,{0, 0},Section::LENGTH,{100},Section::NONE,{}},
            {Section::END,{},Section::ENDJ,{}},
        };
#endif
        

};

#endif
