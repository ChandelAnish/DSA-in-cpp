// #include<iostream>
// #include<math.h>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"enter any binary number"<<endl;
    cin>>n;
    int m=n,r=0,s=0,i=0;
    while(m!=0)
    {
        r=m%10;
        s=s+r*(pow(2,i));
        m=m/10;
        i++;
    }
    cout<<"("<<n<<")2   =   ("<<s<<")10"<<endl;
    return 0;
}