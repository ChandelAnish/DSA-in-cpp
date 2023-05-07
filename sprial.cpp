#include<iostream>
using namespace std;
int main()
{
    int n,m;
    cout<<"enter the number of rows and column of double dimensional array"<<endl;
    cin>>n;
    cin>>m;
    int ar[n][m];
    //inputing the elements of array
    cout<<"enter the elements of array"<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>ar[i][j];
        }
    }
    //printing the contents of array
    cout<<endl<<"the contents of array in sprial formate is as fallows :"<<endl;
    for(int i=0;i<m;i++)
    {
         
    }
    return 0;
}