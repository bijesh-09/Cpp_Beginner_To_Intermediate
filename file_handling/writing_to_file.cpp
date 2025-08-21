#include<iostream>
#include<fstream>

int main(){
    std::ofstream myfile("eg.txt"); //ofstream is a class of std namespace
    /*
    line 5 is same as
    std::ofstream myfile; 
    myfile.open("eg.txt");
    
    
    can also use:
    std::fstream myfile; 
    myfile.open("eg.txt");

    note: ifstream has only ">>" operator while ofstream has only "<<" operator
    */
    myfile<<"testa line1.\n";
    myfile<<"test line2.";
    std::cout<<"File Written"<<std::endl;
    myfile.close();
    return 0;
}