#include<iostream>
using namespace std;
int main()
{
    int n,p;
    cout<<"enter any number whose power you want to calculate :"<<endl;
    cin>>n;
    cout<<"enter the power :"<<endl;
    cin>>p;
    int prd=1;
    for(int i=1;i<=p;i++)
    {
        prd=prd*n;
    }
    cout<<p<<" power of "<<n<<" = "<<prd<<endl;
    return 0;
}