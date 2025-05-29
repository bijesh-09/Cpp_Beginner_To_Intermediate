#include<iostream>

class Complex{
    int a,b;
    public:
        void setData(int p,int q){
            a = p;
            b = q;
        }
        void setDataBySum(Complex o1,Complex o2);
        void displayComplex(){
            std::cout<<"COmplex number is:"<<a<<" + "<<b<<"i"<<std::endl;
        }
};
void Complex::setDataBySum(Complex o1,Complex o2){
            a = o1.a + o2.a; //sum of real part of complex numbers
            b = o1.b + o2.b; //sum of img part of complex numbers
        }
    
int main(){
    Complex c1,c2,c3;
    c1.setData(1,2);
    c1.displayComplex();
    
    c2.setData(3,4);
    c2.displayComplex();

    c3.setDataBySum(c1,c2);
    c3.displayComplex();

    return 0;
}