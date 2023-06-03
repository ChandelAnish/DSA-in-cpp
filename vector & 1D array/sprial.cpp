#include<iostream>
#include<vector>
using namespace std;
void input(vector <vector<int>> &v)
{
    cout<<"enter the elements of the vector"<<endl;
    for(int i=0;i<v.size();i++)
    {
        for(int j=0;j<v[i].size();j++)
        {
            cin>>v[i][j];
        }
    }
}
void print(vector <vector<int>> &v)
{
    for(int i=0;i<v.size();i++)
    {
        for(int j=0;j<v[i].size();j++)
        {
            cout<<v[i][j]<<"  ";
        }
        cout<<endl;
    }
}
void sprial(vector <vector<int>> &v)
{
    int t=0,b=v.size()-1,l=0,r=v[0].size()-1,d=0;
    while(t<=b && l<=r)
    {
        switch (d)
        {
        case 0:
        for(int i=l;i<=r;i++)
        {
            cout<<v[t][i]<<"  ";
        }
        t++;
            break;

        case 1:
        for(int i=t;i<=b;i++)
        {
            cout<<v[i][r]<<"  ";
        }
        r--;
            break;

        case 2:
        for(int i=r;i>=l;i--)
        {
            cout<<v[b][i]<<"  ";
        }
        b--;
            break;
        case 3:
        for(int i=b;i>=t;i--)
        {
            cout<<v[i][l]<<"  ";
        }
        l++;
            break;
        }
        d=(d+1)%4;
    }
}
int main()
{
    int n,m;
    cout<<"enter the number of rows and column of the vector"<<endl;
    cin>>n>>m;
    vector <vector <int>> v(n,vector<int>(m));
    input(v);
    cout<<"the elements of the vector are as fallows :"<<endl;
    print(v);
    cout<<"the elements of the vector in sprial order are as fallows :"<<endl;
    sprial(v);
    return 0;
}