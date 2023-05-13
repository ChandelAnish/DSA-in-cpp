#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter any decimal number"<<endl;
    cin>>n;
    int m=n,r=0,p=1,s=0;
    // string s="";
    // while(m!=0)
    // {
    //     r=m%2;
    //     s=(char)(48+r)+s;
    //     m=m/2;
    // }


    //       OR
    while(m!=0)
    {
        r=m%2;
        s=s+(r*p);
        p=p*10;
        m=m/2;
    }
    cout<<"("<<n<<")10   =   ("<<s<<")2"<<endl;
    return 0;
}