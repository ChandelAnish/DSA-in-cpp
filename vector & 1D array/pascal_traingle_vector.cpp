#include<iostream>
#include<vector>
using namespace std;
//fn to print 2D vector in orde to print a pascle traingle.
vector <vector <int>> pascale_traingle(int n) 
{
    vector <vector<int>> v(n);//i.e it contains n 1D vectors.
    for(int i=0;i<n;i++)
    {
        v[i].resize(i+1);
        for(int j=0;j<v[i].size();j++)
        {
            if(j==0 || j==i)
            {
                v[i][j]=1;
            }
            else
            {
                v[i][j]=v[i-1][j]+v[i-1][j-1];
            }
        }
    }
    return v;
}
void print(vector <vector <int>> v)
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
int main()
{
    cout<<"enter the number of time you want to print the pascales triangle"<<endl;
    int n;
    cin>>n;
    cout<<"the pascale triangle is as fallows : "<<endl;
    print(pascale_traingle(n));
    return 0;
}