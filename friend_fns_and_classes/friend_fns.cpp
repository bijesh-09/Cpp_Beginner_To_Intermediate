#include<iostream>

class Complex{
    int a,b;
    public:
        void setData(int p,int q){
            a = p;
            b = q;
        }
        friend Complex setDataBySum(Complex,Complex); //friend fn
        void displayComplex(){
            std::cout<<"COmplex number is:"<<a<<" + "<<b<<"i"<<std::endl;
        }
};
Complex setDataBySum(Complex o1,Complex o2){ //friend fn is a foreign fn here i.e its not a member fn of Complex class
    //friend fn can just access the private or public members of its friend class
    Complex o3; 
    o3.setData(o1.a + o2.a,o1.b + o2.b);//o1 and o2 needs methods: either friend or member fns to access private datas like a and b
    return o3;
}

   
int main(){
    Complex c1,c2,c3,sum;
    c1.setData(1,2);
    c1.displayComplex();
    
    c2.setData(3,4);
    c2.displayComplex();

    sum = setDataBySum(c1,c2);//here frnd fn can be just call like an ordinary fn, cuz its not tied to any class
    //frnd fns have generally class objects as its args
    sum.displayComplex();

    return 0;
}