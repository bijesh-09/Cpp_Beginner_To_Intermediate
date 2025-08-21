#include<iostream>
#include<fstream>
#include<iomanip>
using namespace std;
int main(){
    // char ch[20] ;
    // std::cout<<"Enter a sentence: "<<std::endl;
    // std::cin.getline(ch,11);
    // std::cout.write(ch,10);
    // std::cout<<ch[20] <<std::endl;
    
    // cout<<123<<endl;
    // cout.width(5);
    
    // cout<<123<<endl;
    // cout.width(5);
    // cout.fill('*');
    // cout<<123<<endl;

    // cout.precision(5);
    // cout<<123.5843423498<<endl;

    // cout.setf(ios::showpos);
    // cout<<123<<endl;
    
    // cout.unsetf(ios::showpos);
    // cout<<123<<endl;


    cout<<setw(5)<<11<<endl;
    cout<<11.547903568345<<endl;//default precison is 6

    cout<<setprecision(5)<<11.2344399273<<endl;
    cout<<setfill('*')<<setw(5) <<11<<endl;
    cout<<showpos<<11<<endl;
    cout<<hex<<100<<endl;
    cout<<showbase<<hex<<100<<endl;
    cout<<oct<<100<<endl;
    cout<<showbase<<oct<<100<<endl;
    cout<<dec<<100<<endl;
    cout<<showbase<<dec<<100.324629823496237<<endl;
    

    

    
    return 0;
}