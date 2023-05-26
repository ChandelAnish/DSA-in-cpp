#include<iostream>
#include<vector>
using namespace std;
void input(int *p,int n)
{
    cout<<"enter the elements of the vector"<<endl;
    for(int i=0;i<n;i++)
    {
        int ele;
        cin>>ele;
        *(p+i)=ele;
    }
}
void print(int *p,int n)
{
    cout<<"The elements of the vector are as fallows : "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<*(p+i)<<" ";
    }
}
int main()
{
    int n;
    vector <int> v;
    cout<<"Enter the size of vector" <<endl;
    cin>>n;
    input(v.begin(),n);
    return 0;
}