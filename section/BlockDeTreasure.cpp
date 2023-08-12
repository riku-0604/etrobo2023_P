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

    

    /*Section *sc = new Section();
    
    Judge* selectjudge = (Judge*)sc->selectJudge(Section::LENGTH);
    double para[]={50};
    selectjudge->setpara(para);


    // LineTracer ??ƒX??
    LineTracer* tracer = (LineTracer*)sc->selectWalker(Section::TRACER);
    double para2[]={28, -0.25,  30, 70, 6.2525,0,0,_EDGE};
    tracer->setpara(para2);
    addSection(sc);
    
    Section *sc1 = new Section();
    
    // SimpleWalker??ƒX??
    SimpleWalker* walker = (SimpleWalker*)sc1->selectWalker(Section::WALKER);
    double para3[] = {0,0};
    walker->setpara(para3);

    Judge* selectjudge1 = (Judge*)sc1->selectJudge(Section::LENGTH);
    double para1[]={100};

    selectjudge1->setpara(para1);

    
    addSection(sc1);*/
   // printf("roopOK");

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
            init(MoveToBlockpara);
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
            mState = INIT_GETOUT_BLOCK;
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
            mState = INIT_GETOUT_BLOCK;
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
            mState = INIT_GETOUT_BLOCK;
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
            mState = INIT_GETTING_BLOCK;

            NotJudgeBlockFlag = 1;
        }
        else
        {
            if(BlockCount == 0)
            {
                mState = INIT_GETOUT_BLOCK;
            }

            if(BlockCount == 1)
            {
                mState = INIT_GETOUT_BLOCK_LEFT;
            }
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


bool BlockDeTreasure::MoveToGoal()
{
    if(SectionManager::run()){
        mState = END;
    }
}
