
//fn_template with multiple arguments

#include<iostream>

template <class demo1, class demo2>
demo1 fn_max(demo1 x, demo2 y){
    if (x>y)
    {
        return x;
    }
    else{ return y;};
    
}  
int main(){
    int x = 3, y=4.5;
    std::cout<<"Max number = "<<fn_max(x,y)<<std::endl;//auto template args deduction
    std::cout<<"Max number = "<<fn_max<int,float>(x,y)<<std::endl;//specifying template args
    return 0;
}