#include<iostream>
#define PI 3.14

using namespace std;

float vol(float r, int h){
    return PI * r* r*h;
}
int vol(int l , int b, int h){
    return l*b*h;
}
char vol(char a, char b){
    return 'c';
}

int main(){
    cout << vol(1.5,10)<<endl;
    cout << vol(2,3,4);
    cout << vol('a','b');
    return 0;
}