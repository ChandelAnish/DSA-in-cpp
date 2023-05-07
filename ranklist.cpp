#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the number of students"<<endl;
    cin>>n;
    string ar[n],s="";
    int mr[n];
    cout<<"enter the names and marks of the students"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<"enter the name of student number "<<(i+1)<<endl;
        cin>>ar[i];
        cout<<"enter the marks of student number "<<(i+1)<<endl;
        cin>>mr[i];
    }
    //sorting
    int c=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<(n-1-i);j++)
        {
            if(mr[j]<mr[j+1])
            {
                c=mr[j];s=ar[j];
                mr[j]=mr[j+1];ar[j]=ar[j+1];
                mr[j+1]=c;ar[j+1]=s;
            }
        }
    }
    //printing sorted(desending order) array
    for(int i=0;i<n;i++)
    {
        cout<<(i+1)<<") "<<ar[i]<<"     "<<mr[i]<<endl;
    }
    return 0;
}