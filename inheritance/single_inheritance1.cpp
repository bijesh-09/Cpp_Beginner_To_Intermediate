#include <iostream>

class Base{
    int data1;
    public:
        int data2;
        void setData();
        int getData1();
        int getData2();
};

void Base::setData(){
    data1 = 10;
    data2 = 20;
}

int Base ::getData1(){
    return data1;
}

int Base ::getData2(){
    return data2;  
}

//Derived class
class Derived : public Base{
    int data3;
    public:
        void process();
        void display();
};
 
void Derived::process(){
    data3 = data2 * getData1();
}
void Derived::display(){
    std::cout<<"Value of data1 = "<<getData1()<<std::endl;
    std::cout<<"Value of data2 = "<<data2<<std::endl;
    std::cout<<"Value of data3 = "<<data3<<std::endl;
}

int main()
{
    Derived der;
    der.setData(); // to initialize the value of data1 and data2
    der.process(); //the process member fn accesses data2 and data3 directly but to access data1, inherited getData1 fn is used
    der.display();// same as void process member fn
    return 0;
}