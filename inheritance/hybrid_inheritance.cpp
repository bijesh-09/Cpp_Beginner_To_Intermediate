#include<iostream>

class person{
    std::string name;
    int age;
    public:
        person(){
            name = "Ram";
            age = 18;
        }
        void display(){
            std::cout<<"Name = "<<name<<" Age = "<<age<<std::endl;
        }
};

class exam{
    protected:
    int math,phy;
    public:
        exam(int mth, int ph){
            math = mth;
            phy = ph;
        }
        void display(){
            std::cout<<"Maths = "<<math<<" Physics = "<<phy<<std::endl;
        }
    };
    
class student : public person{
    int sID;
    std::string stream;
    public:
    student(int id, std::string strm){
        sID = id;
        stream = strm;
    }
    void display(){
        std::cout<<"Student ID = "<<sID<<" Stream = "<<stream<<std::endl;
    }
    
};

class result :  public student , public exam{
    int total;
    public: 
        result(int id, std::string strm, int mth, int ph): student(id,strm), exam(mth,ph) {
            total = math + phy;
        }
        void display() {
            person::display();
            student::display();
            exam::display();
            std::cout<<"Total = "<<total<<std::endl;

        }
};

int main(){
    result r(1,"CSIT",90,100);
    r.display();
    r.student::display();
    return 0;
}