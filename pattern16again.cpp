#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter any odd number of times you want to print the pattern"<<endl;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
            for(int j=i;j<=n-1;j++)
             {
                cout<<" ";
             }
            
            for(int j=1;j<=2*i-1;j++)
             {
                char a;
                cout<<((char)(j+64));
             }
        cout<<endl;
    }
    for(int i=n-1;i>=1;i--)
    {
            for(int j=i;j<=n-1;j++)
             {
                cout<<" ";
             }
            
            for(int j=1;j<=2*i-1;j++)
             {
                char a;
                cout<<((char)(j+64));
             }
        cout<<endl;
    }
    return 0;
}