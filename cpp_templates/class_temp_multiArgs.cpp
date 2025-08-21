/*
-> template instantiation = generating a class definition from a class template

    // Original template:
    template<class demo>
    class max {
        demo a, b;
        demo getMax() { return a>b?a:b; }
    };

    // class defn made from class template:
    // After instantiation for max<int>:
    class max {
        int a, b;           // demo → int
        int getMax() { return a>b?a:b; }  // demo → int
    };

-> specialization = A version of template for a particular template argument 
        -> template args for eg: <int,float> ; must be specified during object creation for the specialization

-> diff betwn class template and function template:(based on instantiation)
        -> functions are created by calling the function template and passing the specific data_type args
        -> template args must be passed to class template during object creation to create a class(class defn)

-> class generated from class template perfectly works like an ordinary class
*/
#include<iostream>

template<typename demo1, typename demo2>

class max{
    demo1 a;
    demo2 b;
    public:
        max(){} 

        max(demo1 a, demo2 b){
            this->a = a;
            this->b = b;
        }

        demo2 getMax(){
            return a>b?a:b;
        }
};

int main(){
    max <int,float>o1(2,3.4); //<int,float> are template arguments
    // OR: max o1(2,3.4);

    std::cout<<"Max = "<<o1.getMax()<<std::endl;
    return 0;
}