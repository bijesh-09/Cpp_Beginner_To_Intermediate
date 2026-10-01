#include<iostream>
#include<map>
#include<string>
//map are associative containers, and it always has exactly two pairs,i.e key-value pair
int main(){
    std::map<std::string, int> marksMap;// key value pair as sting and int resp
    marksMap["ram"] =99; // its like key = ram and value = 99
    marksMap["sam"] =92;
    marksMap["hari"] =91;
    std::map<std::string, int>::iterator iter;//initializing pointer
    
    for ( iter = marksMap.begin() ; iter != marksMap.end(); iter++)
    {
        std::cout<< (*iter).first << " " << (*iter).second <<std::endl;
    }
    std::cout<< marksMap.size() <<std::endl;
    std::cout<< marksMap.max_size() <<std::endl;
    std::cout<< marksMap.empty() <<std::endl;
    
    std::map<int, float> Number;// key value pair as int and float resp
    Number[3] =3.14;
    Number[4] =2.14;
    Number[2] =5.14;
    std::map<int, float>::iterator numIter = Number.begin() ;//initializing pointer
    std::cout<< (*numIter).first << " " << (*numIter).second <<std::endl;
    
    
    return 0;
}