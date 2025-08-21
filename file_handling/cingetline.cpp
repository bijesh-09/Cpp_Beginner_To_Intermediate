#include<iostream>
#include<fstream>

int main(){
    char ch[50];
    std::ofstream myfile("eg1.txt", std::ios::trunc);
    std::cout<<"Enter a line:"<<std::endl;
    std::cin.getline(ch,50);
    myfile<<ch;
    myfile.close();
    return 0;
}