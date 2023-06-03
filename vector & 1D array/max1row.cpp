#include<iostream>
using namespace std;
int c=0;
void input(int *p,int n,int m)
{
    cout<<"enter the elements of 2D array(only 0 & 1 which should be sorted in ascending order)"<<endl;
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
    cout<<"the elements of 2D array are as fallows :"<<endl;
    for(int i=0;i<n;i++) 
    {
        for(int j=0;j<m;j++) 
        {
            cout<<(*(p+i*m+j))<<"  ";
        }
    cout<<endl;
    }
}
int max1(int *p,int n,int m)
{
    for(int i=0;i<m;i++) 
    {
        for(int j=0;j<n;j++) 
        {
            if((*(p+(j*m)+i))==1)
            {
                c=m-i;
                return j; 
            }
        }
    }
}
int main()
{
    cout<<"enter the length of row and columns of the 2D array"<<endl;
    int n,m;
    cin>>n>>m;
    int ar[n][m];
    input((int *)ar,n,m);
    print((int *)ar,n,m);
    cout<<"maximum number of 1 is in the row "<<(max1((int *)ar,n,m)+1)<<endl;;
    cout<<"Number of 1 is in the row "<<c<<endl;
    return 0;
}