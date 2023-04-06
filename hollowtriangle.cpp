#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the number of times you want to print the pattern"<<endl;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=(n-i);j++)
        {
            cout<<" ";
        }
        for(int k=1;k<=i;k++)
        {
            if(k==i && i!=n)
            {
                cout<<i;
            }
            if(i==n)
            {
                cout<<n;
            }
        }
        for(int l=1;l<=(2*(i-1)-1);l++)
        {
            if(i==n)
            {
                continue;
            }
            cout<<" ";
        }
        for(int k=1;k<=i;k++)
        {
            if(i==1)
            {
                continue;
            }
            if(k==i && i!=n)
            {
                cout<<i;
            }
            if(i==n)
            {
                cout<<n;
            }
        }
        cout<<endl;
    }
}