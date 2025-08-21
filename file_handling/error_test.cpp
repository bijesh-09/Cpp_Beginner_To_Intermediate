#include<iostream>
#include<fstream>

int main(){
    std::string data;
    std::fstream file("eg.txt");
    file >> data;
    // if (file.bad() || file.fail()){
    //     std::cout<<file.bad()<<std::endl;
    //     std::cout<<file.fail()<<std::endl;
    //     std::cout<<file.eof()<<std::endl;
    // }
    // else{
    // }
    std::cout<<file.good()<<std::endl;
    std::cout<<file.bad()<<std::endl;
    std::cout<<file.fail()<<std::endl;
    std::cout<<file.eof()<<std::endl;
    std::cout<<"Data: "<<data<<std::endl;
    file.close();
    return 0;
}