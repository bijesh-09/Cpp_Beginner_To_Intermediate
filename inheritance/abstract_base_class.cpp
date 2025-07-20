#include<iostream>

class shape{
    protected:
    int l,b;
    public:
        shape(){};
        virtual void calc() =0;
};

class rect : protected shape{
    public:
    rect(int l, int b){
        this->l = l;
        this->b = b;
    }
    void calc() {
        std::cout<<"Area of rect = "<<l*b<<std::endl;
    }
};

class square : protected shape{
    public:
    square(int l){
        this->l = l;
    }
    void calc() {
        std::cout<<"Area of square = "<<l*l<<std::endl;
    }
    
};
int main(){
    rect r(2,3);
    square s(6);
    r.calc();
    s.calc();
    return 0;
}