#include <iostream>

class Base1{
    public:
        void greet(){
            std::cout << "hi world"<< std::endl;
        }
};

class Base2{
    public:
            void greet(){
            std::cout << "hello world"<< std::endl;
        }
};

class Derived: public Base1, public Base2{
    public:
        void display(){
            Base2::greet(); //ambiguity resolution cuz both base classes have same fns
        }
};

class B{
    public:
        void greet(){
            std::cout << "hiiii world"<< std::endl;
        }
};
class D: public B{
    public:
        // void greet(){
        //     std::cout << "hello world"<< std::endl; //overwrites the base class fn
        // }
};


int main(){
    Derived der;
    der.display();
    der.Base1::greet();
    D d;
    d.greet();
    return 0;
}