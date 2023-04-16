#include<iostream>
using namespace std;
int main()
{
    int n,m=0,r=0,sum=0;
    cout<<"Enter any number"<<endl;
    cin>>n;
    m=n;
    while(m!=0)
    {
        r=m%10;
        sum=sum+r;
        m=m/10;
    }
    cout<<"the sum of digits of the number "<<n<<" = "<<sum<<endl;
    return 0;
}