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
            {Section::TRACER,{28, -0.25,  30, 70, 6.2525,0,0,LineTracer::LEFTEDGE},Section::LENGTH,{30},Section::NONE,{}},
            {Section::TRACER,{28, -0.25,  30, 70, 6.2525,0,0,LineTracer::LEFTEDGE},Section::COLOR,{29},Section::NONE,{}},
            
            {Section::TRACER,{0, 0, 0, 0, 0,0,0,LineTracer::LEFTEDGE},Section::LENGTH,{500},Section::NONE,{}},//Ž~‚Ü‚é

            {Section::END,{},Section::ENDJ,{}},
        };
        /*{
            {LineTracer,},{},{},{},{}}
            */
    private:


};

#endif
