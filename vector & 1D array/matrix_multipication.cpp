#include<iostream>
using namespace std;
string s="1st";
void input(int *ar,int n,int m)
{
    cout<<"Enter the elements of "<<s<<" array"<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>*(ar+i*m+j);
        }
    }
    s="2nd";
}
void print(int *ar,int n,int m)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<*(ar+i*m+j)<<"  ";
        }
    cout<<endl;
    }
}
void matrix_multipication(int *ar,int n,int m,int *arr,int nn,int mm)
{
    if(m==nn)
    {
        int arrr[n][mm];
        for(int k=0;k<n;k++)
        {
            for(int j=0;j<mm;j++)
            {
                int s=0;
                for(int i=0;i<m;i++)
                {
                    s=s+((*(ar+k*m+i))*(*(arr+i*mm+j)));
                }
                arrr[k][j]=s;  
            }
        }
        cout<<"the product matrix is as fallows"<<endl;
        print((int *)arrr,n,mm);
    }
    else
    {
        cout<<"matrix multipication NOT POSSIBLE please enter compitable matrices"<<endl;
    }
}
int main()
{
    int n,m,nn,mm;
    cout <<"Enter the row and column of 1st array"<<endl;
    cin>>n>>m;
    int ar[n][m];
    int *p=(int *)ar;
    input(p,n,m);
    cout <<"Enter the row and column of 2nd array"<<endl;
    cin>>nn>>mm;
    int arr[nn][mm];
    int *pp=(int *)arr;
    input(pp,nn,mm);
    cout <<"The elements of 1st array are as fallows :"<<endl;
    print(p,n,m);
    cout <<"The elements of 1st array are as fallows :"<<endl;
    print(pp,nn,mm);
    matrix_multipication(p,n,m,pp,nn,mm);
    return 0;
}