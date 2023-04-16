#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter any odd number of times you want to print the pattern"<<endl;
    cin>>n;
    for(int i=1;i<=2*n-1;i++)
    {
        if (i<=n)
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
        }
        if(i>n)
        {
            for(int j=1;j<=(i-n);j++)
             {
                cout<<" ";
             }
             int c=1;
            for(int j=2*(i-n)-1;j<=2*n-3;j++)
             {
                cout<<((char)(c+64));
                c++;
             }
        }
        cout<<endl;
    }
    return 0;
}