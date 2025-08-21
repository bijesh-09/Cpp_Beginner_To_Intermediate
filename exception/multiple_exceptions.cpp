#include<iostream>

int main(){
    int size;
    std::cout<<"Enter size number:"<<std::endl;
    std::cin>>size;
    try
    {
        if (size<0)
        {
            throw 's';
        }
        for (int i = 0; i < 100; i++)
        {
            std::cout<< i << " ";
            if (i>size-1)
            {
                throw i;
            }
            
        }
        
        
    }
    catch(const int& n){

        std::cout << '\n'<< n <<" is out of range!" << std::endl;

    }
    catch(const char& ch)
    {
        std::cout << "Size must be a non-zero positve number!" << std::endl;
    }
    
    return 0;
}