#include<iostream>
#include<fstream>

int main(){
    char ch[] = {'y','o','b','o','y'};
    std::ifstream file("eg.txt",std::ios::app);
    std::ofstream myfile("eg.txt",std::ios::app);
    myfile.write(ch,5);
    file.read(ch,4);
    for (int i = 0; i < 4; i++)
    {
        /* code */
        std::cout<<ch[i];
    }
    std::cout<<std::endl;
    int pos1= file.tellg();
    int pos2= myfile.tellp();
    std::cout<<"pos1 = "<<pos1<<std::endl<<"pos2 = "<<pos2<<std::endl;
    return 0;

}