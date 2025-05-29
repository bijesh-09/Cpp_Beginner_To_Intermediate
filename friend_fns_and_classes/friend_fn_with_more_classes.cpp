#include<iostream>

//Make sure to understand the FLOW OF EXECUTION for this program
//This PROGRAM is for Declaring MEMBER FNS OF OTHER CLASS AS FRIEND FNS IN CURRENT CLASS INDIVIUDALLY

class Complex; //to instruct compiler that the complex class is gonna be defined below

class Calculator{
    public:
    int sumReal(Complex ,Complex );
    //fn declaration. And the "class Complex;" was declared so that compiler can know why the args of these fns are of Complex type
    int sumImg(Complex ,Complex );
};

class Complex{ // Complex class defn
    int a,b;
    friend int Calculator :: sumReal(Complex,Complex);//friend fn declaration
    friend int Calculator :: sumImg(Complex,Complex);//this will be valid cuz we have already given fn prototype above for compiler
    //before using member fn of another class as friend fn in current class make sure they are either declared or defined before this class like Calculator
    public:
        void setData(int p, int q){
            a=p;
            b=q;
        }

        void display(){
            std::cout<<a<<" + "<<b<<"i"<<std::endl;
        }
};
/* member fns of Calculator defined here because if i defined before the Complex class
then it would cause several problems like: there would be o1 and o2 as args and their private members
a and b will also be in the fn defn. while we have only declared "class Complex;" due to which compiler 
would have no idea about other terms. also leave the problem with friend function alone compiler
wouldnt even know that a and b are the private members of the Coomplex class because in the Calculator class compiler only 
knows that the Complex class id gonna be defined ,not that what is defined in Complex class  */
int Calculator :: sumReal(Complex o1,Complex o2){ //fnn defn
    return o1.a + o2.a;
}
int Calculator :: sumImg(Complex o1,Complex o2){
    return o1.b + o2.b;
}

int main(){
    Complex c1,c2;
    c1.setData(1,2);
    c1.display();

    c2.setData(3,4);
    c2.display();

    Calculator result;
    int Real = result.sumReal(c1,c2);
    int Img = result.sumImg(c1,c2);

    std::cout<<Real<<" + "<<Img<<"i"<<std::endl;
    return 0;
}