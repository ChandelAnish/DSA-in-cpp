#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    vector <int> v={1,2,3,4,5};
    cout<<"enter the number of times you want to rotate the arrray"<<endl;
    int k;
    cin>>k;
    reverse(v.begin(),v.end());
    reverse(v.begin(),v.begin()+k);
    reverse(v.begin()+k,v.end());
    for(int ele:v)
    {
        cout<<ele<<"  ";
    }
    cout<<endl; 
    return 0;
}