#include<iostream>
#include<fstream>
#include<string>
int main(){
    std::string line;
    std::ifstream myfile("eg.txt");
    if (myfile.is_open() )
    {
        std::cout << "File opened successfully!" << std::endl;

        while (std::getline(myfile,line) )
        {
            std::cout<<line<<std::endl;
        }
        
        myfile.close();
    }
    else{
        std::cout<<"Unable to open the file!" <<std::endl;

    }
    return 0;
}