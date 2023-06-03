#include<iostream>
using namespace std;

void col(int *ar,int n,int m)
{
        //storing the running sum of each column of the array obtained after the above operation.
    for(int i=0;i<n;i++)
    {
        for (int j=1;j<m;j++)
        {
            *(ar+j*m+i)+=*(ar+(j-1)*m+i);
        }
    }
}
void row(int *ar,int n,int m)
{
    //storing the running sum of each row in that row
    for(int i=0;i<n;i++)
    {
        for (int j=1;j<m;j++)
        {
            *(ar+i*m+j)+=*(ar+i*m+j-1);
        }
    }
}
void input(int *ar,int n,int m)
{
    cout<<"enter the elements of the array"<<endl;
    for(int i=0;i<n;i++)
    {
        for (int j=0;j<m;j++)
        {
            cin>>(*(ar+i*m+j));
        }
    }
}
void print (int *ar,int n,int m)
{
    cout<<"the elements of the array are as fallows :"<<endl;
    for(int i=0;i<n;i++)
    {
        for (int j=0;j<m;j++)
        {
            cout<<(*(ar+i*m+j))<<"  ";
        }
        cout<<endl;
    }
}
int main()
{
    cout<<"enter the row and column of the array"<<endl;
    int n,m;
    cin>>n>>m;
    int ar[n][m];
    input((int *)ar,n,m);
    print((int *)ar,n,m);

    cout<<" row sum"<<endl;
    row((int *)ar,n,m);
    print((int *)ar,n,m);
    cout<<" column sum"<<endl;
    col((int *)ar,n,m);
    print((int *)ar,n,m);
    return 0;
}