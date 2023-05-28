#include<iostream>
#include<vector>
using namespace std;
int c=1;
string s="st";
void input(vector <int> &v,int n)
{
    cout<<"enter the elements of "<<c<<s<<" vector "<<endl;
    for(int i=0;i<n;i++)
    {
        int ele;
        cin>>ele;
        v.push_back(ele);
    }
    c++;
    s="nd";
}
void print(vector <int> &v)
{
    int n= v.size();
    for(int ele:v)
    {
        cout<<ele<<"  ";
    }
    cout<<endl;
}
void merg(vector <int> &v,vector <int> &vv)
{
    vector <int> vvv;
    int n=v.size(),nn=vv.size(); 
    int p=0,pp=0;
    while((p<n )|| (pp<nn))
    {
        if((v[p]<vv[pp]) && p<n && pp<nn)
        {
            vvv.push_back(v[p++]);
        }
        else if((v[p]>vv[pp]) && pp<nn && p<n )
        {
            vvv.push_back(vv[pp++]);
        }
        else if(v[p]==vv[pp] && pp<nn && p<n)
        {
           vvv.push_back(v[p++]); 
           vvv.push_back(vv[pp++]); 
        }
        else if(p==n)
        {
           vvv.push_back(vv[pp++]); 
        }
        else if(pp==nn)
        {
           vvv.push_back(v[p++]); 
        }
    }
    print(vvv);
}
int main()
{
    int n,nn;
    cout<<"enter the length of 1st vector"<<endl;
    cin>>n;
    vector <int> v;
    input(v,n);
    cout<<"enter the length of 2nd vector"<<endl;
    cin>>nn;
    vector <int> vv;
    input(vv,nn);
    cout<<"The elements of the merged and sorted vector are as fallows :"<<endl;
    merg(v,vv);
    return 0;
}