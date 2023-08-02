#ifndef JUDGE_H
#define JUDGE_H

#include "Length.h"


class Judge
{
    public:
        Judge();
        virtual bool judgement();
        virtual void setpara(double para[]);
        virtual void init();

    protected:
        virtual bool calcjudge()=0;
        Length *mLength;
    enum State {
        INIT,
        JUDGEMENT,
        END
    };

    private:

};

#endif