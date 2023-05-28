#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
void input(vector <int> &v)
{
    int n=v.size();
    cout<<"enter the elements of vector "<<endl;
    for(int i=1;i<n;i++)//as we have to do it for 1-based indexing (i.e index satrts from one not 0 as in 0-based indexing)
    {
        cin>>v[i];
    }
}
void print(vector <int> &v)
{
    for(int i=1;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
// int prefix_sum(vector <int> &v,int k)
// {
//     int n=v.size(),s=0;
//     for(int i=1;i<=k;i++)//as we have to do it for 1-based indexing (i.e index satrts from one not 0 as in 0-based indexing)
//     {
//         s+=v[i];
//     }
//     return s;
// }

//          OR

void prefix_sum(vector <int> &v)
{
    int n=v.size(),s=0;
    for(int i=1;i<=n;i++)//as we have to do it for 1-based indexing (i.e index satrts from one not 0 as in 0-based indexing)
    {
        s+=v[i];
        v[i]=s;
    }
}
int main()
{
    int n;
    cout<<"enter the length of vector"<<endl;
    cin>>n;
    vector <int> v(n+1,0);//as we have to do it for 1-based indexing (i.e index satrts from one not 0 as in 0-based indexing)
    input(v);
    cout<<"the elements of vector are as fallows :"<<endl;
    print(v);
    cout<<"enter the number of queries"<<endl;
    int q;
    cin>>q;
    prefix_sum(v);
    while (q--)
    {
        int u,l;
        cout<<"enter the upper and lower limit respectively"<<endl;
        cin>>u>>l;
        // cout<<"the required sum = "<<(prefix_sum(v,l)-prefix_sum(v,u-1))<<endl;
        cout<<"the required sum = "<<(v[l]-v[u-1])<<endl;
    }
    return 0; 
}