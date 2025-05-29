#include<iostream>

class Employee{
    static int count; //static var declaration
    int id;
    public:
        void setData(){
            std::cout << "Enter ID:"<<std::endl;
            std::cin>>id;
            count++;
        }
        void getData(){

            std::cout << "Employee no.:"<<count<<std::endl;
            std::cout << "Entered ID:"<<id<<std::endl;
        }
        static void getCount(){
            std::cout<<"Count value is:"<<count<<std::endl;
        }
};
int Employee :: count; //static var defined and memory is actually allocated here for it
int main(){
    Employee ram,sam;
    ram.setData();
    ram.getData();
    Employee::getCount();
    
    sam.setData();
    sam.getData();
    Employee::getCount();
    return 0;
}