#include<iostream>

class bankDeposit{
    int principal;
    int years;
    float interestRate;
    float returnValue;
    public:
        bankDeposit(){};//default constructor for objects that are just created and have no values set
        bankDeposit(int p, int y, float r);
        bankDeposit(int p, int y, int r);
        void display(){
            std::cout<<"Principal = "<<principal
            <<". Return value = "<<returnValue<<std::endl;
        }
};
bankDeposit :: bankDeposit(int p, int y, float r){
    principal = p;
    years = y;
    interestRate = r;
    returnValue = principal;
    for (int i = 0; i < years; i++) // use private members not the formal args of the member fns or constructors
    {
        returnValue *= (1+interestRate);
    }
    
    
}
bankDeposit :: bankDeposit(int p, int y, int r){
    principal = p;
    years = y;
    interestRate = float(r)/100;
    returnValue = principal;
    for (int i = 0; i < years; i++) 
    {
        returnValue *= (1+interestRate);
    }
}

int main(){
    int p,y,rateCent;
    float rateDec;
    std::cout<<"Enter p,y,rateDec:"<<std::endl;
    std::cin>>p>>y>>rateDec;
    bankDeposit o1(p,y,rateDec); //Dynamic or Runtime initialization of objects with implicit call
    //which constructor to run is decided by based on the user input during runtime
    o1.display();
    
    std::cout<<"Enter p,y,rateCent:"<<std::endl;
    std::cin>>p>>y>>rateCent;
    bankDeposit o2 = bankDeposit(p,y,rateCent);////Dynamic or Runtime initialization of objects with explicit call
    o2.display();

    bankDeposit o3;//default constructor called
    o3.display();//will print garbage value since there is nothing inside default constructor defn
    
    return 0;
}