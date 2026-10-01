#include<iostream>
#include<vector> //include this for vector ops
//vector is a dynamic array, which can grow or reduce its size based on elements inserted  or removed
template<typename T>
void display(std::vector<T> &v){
    for (size_t i = 0; i < v.size() ; i++)
    {
        // std::cout<<v[i]<<" "; Or u can do:
        std::cout<<v.at(i) <<" ";
    }
    std::cout<<std::endl;
    
}
int main(){ //note: main() cant have templates or simply it cant be generic fn
    std::vector<char> vec1;// std::vector<char> is like make vector of char type
    //i.e zero length int vector
    int size;
    char element;
    std::cout<<"Enter size of vector:"<<std::endl;
    std::cin>>size;
    std::cout<<"Enter elements:"<<std::endl;
    for (int i = 0; i < size; i++)
    {
        std::cin>>element;
        vec1.push_back(element);//adds elemnet at the end of the vector
        //vector is a dynamic array, and any number of elements can be keep on adding and it will auto adjusts its size 
    }
    display(vec1);
    vec1.pop_back();//removes elemnet from the end of the vector
    display(vec1);
    
    std::vector<char> :: iterator iter = vec1.begin();
    //defining a var which is iterator of vetor of char type, i.e. iter
    //vec1.begin() gives the address of the vector
    // iter is assigned that address and works as a pointer to the elements in vector
    
    
    vec1.insert(iter+1,5,'b');//iter points to 2nd position and 'b' is added to the 2nd pos for 5 times and remaining other upcoming elements are migrated backwards
    display(vec1);
    
    std::vector<int> vec2(4); //4 element or size 4 vector
    display(vec2);
    std::vector<int> vec3(vec2); //vector of size of vec2
    display(vec3);
    std::vector<int> vec4(6,3); //vector of size 6, with each element being 3, i.e. 3 3 3 3 3 3 
    display(vec4);
    
    /*
    Output:
    Enter size of vector:
    4
    Enter elements:
    a b c d
    a b c d
    a b c
    a b b b b b b c
    0 0 0 0 //since vec2 has no elements
    0 0 0 0 //since vec2 has no elements
    3 3 3 3 3 3
    */

    
    
    return 0;
}