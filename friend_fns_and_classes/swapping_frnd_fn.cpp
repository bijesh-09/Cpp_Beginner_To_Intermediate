#include<iostream>

class B; //Forward declaration to use reference objects of B as parameters

class A{
    int value;
    friend void swap(A &,B &);
    public:
    void setData(int n){
        value = n;
    }
        void display(){
            std::cout<<value;
        }
};

class B{
    int value;
    friend void swap(A &,B &);
    public:
        void setData(int n){
            value = n;
        }
        void display(){
            std::cout<<value;
        }
};

void swap(A &x,B &y){//fn defn here to avoid conflicts. reference objects as parameters for swapping values
    int temp = x.value;
    x.value = y.value;
    y.value = temp;
}

int main(){
    int a,b; //ints for useer input

    A obj1;
    std::cout<<"Enter 1st number:"<<std::endl;
    std::cin>>a;
    obj1.setData(a); //obj1 value set

    B obj2;
    std::cout<<"Enter 2nd number:"<<std::endl;
    std::cin>>b;
    obj2.setData(b); //obj2 value set

    std::cout<<"Before swapping:"<<std::endl;
    obj1.display(); 
    std::cout<<std::endl;
    obj2.display(); 
    std::cout<<std::endl;
    
    swap(obj1,obj2); //swap friend fn called
    
    std::cout<<"After swapping:"<<std::endl;
    obj1.display(); 
    std::cout<<std::endl;
    obj2.display(); 
    std::cout<<std::endl;
    return 0;
}