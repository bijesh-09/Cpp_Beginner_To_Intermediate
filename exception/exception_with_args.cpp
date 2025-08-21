#include<iostream>
#include<cmath>
#include<cstring>
//exception with args means objects as args here
class Number{
    double num;
    public:
        class Neg{
            public:
                double value;
                char description[20];
                Neg(){
                    value = 0;
                    description[0] = '\0';
                }
                Neg(double v, const char* desc){
                    value = v;
                    strcpy(description,desc);
                }
        };

        void readNum(){
            std::cout<<"Enter a number:"<<std::endl;
            std::cin>>num;
        }
        
        double squareRoot(){
            if (num<0)
            {
                throw Neg(num,"Negative number!"); //calling nameless temp obj
            }
            else{
                return sqrt(num);
            }
            
        }
    };
int main(){
    Number n;
    n.readNum();
    try{
        double r = n.squareRoot();
        std::cout<<"Square root = "<< r <<std::endl;
        
    }
    catch(const Number::Neg& neg_obj){
        std::cout<<"Exception!"<<std::endl;
        std::cout<<"Trying to find square root of "<< neg_obj.value <<std::endl;
        std::cout<<"Error description: "<< neg_obj.description <<std::endl;
        
    }

}