#include <iostream>

int count =0;//global variable

class num{
    public:
        num(){
            count ++;
            std::cout<<"This the time when constructor is called for object number: "
                <<count <<std::endl;
        }
        //Destructor neither takes any args nor returns any value
        ~num(){ //destructor is declared using "~" before the class_name

            std::cout<<"This the time when destructor is called for object number: "
                <<count <<std::endl;
                count--;
        }
};
int main(){
    std::cout<<"Inside the main function"<<std::endl;
    std::cout<<"Creating object n1"<<std::endl;
    num n1;
    std::cout<<"Creating a block "<<std::endl;
    {
        std::cout<<"Inside the block "<<std::endl;
        std::cout<<"Creating 2 more objects n2 and n3  "<<std::endl;
        num n2,n3;
        std::cout<<"Exiting the block "<<std::endl;

    }
    //destruction happens in a LIFO (Last In First Out) manner
    //here n3 is 1st destroyed then n2 cuz n3 was created last and n2 was created first
    //destructors are automatically called when objects go out of scope.
    std::cout<<"Exiting the main function "<<std::endl;
    
    return 0;
}