#include<iostream>
#include<vector>
using namespace std;
void input(vector <int> &v,int n)
{
    cout<<"enter the elements of vector only 0 & 1"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
}
void print(vector <int> &v)
{
    cout<<"the elements of vector are as fallows :"<<endl;
    for(int ele:v)
    {
        cout<<ele<<" ";
    }
    cout<<endl;
}
// void sorting(vector <int> &v,int n)
// {
//     int c=0;
//     for(int i=0;i<n;i++)
//     {
//         if(v[i]==0)
//         {
//             c++;
//         }
//     }
//     for(int i=0;i<n;i++)
//     {
//         if(i<c)
//         {
//             v[i]=0;
//         }
//         else
//         {
//             v[i]=1;
//         }
//     }
// }
void sorting(vector <int> &v,int n)
{
    int p=0,pp=n-1;
    while(p<pp)
    {
        if(v[p]==1 && v[pp]==0)
        {
            v[p++]=0;
            v[pp--]=1;
        }
        if(v[p]==1 && v[pp]==1)
        {
            pp--; 
        }
        if(v[p]==0 && v[pp]==0)
        {
            p++; 
        }
    }
}
int main()
{
    int n;
    cout<<"enter the length of vector"<<endl;
    cin>>n;
    vector <int> v(n);
    input(v,n);
    print(v);
    sorting(v,n);
    cout<<"elements after sorting is as fallows : "<<endl;
    print(v);
    return 0;
}