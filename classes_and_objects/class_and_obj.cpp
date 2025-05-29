#include<iostream>

class Number{
    int a ,b,c;
    public:
        int d,e;
        void setData(int , int , int );
        void getData();
    }obj;
    void Number :: setData(int a, int b, int c){
        this->a = a; //this->a is like obj.a , this op refers to the current obj that is using this class
        this->b = b;
        this->c = c;
        
    }
    void Number :: getData(){
        std::cout << "a = " << a << std::endl;
        std::cout << "b = " << b << std::endl;
        std::cout << "c = " << c << std::endl;
        std::cout << "d = " << d << std::endl;
        std::cout << "e = " << e << std::endl;
    }   

int main(){
    obj.d = 12;
    obj.e = 22;
    obj.setData(1,2,3);
    obj.getData();
    return 0;
}