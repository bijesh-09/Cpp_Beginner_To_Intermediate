#include <iostream>

class Base1{
    protected:
        int base1Int;
    public:
        void setBase1(int a){
            base1Int = a;
        }
};

class Base2{
    protected:
        int base2Int;
    public:
        void setBase2(int a){
            base2Int = a;
        }
};

class Derived : public Base1, public Base2{
    public:
        void show(){
            std::cout << "Base1 int = " << base1Int << std::endl;
            std::cout << "Base2 int = " << base2Int << std::endl;
            std::cout << "Derived int = " << base1Int + base2Int << std::endl;
        }
};

int main(){
    Derived d;
    d.setBase1(1);
    d.setBase2(2);
    d.show();
    return 0;
}