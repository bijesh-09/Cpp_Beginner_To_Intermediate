#include<iostream>

int main(){
    int n;
    std::cout << "Enter a number:"<< std::endl;
    std::cin >> n;
    std::string s;
    s = (n%2==0)?"Even":"Odd" ;
    std::cout<<"The number is "<<s<<std::endl;
    return 0;
}