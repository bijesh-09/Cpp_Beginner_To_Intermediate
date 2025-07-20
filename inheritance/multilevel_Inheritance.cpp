#include <iostream>

// Inheritance path: student---->Exam---->Result

class student {
    protected:
        int rollNumber;
    public:
        student(int r){

            std::cout << "parameterized student() called" << std::endl;
            rollNumber = r;
        }
        void getRoll(){
            std::cout << "Roll Number = " << rollNumber << std::endl;
        }

};

class Exam : public student{
    protected:
        float maths;
        float physics;
    public:
        Exam(int examRoll) : student(examRoll){
            std::cout << "parameterized Exam() called" << std::endl;
            // rollNumber = 20; rollNumber set by student() will be overwritten
        }
        void setMarks(float m1, float m2){
            maths = m1;
            physics = m2;
        }
        void getMarks(){
            std::cout << "Maths marks = " << maths<< std::endl;
            std::cout << "Physics marks = " << physics << std::endl;

        }
};

class Result : public Exam{
    protected:
        float percentage;
    public:
        Result(int resultRoll):Exam(resultRoll){
            std::cout << "parameterized Result() called" << std::endl;
            // rollNumber = 30; rollNumber set by Exam() will be overwritten

        }
        void displayResult(){
            percentage = (maths + physics)/2;
            getRoll();
            getMarks();
            std::cout << "Result = " << percentage << "%" << std::endl;
        }
};

int main(){
    Result r(1);
    r.setMarks(99.8f, 98.5F); //cuz point values are by default double type in cpp
    r.displayResult();
    return 0;
}