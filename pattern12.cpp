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
        for(int k=1;k<=(2*i-1);k++)
        {
            int q=(2*i-1);
            if(k<=(q+1)/2)
            {
                cout<<k;
                p=k;
            }
            else
            {
                cout<<(k-p);
            }
        }
        cout<<endl;
    }
}