#include<iostream>
#include<fstream>
using namespace std;
char ch[100];
int main(){
    ifstream file("eg.txt");
    ofstream myfile("eg_copy1.txt");
    while (file.read(ch,20))
    {
        myfile.write(ch,20);
    }
    file.close();
    myfile.close();
    
    return 0;
}