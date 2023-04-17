#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter number of times you want to print the pattern"<<endl;
    cin>>n;
    //printing the upper half
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
         {
            if((j==(n+1)/2 && i!=(n-1))||i==n)
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
         }
         cout<<endl;
    }
    //printing the lower half
    for(int i=n-1;i>=1;i--)
    {
        //   if(i==n)
        //     {
        //         continue;
        //     }
        for(int j=1;j<=n;j++)
         {
            if(j==(n+1)/2 && i!=(n-1))
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
         }
         cout<<endl;
    }
    return 0;
}