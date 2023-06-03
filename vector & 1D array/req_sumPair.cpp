#include<iostream>
using namespace std;
void input(int ar[],int n)
{
    cout<<"enter the elements of array in ascending order"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
}
void print(int ar[],int n)
{
    // for(int ele:ar) //we can't use for each loop in the function since ar is considered as a pointer which refers to the adderess of 1st element of the array Therefore the for each loop cannot traverse with the address of only single element.
    // {
    //     cout<<ele<<" ";
    // }
     for(int i=0;i<n;i++)
    {
        cout<<ar[i]<<" ";
    }
    cout<<endl;
}
int pairSum(int ar[],int n,int s)
{
    int p=0,pp=n-1,c=0;
    while(p<pp)
    {
        if(ar[p]+ar[pp]==s)
        {
            c++;
            p++;
            pp--;
        }
        if(ar[p]+ar[pp]<s)
        {
            p++;
        }
        if(ar[p]+ar[pp]>s)
        {
            pp--;
        }
    }
    return c;
}
int main()
{
    int n;
    cout <<"Enter the length of array"<<endl;
    cin>>n;
    int ar[n];
    input(ar,n);
    cout <<"The elements of array are as fallows :"<<endl;
    print(ar,n);
    cout<<"enter the required sum of the pair you want to check whether present or not"<<endl;
    int s;
    cin>>s;
    cout<<"number of pairs with sum = "<<s<<" is = "<<pairSum(ar,n,s)<<endl;
    return 0;
}