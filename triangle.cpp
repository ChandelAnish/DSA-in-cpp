#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the number of times you want to print the pattern"<<endl;
    cin>>n;
    for(int i=n;i>=1;i--)
    {
         for(int j=1;j<=i;j++)
         {
            cout<<" ";
         }
         for (int k= 1; k <=(n-(i-1)); k++)
         {
            cout<<"*";
         }
         for (int l = 1; l < (n-(i-1)); l++)
         {
            if((n-(i-1))==1)
            {
                continue;
            }
            else
            {
                cout<<"*";
            }
         }
         
         cout<<endl;
    }
}