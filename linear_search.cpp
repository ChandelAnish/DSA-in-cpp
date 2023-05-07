#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the size of array"<<endl;
    cin>>n;
    int ar[n];
    cout<<"enter the elements of the array"<<endl;
    //taking input for array
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    int k,p=0;
    cout<<"enter the element to be finded"<<endl;
    cin>>k;
    for(int i=0;i<n;i++)
    {
        if(ar[i]==k)
        {
            p=i;
        }
    }
    if(p!=0)
    {
        cout<<"the element "<<k<<" is at position "<<(p+1)<<endl;
    }
    else
    {
        cout<<"element "<<k<<" is not present in this array"<<endl;
    }
    return 0;
}