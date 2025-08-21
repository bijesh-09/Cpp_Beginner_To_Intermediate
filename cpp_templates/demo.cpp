#include<iostream>

template<typename demo1,typename demo2 >

demo2 area(demo1 l, demo2 b)
{
    return l*b;
}

int main(){
    int a = 2;
    float b = 3.56;
    std::cout<<"Area of rectangle = "<< area(a,b)<<std::endl;
    return 0;
}