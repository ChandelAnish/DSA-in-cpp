#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
void input(vector <int> &v)
{
    int n=v.size();
    cout<<"enter the elements( which can be -ve or +ve ) of vector in ascending order"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
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
void sorting(vector <int> &v)
{
    int n=v.size();
    vector <int> vv(n);
    int p=0,pp=n-1,c=n-1;
    while(p<=pp)
    {
        if(abs(v[p])<abs(v[pp]))
        {
            vv[c--]=v[pp]*v[pp];
            pp--;
        }
        else
        {
            vv[c--]=(v[p]*v[p]);
            p++;
        }
    }
    print(vv);
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
    cout<<"the square of each elements after sorting is as fallows : "<<endl;
    sorting(v);
    return 0;
}