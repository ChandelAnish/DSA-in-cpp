#include<iostream>
using namespace std;
int main()
{
    int n,c=0;
    cout<<"enter the size of array"<<endl;
    cin>>n;
    int ar[n];
    cout<<"enter the elements of array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0 ;j<(n-1)-i;j++)
         {
            if(ar[j]<ar[j+1])
            {
                c=ar[j];
                ar[j]=ar[j+1];
                ar[j+1]=c;
            }
         }
    }
    cout<<"the sorted array is as fallows "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<ar[i]<<endl;
    }
    return 0;
}