#include<iostream>

using namespace std;

float currentMoney(int money,float factor = 1.04){ //default args always on the extreme right while compulsory args in left
    return money * factor;
}
// int fn(const int n) //const args doesnt change values while being on operations inside the fns.
                    //    but const values may change in case of call by value or reference 
                    // i.e. const args in fns are changeable from caller's pov
// {

// }
int main(){
    int money = 100000;
    cout << "on default arg: " << currentMoney(money)<<endl;
    cout << "on explicitly provided arg: " << currentMoney(money,1.1);
    return 0;
}