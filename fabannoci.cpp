#include<iostream>
using namespace std;
void fabannoci(int n)
{
    int a=0,b=1,c;
    cout<<a<<" ";
    cout<<b<<" ";
    for(int i=3;i<=n;i++)
    {
        c=a+b;
        cout<<c<<" ";
        a=b;
        b=c;
    }
    // return;
}
int main()
{
    int n;
    cout<<"enter the number time you want to print the series"<<endl;
    cin>>n;
    cout<<"the fabannoci series is as fallows :"<<endl;
    fabannoci(n);
    return 0;
}