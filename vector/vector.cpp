#include<iostream>
#include<vector>
using namespace std;
int main() 
{
    vector <int> v;
    cout<<"size = "<<v.size()<<endl;
    cout<<"capacity = "<<v.capacity()<<endl;
    v.push_back(5);
    cout<<"size = "<<v.size()<<endl;
    cout<<"capacity = "<<v.capacity()<<endl;
    v.push_back(58);
    cout<<"size = "<<v.size()<<endl;
    cout<<"capacity = "<<v.capacity()<<endl;
    v.push_back(598);
    cout<<"size = "<<v.size()<<endl;
    cout<<"capacity = "<<v.capacity()<<endl;
    v.push_back(9);
    cout<<"size = "<<v.size()<<endl;
    cout<<"capacity = "<<v.capacity()<<endl;
    v.pop_back();
    cout<<"size = "<<v.size()<<endl;
    cout<<"capacity = "<<v.capacity()<<endl;
    v.pop_back();
    cout<<"size = "<<v.size()<<endl;
    cout<<"capacity = "<<v.capacity()<<endl;
    v.pop_back();
    cout<<"size = "<<v.size()<<endl;
    cout<<"capacity = "<<v.capacity()<<endl;
    v.resize(10);
    cout<<"\n \n resized \n\n"<<endl;
     cout<<"size = "<<v.size()<<endl;
    cout<<"capacity = "<<v.capacity()<<endl;
    v.push_back(9);
    cout<<"size = "<<v.size()<<endl;
    cout<<"capacity = "<<v.capacity()<<endl;
    v.insert(((v.begin())+2),664);
    cout<<"size = "<<v.size()<<endl;
    cout<<"capacity = "<<v.capacity()<<endl;
    int i=*(v.begin());
    cout<<"i = "<<i<<endl;
    // cout<<"begin = "<<v.begin()<<endl;
    return 0;
}