#include<iostream>
#include<vector>
#include<algorithm>
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
void rotation(vector <vector<int>> &v)
{
    //transposing
    for(int i=0;i<v.size();i++)
    {
        for(int j=0;j<i;j++)
        {
           swap(v[i][j],v[j][i]); 
        }
    }
    //reversing each row
    for(int i=0;i<v.size();i++)
    {
        reverse(v[i].begin(),v[i].end());
    }
}
int main()
{
    int n,m;
    cout<<"enter the number of rows and column of the vector"<<endl;
    cin>>n>>m;
    vector <vector <int>> v(n,vector<int>(m));
    input(v);
    cout<<"the elements of the vector before rotation is as fallows :"<<endl;
    print(v);
    cout<<"the elements of the vector after 90 degree rotation is as fallows :"<<endl;
    rotation(v);
    print(v);
    return 0;
}