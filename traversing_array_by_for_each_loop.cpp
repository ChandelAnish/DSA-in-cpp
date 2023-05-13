#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the length of array"<<endl;
    cin>>n;
    int ar[n];
    cout<<"enter the elements of the array :"<<endl;
    for(int &ele : ar)
    {
        cin>>ele;
    }
    // for(int i=0;i<n;i++)
    // {
    //     cout<<"array["<<i<<"]  =  ";
    //     cin>>ar[i];
    // }
    cout<<"the elements of array are as fallows :"<<endl;
    for(int ele : ar)
    {
        cout<<ele<<endl;
    }
    return 0;
}