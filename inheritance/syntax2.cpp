#include <iostream>
class Employee{
    public:
        int id;
        Employee(int Id){
            std::cout<<"parameterized Employee constructor executed!"<<std::endl;
            id = Id;
        }
        Employee(){
            std::cout<<"default Employee constructor executed!"<<std::endl;
            id =1;
        }
        
};
/*syntax for inheritance
class derived-class-name : visibility-mode base-class-name{
    members/methods, etc..
}
*/
/*
Default visibility mode is private
Public visibility mode: Public members of base class becomes public members of derived class
Private visibility mode: Public members of base class becomes private members of derived class
Private members of base class are never inherited to derived class
*/
//creating a derived class
class Programmer : public Employee{//by defalult the inherited members become private members of Programmer class 
    public:
        int languageCode = 9;//additonal member unique to programmer
        //version 1:
        Programmer(int inpId)  { //WITHOUT initialization list

            std::cout<<"parameterized programmer constructor executed!"<<std::endl;
            // id = inpId; //this will overwrite the value of id set by default Employee constructor, i.e. id = 1 will become id = 10
            
        }

        //version 2:
        // Programmer(int inpId) : Employee(inpId) { //WITH initialization list
        //     /* here the 'Employee(inpId)' part takes the same arg taken by programmer constructor and pass it to the formal arg in 
        //     parameterized employee constructor defn */
        //     std: :cout<<"parameterized programmer constructor executed!"<<std::endl;
        //     // id = inpId; //this line is redundant cuz the id of p1 is already set by the parameterized Employee constructor
            
        // }
        
        void getData(){
            std::cout<<id<<std::endl;
        }
};

int main(){
    // Employee e1(1),e2(2);
    // std::cout<<e1.salary<<std::endl;
    // std::cout<<e2.salary<<std::endl;
    Programmer p1(10);
    std::cout<<p1.languageCode<<std::endl;
    std::cout<<p1.id<<std::endl;//if the programmer class inherited publicly
    // p1.getData();//if the programmer class inherited privately
    


    return 0;
}