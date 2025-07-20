//this program showcases how private member of base class can be accessed in derived class
#include <iostream>
class Employee{
    private:
        int id;  // Made id private
    public:
        Employee(int Id){
            std::cout<<"parameterized Employee constructor executed!"<<std::endl;
            id = Id;
        }
        Employee(){
            std::cout<<"default Employee constructor executed!"<<std::endl;
            id =1;
        }
        ~Employee(){
            std::cout<<"Employee destructor executed!"<<std::endl;

        }
        
        // Public getter method to access private id
        int getId() {
            return id;
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
class Programmer : Employee{  // Private inheritance (default), i.e. bydefault private visibility mode
    /*
    INHERITANCE ACCESS RULES:
    1. This is private inheritance because no access specifier is given
    2. In private inheritance:
        - public members of Employee become private in Programmer
        - private members of Employee remain inaccessible
    3. Effect:
        - Outside world cannot access Employee's members through Programmer object
        - Only Programmer's member functions can access inherited members
    */
    public:
        int languageCode = 9;  // Programmer's own public member

        Programmer(int inpId) : Employee(inpId) {  
            /* CONSTRUCTOR INITIALIZATION:
            1. Programmer constructor is CALLED
            2. BEFORE Programmer's body executes, Employee constructor runs
            3. Employee(inpId) runs first - sets up base class
            4. Then this constructor body runs
            5. Order matters! Base class must be constructed before derived
            */
            std::cout<<"parameterized programmer constructor executed!"<<std::endl;
        }
        ~Programmer(){
            std::cout<<"Programmer destructor executed!"<<std::endl;

        }
        void getData(){
            std::cout<<getId()<<std::endl;  // Using Employee's public method to access private id
        }
};

int main(){
    // Employee e1(1),e2(2);
    // std::cout<<e1.salary<<std::endl;
    // std::cout<<e2.salary<<std::endl;
    Programmer p1(10);
    std::cout<<p1.languageCode<<std::endl;  // OK: languageCode is Programmer's public member
    // std::cout<<p1.id<<std::endl;         // ERROR: id is private due to private inheritance
    p1.getData();                           // OK: getData() is public and can access private members
    


    return 0;
}