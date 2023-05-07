#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the size of array"<<endl;
    cin>>n;
    int ar[n];
    //taking input for array
    cout<<"enter the elements of the array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    int k;
    bool b=false;
    cout<<"enter the element to be searched in the array using binary search technique"<<endl;
    cin>>k;
    int l=0,m,u=n-1;
    while(l<=u)
    {
        m=(l+u)/2;
        if(k>ar[m])
        {
            l=m+1;
        }
        else if(k<ar[m])
        {
            u=m-1;
        }
        else
        {
            b=true;
            break;
        }
    }
    if(b)
    {
        cout<<"the element "<<k<<" is at position "<<(m+1)<<endl;
    }
    else
    {
        cout<<"the element "<<k<<" is not present in the array"<<endl;
    }
    return 0;
}