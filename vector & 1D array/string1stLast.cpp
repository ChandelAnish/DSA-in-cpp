#include <iostream>
using namespace std;
int f=-1,l=-1;
void firstLast(string s,char c)
{
    for(int i =0;i<s.size();i++)
    {
        if(s[i]==c)
        {
            f=i;
            break;
        }
    }
    for(int i =s.size()-1;i>=0;i--)
    {
        if(s[i]==c)
        {
            l=i;
            break;
        }
    }
}
int main ()
{
    cout<<"enter any string"<<endl;
    string s;
    cin>>s;
    cout<<"enter the character whose last and first index you want to find"<<endl;
    char c;
    cin>>c;
    firstLast(s,c);
    cout<<"the first index of "<<c<<" = "<<f<<endl;
    cout<<"the last index of "<<c<<" = "<<l<<endl;
    return 0;
}