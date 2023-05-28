#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    cout<<"enter the size of vector"<<endl;
    cin>>n;
    vector <int> v;
    //inputing in the vector
    cout<<"enter the elements of vector"<<endl;
    for(int i=0;i<n;i++)
    {
        int ele;
        cin>>ele;
        v.push_back(ele);
    }
    int m,o,c=0;
    cout<<"enter the element whose last occurance you need to find"<<endl;
    cin>>m;
    //for last occurance
    // for(int i=0;i<n;i++)
    // {
    //     if(m==v[i])
    //     {
    //         o=i;
    //         c++;
    //     }
    // }
    // OR
    for(int i=v.size()-1;i>=0;i--)
     {
         if(m==v[i])
         {
             o=i;
             c++;
             break;
         }
     }
    if(c!=0)
    {
        cout<<"the last occurance of the element "<<m<<" is at position '"<<o<<"' with respect to begning element"<<endl;
    }
    else
    {
        cout<<"the element is not present in the vector"<<endl;
    }
    return 0;
}