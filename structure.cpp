#include<iostream>
using namespace std;
struct rectangle
    {
        int l;
        int b;
        char s;
    };
int main()
{
    struct rectangle d={5,4,'r'};
    cout<<"length = "<<d.l<<endl;
    cout<<"breadth= "<<d.b<<endl;
    cout<<"shape = "<<d.s<<endl;
    cout<<"changing values"<<endl;
    d.l=36;
    d.b=48;
    d.s='s';
    cout<<"dimensions after changing the values are as fallows :"<<endl;
    cout<<"length = "<<d.l<<endl;
    cout<<"breadth= "<<d.b<<endl;
    cout<<"shape = "<<d.s<<endl;
    return 0;
}