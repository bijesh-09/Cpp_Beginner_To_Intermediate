#include<iostream>
#include<stdexcept> //used for classes like std::invalid_argument, std::out_of_range, etc

int main(){
    int a[10];
    int count = 0;
    std::cout<<"Enter a list of numbers"<<std::endl;
    try{

        for (int  i = 0; i < 15; i++)
        {
            std::cin>>a[i];
            count++;
            
            if (count > 10)
            {
                throw std::out_of_range("numbers are more than 10");
            }
            else if(a[i] < 0){
                throw std::string("one of the mumbers entered is negative");
            }
            else{
                std::cout<<a[i]<<std::endl;
            }
        }
    }
    catch(const std::out_of_range& r){
        std::cout<<r.what()<<std::endl;
    }
    catch(const std::string& r){
        std::cout<<r<<std::endl;
    }
    
    return 0;
}