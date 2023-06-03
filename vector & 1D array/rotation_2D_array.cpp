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
void rotation(vector <vector<int>> &v,int r)
{
    while(r--)
    {
        int a=v[0][0],b=INT16_MIN;
        //for 1st row
        for(int j=0;j<v[0].size()-1;j++)
        {
            b=v[0][j+1];
            v[0][j+1]=a;
            a=b;
        }
        //for last column
        for(int i=1;i<v.size();i++)
        {
            b=v[i][v[i].size()-1];
            v[i][v[i].size()-1]=a;
            a=b;
        }
        //for last row
        for(int j=v[v.size()-1].size()-2;j>=0;j--)
        {
            b=v[v.size()-1][j];
            v[v.size()-1][j]=a;
            a=b;
        }
        //for 1st column
        for(int i=v.size()-2;i>=0;i--)
        {
            b=v[i][0];
            v[i][0]=a;
            a=b;
        }
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
    cout<<"enter the number of times you want to rotate the border elements of vector"<<endl;
    int r;
    cin>>r;
    cout<<"the elements of the vector after rotation is as fallows :"<<endl;
    rotation(v,r);
    print(v);
    return 0;
}