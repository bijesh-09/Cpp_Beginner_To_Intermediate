#include <iostream>

class student{
    protected:
        int rollNumber;
    public:
        void setRoll(int n){
            rollNumber = n;
        }
        void displayRoll(){
            std::cout<<"Roll = "<<rollNumber<<std::endl;
        }
};

class test: virtual public student{
    protected:
        float maths;
        float physics;
    public:
        void setMarks(float mth, float phy){
            maths = mth;
            physics = phy;
        }
        void displayMarks(){
            std::cout<<"Your marks are:"<<std::endl
                     <<"Maths = "<<maths<<std::endl
                     <<"Physics = "<<physics<<std::endl;
        }
};

class score: public virtual student{
    protected:
        float score;
    public:
         void setScore(float sc){
            score = sc;
        }
        void displayScore(){
            std::cout<<"Your PT score is:"<<score <<std::endl;
        }
};

class result: public test, public score{
    protected:
        float total;
    public:
        void displayResult(){
            total =  physics + maths + score;
            displayRoll();
            displayMarks();
            displayScore();
            std::cout<<"Total score = "<<total<<std::endl;
        }
};

int main(){
    result r;
    r.setRoll(1);
    r.setMarks(99.9, 99.8);
    r.setScore(95.7);
    r.displayResult();
    return 0;
}