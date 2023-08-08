#ifndef _SECTION_MANAGER_H_
#define _SECTION_MANAGER_H_

#include "Section.h"

class SectionManager {
    public:
        SectionManager();
        ~SectionManager();
        virtual bool run();
        void addSection(Section *);
        void reset();

        typedef struct SecParam_
        {
            Section::WALKER_NO walker_no;
            double walk[10];

            Section::JUDGE_NO judge_no;
            double judge[10];
            
            Section::JUDGE_NO judge_no_bad;
            double judge_bad[10];

        
         }SecParam;

        void init(SecParam spara[]);

        

    protected:
        Section *mSection[100];
        int mSectionIdx;
        int mLastIdx;

            
        
    private:


};

#endif
