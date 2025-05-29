#include<iostream>

class Employee{
    int id;
    public:
        void setData(){
            std::cout << "Enter ID:"<<std::endl;
            std::cin>>id;
        }
        void getData(){

            std::cout << "Entered ID:"<<id<<std::endl;
        }
        
};
int main(){
    Employee obj[3];
    for (int i = 0; i < 3; i++)
    {
        obj[i].setData();
        obj[i].getData();
    }
    
    return 0;
}