#include<iostream>
using namespace std;
int main()
{
    int ar[]={45,32,89,1,95};
    int *p=ar;
    cout<<sizeof(ar)<<endl;
    cout<<sizeof(ar[0])<<endl;
    cout<<sizeof(*p)<<endl;
    return 0;
}