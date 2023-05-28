#include<iostream>
using namespace std;
void input(int *p,int n)
{
    for(int i=0;i<n;i++)
    {
        cin>>*(p+i);
    }
}
void print(int *p,int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<*(p+i)<<"  ";
    }
    cout<<endl;
}
void runningSum(int ar[],int n)
{
    int s=0;
    for(int i=0;i<n;i++)
    {
        s=s+ar[i];
        ar[i]=s;
    }
}
int main()
{
    cout<<"Enter the length of array"<<endl;
    int n;
    cin>>n;
    int ar[n];
    cout<<"enter the elements of array"<<endl;
    input(ar,n);
    cout<<"The elements of array are as fallows :"<<endl;
    print(ar,n);
    cout<<"Array with running sum is as fallows :"<<endl;
    runningSum(ar,n);
    print(ar,n);
}