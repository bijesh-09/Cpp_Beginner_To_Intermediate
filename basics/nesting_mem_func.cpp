#include<iostream>
#include<string>
class binary{
    std::string s;
    void checkBin();
    public:
        void read();
        void onesComplement();
        void display();
};
void binary :: read(){
    std::cout << "Enter a binary number:" << std::endl;
    std::cin >> s;
}
void binary :: checkBin(){
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            std::cout<<"Incorrect binary format"<<std::endl;
            exit(1);
        }
        
    }
    
}
void binary :: onesComplement(){
    checkBin();
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0' )
        {
            s.at(i) = '1';
        }
        else{
            s.at(i) = '0';

        }
        
    }


}

void binary :: display()
{
    std::cout << "1's complement: "<< s << std::endl;

}

int main(){
    binary b;
    b.read();
    b.onesComplement();
    b.display();
    return 0;
}