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

    protected:
        Section *mSection[100];
        int mSectionIdx;
        int mLastIdx;

        SecParam spara [10] = {
            {Section::TRACER,{28, -0.25,  30, 70, 6.2525,0,0,LineTracer::LEFTEDGE},Section::LENGTH,{50},Section::NONE,{}},
            {Section::WALKER,{5, 0},Section::LENGTH,{55},Section::NONE,{}},
            {Section::TRACER,{50, -0.25,  30, 70, 6.2525,0,0,LineTracer::LEFTEDGE},Section::LENGTH,{70},Section::NONE,{}},
            {Section::WALKER,{10, -10},Section::LENGTH,{90},Section::NONE,{}},
            {Section::END,{},Section::ENDJ,{}},
        };
        /*{
            {LineTracer,},{},{},{},{}}
            */
    private:


};

#endif
