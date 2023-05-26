#include<iostream>
using namespace std;
void input(int *p,int n)
{
    cout<<"enter the elements of the array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>*(p+i);
    }
}
void print(int *p,int n)
{
    cout<<"The elements of the array are as fallows : "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<*(p+i)<<" ";
    }
}
void sorted(int ar[],int n)
{
    int c=0;
    for(int i=0;i<n-1;i++)
    {
        if(ar[i]>=ar[i+1])
        {
            cout<<"UNSORTED Array i.e not in ascending order"<<endl;
            goto end;
        }
    }
    cout<<"SORTED Array in ascending order"<<endl;
    end:
    return;
}
int main()
{
    int n;
    cout<<"enter the length of array"<<endl;
    cin>>n;
    int ar[n];
    input(ar,n);
    print(ar,n);
    sorted(ar,n);
    return 0;
}