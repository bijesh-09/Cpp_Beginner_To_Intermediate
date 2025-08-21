#include<iostream>
// #include<stdexcept> used for classes like std::invalid_argument, std::out_of_range, etc
int main(){
    int a=200,b=0;
    try{
        if (b==0)
        {
            // throw int(5);-->creates temp int obj with value 5 though int is not a class rather a fundamental datatype
            throw std::string("yo wassup"); //string is a class, and its constructor is init with "yo wassup"
            // throw std::invalid_argument("Division by zero is not allowed!");
            throw b;
        }
        std::cout<<"Quotient = "<<a/b<<std::endl;
    }
    catch(const int& r){
        std::cout<<"b is -ve"<<std::endl;
    }
    // catch(const std::invalid_argument& s){
    //     s.what();
    // }
    catch(const std::string& stringbro) {
        std::cout<<stringbro<<std::endl;
    }
    
    return 0;
    

    
}