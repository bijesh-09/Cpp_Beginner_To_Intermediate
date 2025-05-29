#include <iostream>

using namespace std;

namespace first
{
    int var1 = 2;
    namespace second
    {
        double var2 = 3.14;
        void display(){
            cout << "Hello world" << endl;
        }
    }
}



int main()
{
    cout << first::var1 << endl;
    cout << first::second::var2<< endl;
    first::second::display();
    return 0;
}