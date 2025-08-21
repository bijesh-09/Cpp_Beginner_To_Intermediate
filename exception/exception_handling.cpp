#include<iostream>
#include<stdexcept> //used for classes like std::invalid_argument, std::out_of_range, etc

int main(){
    int a ;
    std::cout<<"Enter a number:"<<std::endl;
    std::cin>>a;
    try
    {
        if (a<0)
        {
            throw std::out_of_range("Enter something greater than or equal to 0");
        }
        else{
            std::cout<<"a = "<<a<<std::endl;
        }
        
    }
    catch(const std::out_of_range& e)
    {
        std::cout << e.what() << '\n';
    }
    return 0;   
}