#include<iostream>
using namespace std;
int main()
{
    int n,f=1;
    cout<<"enter any number whose factotial you want to calculate"<<endl;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        f*=i;
    }
    cout<<"factorial of "<<n<<" = "<<f<<endl;
    return 0;
}