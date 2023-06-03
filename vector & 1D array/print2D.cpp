#include<iostream>
using namespace std;
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
void printRowWise(int *p,int n,int m)
{
    cout<<"the elements of 2D array ROW WISE are as fallows :"<<endl;
    for(int i=0;i<n;i++) 
    {
        for(int j=0;j<m;j++) 
        {
            cout<<(*(p+i*m+j))<<"  ";
        }
    }
}
void printColumnWise(int *p,int n,int m)
{
    cout<<"the elements of 2D array COLUMN WISE are as fallows :"<<endl;
    for(int i=0;i<m;i++) 
    {
        for(int j=0;j<n;j++) 
        {
            cout<<(*(p+j*m+i))<<"  ";
        }
    }
}
main()
{
    cout<<"enter the length of row and columns of the 2D array"<<endl;
    int n,m;
    cin>>n>>m;
    int ar[n][m];
    input((int *)ar,n,m);
    printRowWise((int *)ar,n,m);
    printColumnWise((int *)ar,n,m);
    return 0;
}