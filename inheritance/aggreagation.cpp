#include<iostream>

class employee{
    int eid, salary;
    public:
        employee(){ eid = 1; salary = 10000;}
        void display(){
            std::cout<<"eID = "<<eid<<" Salary = "<<salary<<std::endl;
        }
};
class company{
    int cid;
    std::string cname;
    employee e; //company contains emplpyee
    public:
        company(){
            cid = 1024;
            cname = "ABC";
        }
        void display(){
            e.display();
            std::cout<<"cID = "<<cid<<" Comapany name = "<<cname<<std::endl;
        }
};
int main(){
    company c;
    c.display();
    return 0;
}