#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the number of times you want to print the pattern"<<endl;
    cin>>n;
    for(int i=1;i<=2*n;i++)
    {
        if(i<=n)
        {
            for(int j=1;j<=i;j++)
            {
                if(j==n)
                {
                    continue;
                }
                cout<<"*";
            }
            for(int j=(2*i-1);j<=(2*n-1)-2;j++)
            {
                cout<<" ";
            }
            for(int j=1;j<=i;j++)
            {
                cout<<"*";
            }
        }
        if(i>n)
        {
            for(int j=(n-1);j>=(i-n);j--)
            {
                cout<<"*";
            }
            for(int j=1;j<=(2*(i-n)-1);j++)
            {
                if(i==2*n)
                {
                    continue;
                }
                cout<<" ";
            }
            for(int j=(n-1);j>=(i-n);j--)
            {
                cout<<"*";
            }
        }
        cout<<endl;
    }
}