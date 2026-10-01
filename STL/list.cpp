#include<iostream>
#include<list>

template<typename T>
void display(std::list<T> &l){
    typename std::list<T> :: iterator iter ;//cuz its a dependent so typename should be writtern on declaration, its not a fn arg

    for (iter= l.begin(); iter != l.end() ; iter++)
    {
        std::cout<<*iter <<" ";
    }
    std::cout<<std::endl;
}
int main(){
    std::list<int> list1; //zero size list
    std::list<int> list2; //zero size list

    list1.push_back(5);
    list1.push_back(2);
    list1.push_back(4);
    list1.push_back(9);
    list1.push_back(9);

    list2.push_back(3);
    list2.push_back(7);
    list2.push_back(1);

    display(list1);
    display(list2);
    list1.pop_front();
    list1.sort();// sorts list in ascending order
    list2.sort();
    list1.pop_front();//removes 1st index element of list
    list1.remove(9);//removes 9 from the list even the repeated ones
    list1.merge(list2);//merges and sorts the merged list in ascending order
    //note before merging all the lists that are to be merged must be sorted
    display(list1);
    
    list1.reverse();//reverse the elements of list
    display(list1);
    
    
    return 0;
}