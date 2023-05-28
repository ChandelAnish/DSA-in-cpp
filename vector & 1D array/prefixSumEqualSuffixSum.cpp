#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
int pos=-1,ts=0;
void input(vector <int> &v)
{
    int n=v.size();
    cout<<"enter the elements of vector "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
        ts=ts+v[i];
    }
}
void print(vector <int> &v)
{
    for(int ele:v)
    {
        cout<<ele<<" ";
    }
    cout<<endl;
}
// bool position(vector <int> &v)//prefix sum of i = v[0]+v[1]+.....v[i]
// {                             //suffix sum of i = v[i+1]+v[i+2]+.....v[n-1]
//     int n=v.size();
//     for(int i=1;i<n;i++)
//     {
//         int l=0,r=0;
//         for(int j=0;j<=i;j++)
//         {
//             l=l+v[j];
//         }
//         for(int k=i+1;k<n;k++)
//         {
//             r=r+v[k];
//         }
//         if(l==r)
//         {
//             pos=i;
//             return true;
//         }
//     }
//     if(pos==-1)
//     {
//         return false;
//     }   
// }

//              OR

// bool position(vector <int> &v)//prefix sum of i = v[0]+v[1]+.....v[i]
// {                             //suffix sum of i = v[i+1]+v[i+2]+.....v[n-1]
//     int n=v.size();
//     for(int i=1;i<n;i++)
//     {
//         int l=0;
//         for(int j=0;j<=i;j++)
//         {
//             l=l+v[j];
//         }
//         if(l==(ts-l))
//         {
//             pos=i;
//             return true;
//         }
//     }
//     if(pos==-1)
//     {
//         return false;
//     }   

//              OR

bool position(vector <int> &v)//prefix sum of i = v[0]+v[1]+.....v[i]
{                             //suffix sum of i = v[i+1]+v[i+2]+.....v[n-1]
    int n=v.size();
    int l=0,r=0;
    for(int i=0;i<n;i++)
    {
        l=l+v[i];
        r=ts-l;
        if(l==r)
        {
            pos=i;
            return true;
        }
    }
    return false;
}
int main()
{
    int n;
    cout<<"enter the length of vector"<<endl;
    cin>>n;
    vector <int> v(n);
    input(v);
    cout<<"the elements of vector are as fallows :"<<endl;
    print(v);
    if(position(v))
    {
        cout<<"the required position is : "<<pos<<endl;
    }
    else
    {
        cout<<"no such position is present in the vector"<<endl;
    }
    return 0; 
}