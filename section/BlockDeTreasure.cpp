#include "BlockDeTreasure.h"
#include "Section.h"

#include "ev3api.h"

BlockDeTreasure::BlockDeTreasure():
    mState(INIT_INTO_BLOCK_DE_TREASURE)
{
    // test—p‰Šú??
 #if defined(MAKE_RIGHT)
      const int _EDGE = LineTracer::LEFTEDGE;
#else
      const int _EDGE = LineTracer::RIGHTEDGE;
#endif
    
}

//spara[i].Treasure_no

bool BlockDeTreasure::runBlock()
{

    if(mSection[mSectionIdx]->run())
    {
        printf("runBlock()OK\n");
        if(mSection[mSectionIdx]->returnValue() != -1)
        {
            WinnerColor = mSection[mSectionIdx]->returnValue();
            printf("WinnerColor%d\n",WinnerColor);
        }
        mSectionIdx++;

        //printf("mLastIdx%d\n",mLastIdx);
        //printf("mSectionIdx%d\n",mSectionIdx);

        if(mLastIdx <= mSectionIdx)
        {
            return true;  
        }
    }
    return false;
}

bool BlockDeTreasure::run()
{

    switch(mState) {
        case INIT_INTO_BLOCK_DE_TREASURE:
            //printf("INIT_INTO_BLOCK_DE_TREASURE");
            init(IntoBlockDeTreasurepara);
            mState = INTO_BLOCK_DE_TREASURE;
            break;
        case INTO_BLOCK_DE_TREASURE:
            //printf("INTO_BLOCK_DE_TREASURE");
            IntoBlockDeTreasure();
            break;
        case INIT_MOVE_TO_BLOCK:
            init(MoveToBlockpara);
            mState = MOVE_TO_BLOCK;
            break;

        case MOVE_TO_BLOCK:
            MoveToBlock();
            break;

        case INIT_MOVE_TO_BLOCK_2:
            init(MoveToBlockpara2);
            mState = MOVE_TO_BLOCK_2;
            break;

        case MOVE_TO_BLOCK_2:
            MoveToBlock2();
            break;

        case INIT_MOVE_TO_BLOCK_3:
            init(MoveToBlockpara3);
            mState = MOVE_TO_BLOCK_3;
            break;

        case MOVE_TO_BLOCK_3:
            //printf("MOVE_TO_BLOCK_3");
            MoveToBlock3();
            break;
        
        case INIT_JUDGEING_COLOR:
            init(JudgeingColorpara);
            mState = JUDGEING_COLOR;
            break;
        case JUDGEING_COLOR:
            JudgeingColor();
            break;
        case INIT_GETOUT_BLOCK:
            init(GetoutBlockpara);
            BlockCount++;
            mState = GETOUT_BLOCK;
            break;
        case GETOUT_BLOCK:
            GetoutBlock();
            break;
        case INIT_GETOUT_BLOCK_LEFT:
            init(GetoutBlockLeftpara);
            BlockCount++;
            mState = GETOUT_BLOCK_LEFT;
            break;
        case GETOUT_BLOCK_LEFT:
            GetoutBlockLeft();
            break;
        case INIT_GETTING_BLOCK:
            init(GettingBlockpara);
            BlockCount++;
            mState = GETTING_BLOCK;
            break;
        case GETTING_BLOCK:
            GettingBlock();
            break;
        case INIT_GETTING_BLOCK_LEFT:
            init(GettingBlockleftpara);
            BlockCount++;
            mState = GETTING_BLOCK_LEFT;
            break;
        case GETTING_BLOCK_LEFT:
            GettingBlockLeft();
            break;
        case INIT_MOVE_TO_GOAL:
            init(MoveToGoalpara);
            mState = MOVE_TO_GOAL;
            break;
        case MOVE_TO_GOAL:
            printf("MOVE_TO_GOAL OK");
            MoveToGoal();
            break;
        case END:
            
            break;
        default:
            msg_log("BlockDeTreasure error!!");
        
    }
    return false;
}


bool BlockDeTreasure::IntoBlockDeTreasure()
{
   if(SectionManager::run()){
        mState = INIT_MOVE_TO_BLOCK;
   }
}


bool BlockDeTreasure::MoveToBlock()
{
    if(NotJudgeBlockFlag == 1)
    {
        if(SectionManager::run()){
           SelectGetout();
        }
    }
    else
    {
        if(SectionManager::run()){
            mState = INIT_JUDGEING_COLOR;
        }
    }
}

bool BlockDeTreasure::MoveToBlock2()
{
    if(NotJudgeBlockFlag == 1)
    {
        if(SectionManager::run()){
            SelectGetout();
        }
    }
    else
    {
        if(SectionManager::run()){
            mState = INIT_JUDGEING_COLOR;
        }
    }
}

bool BlockDeTreasure::MoveToBlock3()
{
   if(NotJudgeBlockFlag == 1)
    {
        if(SectionManager::run()){
            SelectGetout();
        }
    }
    else
    {
        if(SectionManager::run()){
            mState = INIT_JUDGEING_COLOR;
        }
    }
}

bool BlockDeTreasure::JudgeingColor()
{
    if(runBlock()){

        if(WinnerColor == 1)
        {
            //mState = INIT_GETTING_BLOCK;

            NotJudgeBlockFlag = 1;

            SelectGetting();
        }
        else
        {
           SelectGetout();
        }

    }
}

bool BlockDeTreasure::GetoutBlock()
{

    if(BlockCount == 1)
    {
        if(SectionManager::run()){
            mState = INIT_MOVE_TO_BLOCK_2;
        }
    }

    if(BlockCount == 2)
    {
        if(SectionManager::run()){
            mState = INIT_MOVE_TO_BLOCK_3;
        }
    }

    if(BlockCount == 3)
    {
        if(SectionManager::run()){
            mState = INIT_MOVE_TO_GOAL;
        }
    }
}

bool BlockDeTreasure::GetoutBlockLeft()
{

    if(BlockCount == 1)
    {
        if(SectionManager::run()){
            mState = INIT_MOVE_TO_BLOCK_2;
        }
    }

    if(BlockCount == 2)
    {
        if(SectionManager::run()){
            mState = INIT_MOVE_TO_BLOCK_3;
        }
    }

    if(BlockCount == 3)
    {
        if(SectionManager::run()){
            mState = INIT_MOVE_TO_GOAL;
        }
    }
}



bool BlockDeTreasure::GettingBlock()
{
   if(BlockCount == 1)
    {
        if(SectionManager::run()){
            mState = INIT_MOVE_TO_BLOCK_2;
        }
    }

    if(BlockCount == 2)
    {
        if(SectionManager::run()){
            mState = INIT_MOVE_TO_BLOCK_3;
        }
    }

    if(BlockCount == 3)
    {
        if(SectionManager::run()){
            mState = INIT_MOVE_TO_GOAL;
        }
    }
}

bool BlockDeTreasure::GettingBlockLeft()
{
   if(BlockCount == 1)
    {
        if(SectionManager::run()){
            mState = INIT_MOVE_TO_BLOCK_2;
        }
    }

    if(BlockCount == 2)
    {
        if(SectionManager::run()){
            mState = INIT_MOVE_TO_BLOCK_3;
        }
    }

    if(BlockCount == 3)
    {
        if(SectionManager::run()){
            mState = INIT_MOVE_TO_GOAL;
        }
    }
}


bool BlockDeTreasure::MoveToGoal()
{
    if(SectionManager::run()){
        mState = END;
    }
}

#if PATARN == 1
void BlockDeTreasure::SelectGetout()
{
    if(BlockCount == 0)
    {
        mState = INIT_GETOUT_BLOCK;
    }

    if(BlockCount == 1)
    {
        mState = INIT_GETOUT_BLOCK_LEFT;
    }

    if(BlockCount == 2)
    {
        mState = INIT_GETOUT_BLOCK;
    }

}
#endif

#if PATARN == 2
void BlockDeTreasure::SelectGetout()
{

    if(BlockCount == 0)
    {
        mState = INIT_GETOUT_BLOCK;
    }

    if(BlockCount == 1)
    {
        mState = INIT_GETOUT_BLOCK;
    }

    if(BlockCount == 2)
    {
        mState = INIT_GETOUT_BLOCK_LEFT;
    }

}
#endif

#if PATARN == 3
void BlockDeTreasure::SelectGetout()
{
    if(BlockCount == 0)
    {
        mState = INIT_GETOUT_BLOCK;
    }

    if(BlockCount == 1)
    {
        mState = INIT_GETOUT_BLOCK_LEFT;
    }

    if(BlockCount == 2)
    {
        mState = INIT_GETOUT_BLOCK;
    }

}
#endif

#if PATARN == 4
void BlockDeTreasure::SelectGetout()
{
    if(BlockCount == 0)
    {
        mState = INIT_GETOUT_BLOCK_LEFT;
    }

    if(BlockCount == 1)
    {
        mState = INIT_GETOUT_BLOCK;
    }

    if(BlockCount == 2)
    {
        mState = INIT_GETOUT_BLOCK_LEFT;
    }

}
#endif

#if PATARN == 5
void BlockDeTreasure::SelectGetout()
{
    if(BlockCount == 0)
    {
        mState = INIT_GETOUT_BLOCK;
    }

    if(BlockCount == 1)
    {
        mState = INIT_GETOUT_BLOCK_LEFT;
    }

    if(BlockCount == 2)
    {
        mState = INIT_GETOUT_BLOCK;
    }

}
#endif

#if PATARN == 1
void BlockDeTreasure::SelectGetting()
{
    if(BlockCount == 0)
    {
        mState = INIT_GETTING_BLOCK;
    }

    if(BlockCount == 1)
    {
        mState = INIT_GETTING_BLOCK_LEFT;
    }

    if(BlockCount == 2)
    {
        mState = INIT_GETTING_BLOCK;
    }
}
#endif

#if PATARN == 2
void BlockDeTreasure::SelectGetting()
{
    if(BlockCount == 0)
    {
        mState = INIT_GETTING_BLOCK;
    }

    if(BlockCount == 1)
    {
        mState = INIT_GETTING_BLOCK;
    }

    if(BlockCount == 2)
    {
        mState = INIT_GETTING_BLOCK_LEFT;
    }
}
#endif

#if PATARN == 3
void BlockDeTreasure::SelectGetting()
{
    if(BlockCount == 0)
    {
        mState = INIT_GETTING_BLOCK;
    }

    if(BlockCount == 1)
    {
        mState = INIT_GETTING_BLOCK_LEFT;
    }

    if(BlockCount == 2)
    {
        mState = INIT_GETTING_BLOCK;
    }
}
#endif

#if PATARN == 4
void BlockDeTreasure::SelectGetting()
{
    if(BlockCount == 0)
    {
        mState = INIT_GETTING_BLOCK_LEFT;
    }

    if(BlockCount == 1)
    {
        mState = INIT_GETTING_BLOCK;
    }

    if(BlockCount == 2)
    {
        mState = INIT_GETTING_BLOCK_LEFT;
    }
}
#endif

#if PATARN == 5
void BlockDeTreasure::SelectGetting()
{
    if(BlockCount == 0)
    {
        mState = INIT_GETTING_BLOCK;
    }

    if(BlockCount == 1)
    {
        mState = INIT_GETTING_BLOCK_LEFT;
    }

    if(BlockCount == 2)
    {
        mState = INIT_GETTING_BLOCK;
    }
}
#endif
