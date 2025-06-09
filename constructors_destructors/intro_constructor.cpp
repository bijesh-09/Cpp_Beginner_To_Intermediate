#include<iostream>

class Complex{
    int a,b;
    public:
        //creating a constructor
        Complex();//if constructor doesnt take args then it is called default constructor
        void display(){
            std::cout<<a<<" + "<<b<<"i"<<std::endl;
        }
};
Complex :: Complex(){ //constructors dont have return types not even void
    a=0;b=0;
    std::cout<<"Hello World"<<std::endl;
}

int main(){
    Complex c1,c2,c3;//constructors are auto called whenever objects are created
    c1.display();
    c2.display();
    c3.display();
    return 0;
}
/*output:
Hello World --> these printed first cause it was defined inside constructor &construcotrs were initialized first
Hello World
Hello World
0 + 0i
0 + 0i
0 + 0i
*/