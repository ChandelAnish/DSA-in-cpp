#include<iostream>
using namespace std;
int main()
{
    int n,m=0,f=0;
    cout<<"enter any number"<<endl;
    cin>>n;
    m=n;
    while(m>0)
    {
        m=m/10;
        f++;
    }
    cout<<"the number of digits in the number "<<n<<" = "<<f<<endl;
    return 0;
}