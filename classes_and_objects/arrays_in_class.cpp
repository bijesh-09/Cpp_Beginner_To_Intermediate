#include<iostream>

class Shop{
    int itemId[20];
    int itemPrice[100];
    int counter;
    public:
        void initCounter(){
            counter = 0;
        }
        void setPrice();
        void getPrice();
        
};
void Shop :: setPrice(){
    std::cout<<"Enter Id of ur item:"<<std::endl;
    std::cin>>itemId[counter];
    std::cout<<"Enter Price of ur item:"<<std::endl;
    std::cin>>itemPrice[counter];
    counter++;
}
void Shop::getPrice(){
    for (int i = 0; i < counter; i++)
    {
        std::cout<<"Item-Id:"<<itemId[i] << std::endl;
        std::cout<<"Item-Price:"<<itemPrice[i] << std::endl;
        
    }
    
    
}
int main(){
    Shop obj;
    obj.initCounter();
    obj.setPrice();
    obj.setPrice();
    obj.setPrice();
    obj.getPrice();
    return 0;
}