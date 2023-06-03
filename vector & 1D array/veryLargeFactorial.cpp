#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter any number"<<endl;
    cin>>n;
    unsigned long long f=1;
    for(int i=1;i<=n;i++)
    {
        f*=i;
    }
    cout<<f<<endl;
}