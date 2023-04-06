#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the nomber of times you want to print the pattern"<<endl;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(i==1||i==n||j==1||j==n)
            {
                cout<<j;
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<endl;
    }
}