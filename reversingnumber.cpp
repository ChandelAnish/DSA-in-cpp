#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter any number"<<endl;
    cin>>n;
    int m=n,r=0,rev=0;
    while(m!=0)
    {
        r=m%10;
        rev=r+rev*10;
        m=m/10;
    }
    cout<<"the reversed number = "<<rev<<endl;
    return 0;
}