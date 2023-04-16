#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter no. of times you want to print the pattern"<<endl;
    cin>>n;
    for(int i=n;i>=1;i--)
    {
        for(int j=1;j<=2*i-1;j++)
        {
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
}