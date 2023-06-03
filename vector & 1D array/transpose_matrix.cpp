#include<iostream>
using namespace std;
string s="the elements of the array are as fallows";
void input(int *p,int n,int m)
{
    cout<<"enter the elements of the array"<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>(*(p+i*m+j));
        }
    }
}
void print(int *p,int n,int m)
{
    cout<<s<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<(*(p+i*m+j))<<"  ";
        }
        cout<<endl;
    }
    s="the elements of the transpose array are as fallows";
}
void transpose(int *p,int n,int m)
{
    int ar[m][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            ar[i][j]=(*(p+j*n+i));
        }
    }
    print((int *)ar,n,m);
}
int main()
{
int n,m;
cout<<"enter the number and column of the array"<<endl;
cin>>n>>m;
int ar[n][m];
int *p=(int *) ar;
input(p,n,m);
print(p,n,m);
transpose(p,n,m);
return 0;
}