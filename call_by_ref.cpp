#include<iostream>
using namespace std;
void swap(int &x,int &y)
{
    int c=x;
    x=y;
    y=c;
}
void swap(int *x,int *y)
{
    int c=*x;
    *x=*y;
    *y=c;
}
int main()
{
    int x=9,y=1;
    // int &r=x;
    // cout<<"x = "<<x<<"  r = "<<r<<endl;
    // r=81;
    // cout<<"x = "<<x<<"  r = "<<r<<endl;
    // cout<<"before using swap function"<<endl;
    // cout<<"x = "<<x<<"  y = "<<y<<endl;
    // swap(x,y);
    // cout<<"after using swap function"<<endl;
    // cout<<"x = "<<x<<"  y = "<<y<<endl;
    // cout<<endl<<"by pointers method"<<endl;
    cout<<"x = "<<x<<"  y = "<<y<<endl;
    swap(&x,&y);
    swap(&x,&y);//attaining original configuration
    cout<<"x = "<<x<<"  y = "<<y<<endl;
    return 0;
}