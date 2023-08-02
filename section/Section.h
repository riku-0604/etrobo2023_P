#ifndef _SECTION_H_
#define _SECTION_H_

#include "LineTracer.h"
#include "SimpleWalker.h"

#include "Walker.h"
#include "judge.h"


class Section {
    public:
        Section();
        ~Section();
        virtual bool run();
        Walker *selectWalker(int no);
        Judge *selectJudge(int no);

        enum WALKER_NO {
            WALKER,
            TRACER,
            END
        };

        enum JUDGE_NO{
            LENGTH,
            TIME,
            ENDJ,
            NONE
        };

    protected:
        Walker *mWalker;
        Judge *mJudge;

    private:

};

#endif
