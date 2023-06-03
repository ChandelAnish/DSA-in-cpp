#include<iostream>
#include<vector>
using namespace std;
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
void sprialInput(vector <vector<int>> &v)
{
    int t=0,b=v.size()-1,l=0,r=v[0].size()-1,d=0,n=1;
    while(t<=b && l<=r)
    {
        switch (d)
        {
        case 0:
        for(int i=l;i<=r;i++)
        {
            v[t][i]=n++;
        }
        t++;
            break;

        case 1:
        for(int i=t;i<=b;i++)
        {
            v[i][r]=n++;
        }
        r--;
            break;

        case 2:
        for(int i=r;i>=l;i--)
        {
            v[b][i]=n++;
        }
        b--;
            break;
        case 3:
        for(int i=b;i>=t;i--)
        {
            v[i][l]=n++;
        }
        l++;
            break;
        }
        d=(d+1)%4;
    }
}
int main()
{
    int n;
    cout<<"enter the value of n for square matrix"<<endl;
    cin>>n;
    vector <vector <int>> v(n,vector<int>(n));
    sprialInput(v);
    cout<<"the required matrix with 1 to "<<n*n<<" numbers in sprial order is as fallows :"<<endl;
    print(v);
    return 0;
}