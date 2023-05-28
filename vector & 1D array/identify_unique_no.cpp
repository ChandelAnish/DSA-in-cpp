#include<iostream>
using namespace std;
//fn to take input in the array
void input(int *p,int n)
{
    cout<<"enter the elements of the array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>*(p+i);
    }
}
//fn to print the elements of array
void print(int *p,int n)
{
    cout<<"The elements of the array are as fallows :"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<*(p+i)<<"  ";
    }
    cout<<endl;
}
//fn to find unique no. i.e unrepeated no.
void check_unique(int ar[],int n)
{
    int u=-1,idx=-1;
    //array manupulation
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(ar[i]==ar[j])
            {
                ar[i]=-1;
                ar[j]=-1;
            }
        }
    }
    //finding the unique no.
    for(int i=0;i<n;i++)
    {
        if(ar[i]!=-1)
        {
            u=ar[i];
            idx=i;
        }
    }
    if(u!=-1)
    {
        cout<<"the unique number is "<<u<<" and it is present at index "<<idx<<endl;
    }
    else 
    {
        cout<<"no unique number present"<<endl;
    }
}
int main()
{
    int n,s;
    cout<<"enter the size of array"<<endl;
    cin>>n;
    int ar[n];
    input(ar,n);
    print(ar,n);
    check_unique(ar,n);
    return 0;
}