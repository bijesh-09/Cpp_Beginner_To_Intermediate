#include<iostream>
#include<cmath> //to use pow(base,power) function

class Point{
    int x,y;
    friend float distance(Point,Point);//declared a friend func to calc distance
    public:
        Point(float a, float b);//---> THis is a parameterized constructor
         void display(){
            std::cout<<"("<<x<<","<<y<<")"<<std::endl;
        }
};
Point::Point(float a, float b){
    x=a; y=b;
}

float distance(Point p,Point q){
    float w = pow( (q.x-p.x) , 2 );
    float z = pow ( (q.y-p.y) , 2 );
    return pow( (w+z) , 0.5 );
}



int main(){
    //Implicit call for parameterized constructor
    Point o1(1,3);
    o1.display();

    //Explicit call for parameterized constructor
    Point o2 = Point(2,4);
    o2.display();

    float Distance = distance(o1,o2);

    std::cout<<"Distance = "<<Distance<<std::endl;

    return 0;
}