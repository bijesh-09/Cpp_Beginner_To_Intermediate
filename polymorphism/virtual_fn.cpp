#include<iostream>

class animal{
    public:
        virtual void display(){
            std::cout<<"Animal class"<<std::endl;
        }
};
class cow : public animal{
    public:
        void display(){
            std::cout<<"Cow class"<<std::endl;
        }
};
class dog : public animal{
    public:
        void display(){
            std::cout<<"Dog class"<<std::endl;
        }
};
int main(){
    animal *pa;
    animal a;
    cow c;
    dog d;
    pa = &a;
    pa->display();
    pa = &c;
    pa->display();
    pa = &d;
    pa->display();
    return 0;
}