#include<iostream>
using namespace std;
int main()
{
    int n,p=0;
    cout<<"enter the number of times you want to print the pattern"<<endl;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=n;j>=i;j--)
        {
            cout<<" ";
        }
        for(int k=1;k<=i;k++)
        {
           cout<<k;
        }
        for(int l=(i-1);l>=1;l--)
        {
            cout<<l;
        }
        cout<<endl;
    }
}