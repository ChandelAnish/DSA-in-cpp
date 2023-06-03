#include<iostream>
#include<vector>
using namespace std;
int main()
{
    // vector <int> v;
    // //inputing in a vector via for loop
    // for(int i =0;i<5;i++)
    // {
    //     int ele;
    //     cin>>ele;
    //     v.push_back(ele);
    // }
    // //printing the vector elements
    //  for(int i=0;i<v.size();i++)
    // {
    //     cout<<v[i]<<"  ";
    // }
    //inputing inside a vector whose size is defined
    vector <int> vt(5);
    for(int i=0;i<vt.size();i++)//for traversing vector like we did in array you must declear vector with it's size.
    {
        cin>>vt[i];
    }
    // //printing the vector elements
    //  for(int i=0;i<vt.size();i++)//for traversing vector like we did in array you must declear vector with it's size.
    // {
    //     cout<<vt[i]<<"  ";
    // }
    //printing via 'for each" loop
     for(int ele :vt)
    {
        cout<<ele<<"  ";
    }
    cout<<endl;
    // //insertion
    // vt.insert(vt.begin()+2,9);
    //   for(int ele :vt)
    // {
    //     cout<<ele<<"  ";
    // }

//erase and delete
    // 
    vt.erase(vt.begin()+2);
    for(int ele :vt)
    {
        cout<<ele<<"  ";
    }
    return 0;
}