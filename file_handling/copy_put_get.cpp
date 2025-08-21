#include<iostream>
#include<fstream>
using namespace std;
char ch;
int main(){
    ifstream file("eg.txt");
    ofstream myfile("eg_copy.txt");
    while (file.get(ch))
    {
        myfile.put(ch);
    }
    file.close();
    myfile.close();
    
    return 0;
}