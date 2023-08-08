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

        SecParam spara [100] = {
            {Section::TRACER,{75, -0.25,  28, 10, 9.8,0,0,LineTracer::RIGHTEDGE},Section::LENGTH,{257},Section::NONE,{}},
            {Section::TRACER,{38, -0.25,  29, 10, 8.45,9,0,LineTracer::RIGHTEDGE},Section::LENGTH,{295},Section::NONE,{}},
            {Section::TRACER,{75, -0.25,  28, 10, 9.8,0,0,LineTracer::RIGHTEDGE},Section::LENGTH,{446},Section::NONE,{}},
            {Section::TRACER,{38, -0.25,  29, 10, 8.45,9,0,LineTracer::RIGHTEDGE},Section::LENGTH,{489},Section::NONE,{}},
            {Section::TRACER,{70, -0.25,  28, 10, 9.8,0,0,LineTracer::RIGHTEDGE},Section::LENGTH,{495},Section::NONE,{}},
            {Section::TRACER,{38, -0.25,  29, 10, 8.45,0,0,LineTracer::RIGHTEDGE},Section::LENGTH,{630},Section::NONE,{}},
           // {Section::TRACER,{28, -0.25,  30, 10, 6.2525,0,0,LineTracer::RIGHTEDGE},Section::LENGTH,{927},Section::NONE,{}},
           // {Section::TRACER,{28, -0.25,  0, 0, 0,9.5,0,LineTracer::LEFTEDGE},Section::LENGTH,{539},Section::NONE,{}},
            //{Section::TRACER,{28, -0.25,  30, 70, 6.2525,0,0,LineTracer::LEFTEDGE},Section::LENGTH,{678},Section::NONE,{}},
            //{Section::TRACER,{28, -0.25,  30, 70, 6.2525,0,0,LineTracer::RIGHTEDGE},Section::LENGTH,{922},Section::NONE,{}},
        //{Section::TRACER,{30, -0.25,  0, 0, 0,8,0,LineTracer::LEFTEDGE},Section::LENGTH,{930},Section::NONE,{}},
            //{Section::TRACER,{30, -0.25,  30, 10, 6.2525,0,0,LineTracer::LEFTEDGE},Section::LENGTH,{1090},Section::NONE,{}},
            //{Section::TRACER,{30, -0.25,  30, 10, 6.2525,0,0,LineTracer::RIGHTEDGE},Section::LENGTH,{1130},Section::NONE,{}},
            //{Section::TRACER,{0, 0,  0, 0, 0,0,0,LineTracer::LEFTEDGE},Section::LENGTH,{2000},Section::NONE,{}},//スピード0になる
            //{Section::WALKER,{5, 0},Section::LENGTH,{55},Section::NONE,{}},
            //{Section::TRACER,{50, -0.25,  30, 70, 6.2525,0,0,LineTracer::LEFTEDGE},Section::LENGTH,{70},Section::NONE,{}},
            //{Section::WALKER,{10, -10},Section::LENGTH,{90},Section::NONE,{}},
            {Section::END,{},Section::ENDJ,{}},
        };
        /*{
            {LineTracer,},{},{},{},{}}
            */
    private:


};

#endif
