#include<iostream>
#include<fstream>

int main(){
    // std::streampos begin , end;
    // std::ifstream file("eg.txt");
    // begin = file.tellg();
    // file.seekg(0,std::ios::end);
    // end = file.tellg();
    // std::cout<<"Size of file = "<<end-begin;
    
    // int begin , end;
    // std::ofstream file("eg.txt",std::ios::app);
    // begin = file.tellp();
    // file.seekp(0,std::ios::end);
    // end = file.tellp();
    // std::cout<<"Size of file = "<<end-begin;
    
    std::ifstream file("eg.txt");
    int x = file.tellg();
    std::cout<<x<<std::endl;

    file.seekg(4,std::ios::beg);
    x = file.tellg();
    std::cout<<x<<std::endl;

    file.seekg(-7,std::ios::end);
    x = file.tellg();
    std::cout<<x<<std::endl;

    file.seekg(4,std::ios::cur);
    x = file.tellg();
    std::cout<<x<<std::endl;

    file.seekg(50);
    x = file.tellg();
    std::cout<<x<<std::endl;

    char ch[4];
    file.read(ch,4);
    for (int i = 0; i < 4; i++)
    {
        std::cout<<ch[i];
    }
    x = file.tellg();
    std::cout<<"\n"<< x<<std::endl;

    return 0;
}