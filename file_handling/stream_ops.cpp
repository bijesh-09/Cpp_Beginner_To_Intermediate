// #include<iostream>
// using namespace std;

// class person
// {
//     string name;
//     int ssid;

//     public:
//     person(string name = "Aayush", int ssid = 3422)
//     {
//         this->name = name;
//         this->ssid = ssid;
//     }
//     friend void operator >>(istream &in, person &p2);
//     friend void operator <<(ostream &out, person &p2);

// };
// void operator >>(istream &in, person &p2)
// {
//     cout<<"Enter Name: "<<endl;
//     in>>p2.name>>p2.ssid;
//     cout<<"Enter SSOD: "<<endl;
//     in>>p2.ssid;
// }

// void operator <<(ostream &out,person &p2 )
// {
//     out<<"Name is: "<<p2.name<<endl<<"SSID is: "<<p2.ssid<<endl;
// }

// int main()
// {
//     person p1,p2;
//     cin>>p1>>p2;
//     cout<<p1<<p2;
// }
#include<iostream>
using namespace std;

class person
{
    string name;
    int ssid;

    public:
    person(string name ="Sajohn", int ssid = 1234)
    {
        this->name = name;
        this->ssid = ssid;
    }

    friend istream& operator >>(istream &in, person &p2);
    friend ostream& operator <<(ostream &out, person &p2);

};
istream& operator >>(istream &in, person &p2)
{
    cout<<"Enter Name: "<<endl;
    in>>p2.name; // p2 able to access private members cuz its inside friend
    cout<<"Enter ssid"<<endl;
    in>>p2.ssid;
    return in;
}
ostream& operator <<(ostream &out,person &p2)
{
    out<<"Your Name is: "<<p2.name<<endl<<"Your SSID is: "<<p2.ssid<<endl;
    return out;
}

int main()
{
    person p1,p2;
    cin>>p1>>p2;
    cout<<p1<<p2;
}