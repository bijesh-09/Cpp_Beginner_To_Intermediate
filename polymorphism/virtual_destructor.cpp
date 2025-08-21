#include<iostream>

class base{
    public:
        base(){
            std::cout<<"Base() constructed "<<std::endl;
        }
        virtual ~base(){
            std::cout<<"Base destructed "<<std::endl;

        }
    };
    
class derived : public base{
    public:
        derived(){
            std::cout<<"derived() constructed "<<std::endl;
        }
        ~derived(){
            std::cout<<"derived destructed "<<std::endl;
    
        }
};

int main(){
    derived *d = new derived();
    base *b = d;
    delete b;
    return 0;
}