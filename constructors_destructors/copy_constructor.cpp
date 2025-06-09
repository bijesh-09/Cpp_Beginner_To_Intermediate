#include <iostream>

class Number{
    int a;
    public:
        Number(){
            a = 0;
        }
        Number(int num){
            a = num;
        }

        Number(Number &obj){

            std::cout << "Copy constructor called!!!"<<std::endl;
            a=obj.a;
        }
        
        void display(){
            std::cout << "Number is: "<<a<<std::endl;
        }
};

int main(){
    Number x,y,z(45),z2(z);//copy constructor invoked
    x.display();
    y.display();
    z.display();
    Number z1(z);//copy constructor invoked
    z1.display();
    // z2 = z;//copy constructor not invoked
    z2.display();
    Number z3 = z;//copy constructor invoked
    z3.display();

    return 0;
}
