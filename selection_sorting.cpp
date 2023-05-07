#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the size of array"<<endl;
    cin>>n;
    int ar[n];
    cout<<"enter the elements of array"<<endl;
    //taking input from user. 
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    //sorting using selection sorting technique.
    for(int i=0;i<n;i++)
    {
        int sm=ar[i],pos=i,c=0;
        for(int j=(i+1);j<n;j++)
        {
            if(sm>ar[j])
            {
                sm=ar[j];
                pos=j;
            }
        }
        c=ar[i];
        ar[i]=sm;
        ar[pos]=c;
    }
    //printing the sorted array.
    cout<<endl<<"the sorted array is as fallows :"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<ar[i]<<endl;
    }
    return 0;
}