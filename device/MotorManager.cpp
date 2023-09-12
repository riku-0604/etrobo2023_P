#include "MotorManager.h"
#include "Walker.h"

extern Motor *gLeftWheel;
extern Motor *gRightWheel;

MotorManager::MotorManager(Motor *left, Motor *right):
    mLeftMotor(left),
    mRightMotor(right)
{
}
void MotorManager::setPwm(int left,int right)
{

    /*if(left !=0 && right !=0)
    {
        mNowLeftMotorCount = mLeftMotor->getCount();
        mNowRightMotorCount = mRightMotor->getCount();

        if(mInitLeftMotorCount == mNowLeftMotorCount)
        {
            if(mLeftMotorCount >= 400)
            {
                if(mNowLeftMotorCount >= 0)
                {
                    if(Set90Count > 0)
                    {
                        mLeftMotor->setPWM(90);
                        Set90Count--;
                    }
                }
                else
                {
                    if(Set90Count > 0)
                    {
                        mLeftMotor->setPWM(-90);
                        Set90Count--;
                    }
                }
            }
            else
            {
                mLeftMotorCount++;
            }
        }
        else
        {
            mInitLeftMotorCount = mNowLeftMotorCount;
            mLeftMotorCount = 0.0;
        }
    
        if(mInitRightMotorCount == mNowRightMotorCount)
        {
            if(mRightMotorCount >= 400)
            {
                if(mNowRightMotorCount >= 0)
                {
                    if(Set90Count > 0)
                    {
                        mRightMotor->setPWM(90);
                        Set90Count--;
                    }
                }
                else
                {
                    if(Set90Count > 0)
                    {
                        mRightMotor->setPWM(-90);
                        Set90Count--;
                    }
                }
            }
            else
            {
                mRightMotorCount++;
            }
        }
        else
        {
            mInitRightMotorCount = mNowRightMotorCount;
            mRightMotorCount = 0.0;
        }

        /*mLeftMotorCount++;
        mInitRightMotorPower++;
    }   */
    

        
        mLeftMotor->setPWM(left);
        mRightMotor->setPWM(right);
    

}

void MotorManager::init()
{
    mLeftMotorCount = 0.0;
    mRightMotorCount = 0.0;

    mInitLeftMotorCount = mLeftMotor->getCount();
    mInitRightMotorCount = mRightMotor->getCount();

}