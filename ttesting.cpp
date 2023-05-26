#include<iostream>
using namespace std;
int main()
{
    int a=32;
    int *p=&a;
    cout<<"a = "<<a<<endl;
    cout<<"p = "<<p<<endl;
    cout<<"size of a = "<<sizeof(a)<<endl;
    cout<<"size of *p = "<<sizeof(*p)<<endl;
    cout<<"size of p = "<<sizeof(p)<<endl;
    return 0;
}