#include<iostream>
using namespace std;
int main()
{
    int n,m,c=0;
    cout<<"enter the range between which you want to find the armstrong numbers"<<endl;
    cin>>n>>m;
    cout<<"the armstrong numbers between the given range is as fallows :"<<endl;
    for(int i=n;i<=m;i++)
    {
        int k=i,s=0,r=0;
        while(k!=0)
        {
            r=k%10;
            s=s+(r*r*r);
            k=k/10;
        }
        if(s==i)
        {
            cout<<i<<endl;
            c++;
        }
    }
    if(c==0)
    {
        cout<<"no armstrong number between the given range"<<endl;
    }
    return 0;
}