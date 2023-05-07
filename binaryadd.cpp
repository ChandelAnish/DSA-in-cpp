#include<iostream>
using namespace std;
int main()
{
    int b1,b2,r1,r2,s=0,c=0;
    string sum="";
    cout<<"enter any 2 binary numbers to be added"<<endl;
    cin>>b1>>b2;
    while(b1!=0 || b2!=0)
    {
        r1=b1%10;
        r2=b2%10;
        if(r1==0 && r2==0)
        {
            s=c;
            c=0;
        }
        else if(r1==1 && r2==0)
        {
            if(c==0)
            {
                s=1;
                c=0;
            }
            else
            {
                s=0;
                c=1;
            }
        }
        else if(r1==0 && r2==1)
        {
            
            if(c==0)
            {
                s=1;
                c=0;
            }
            else
            {
                s=0;
                c=1;
            }
        }
        else if(r1==1 && r2==1)
        {
            
            if(c==0)
            {
                s=0;
                c=1;
            }
            else
            {
                s=1;
                c=1;
            }
        }
        sum=(char)(s+48)+sum;
        b1=b1/10;
        b2=b2/10;
    }
    sum=(char)(c+48)+sum;
    cout<<endl<<"binary sum = "<<sum<<endl;
    return 0;
}