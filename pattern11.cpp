#include<iostream>
using namespace std;
int main()
{
    int n;
    for(int i=1;i<=4;i++)
    {
        for(int j=1;j<=6;j++)
        {
            if((i+j)%2==0)
            {
                cout<<1;
            }
            else
            {
                cout<<2;
            }
        }
        cout<<endl;
    }
}