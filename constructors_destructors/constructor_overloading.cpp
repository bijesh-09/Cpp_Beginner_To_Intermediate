#include<iostream>

class Complex{
    int a,b;
    public:
        Complex(){
            a = 0; b=0;
        }
        Complex(int x,int y){
            a = x; b=y;
        }
        Complex(float x,float y){
            a = x; b=y;
        }
        Complex(int x){
            a = x; b=0;
        }
        void display(){
            std::cout<<"("<<a<<","<<b<<")"<<std::endl;
        }
};

int main(){
    Complex c1;
    c1.display();

    Complex c2(1,2);
    c2.display();

    Complex c3(float(2.3),float(4.5));
    c3.display();

    Complex c4(5);
    c4.display();
    
    return 0;
}