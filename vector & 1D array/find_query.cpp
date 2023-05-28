#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
int main()
{
    int n;
    cout<<"enter the length of vector"<<endl;
    cin>>n;
    vector <int> v(5);
    cout<<"enter the elements of vector"<<endl;
    //inputing elements in the vector
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    vector <int> feq(pow(10,5),0);//frequency vector with initial value of each element = 0 . We taking size =pow(10,5) since it is given in question that all the elements of vector is less than 10^5 that means the max. index of feq will be less than 10^5 as the "element inside v is index of feq". 
    for(int i=0;i<n;i++)
    {
        feq[v[i]]++;
    }
    int q,i=1;
    cout <<"enter the number of query you have"<<endl;
    cin>>q;
    while(q--)
    {
        int qq;
        cout<<"enter the query "<<(i++)<<endl;
        cin>>qq;
        cout<<"the frequency of the  "<<qq<<"  =  "<<feq[qq]<<endl;
    }
    return 0;
}