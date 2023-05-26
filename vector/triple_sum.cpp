#include<iostream>
using namespace std;
//fn to take input in the array
void input(int *p,int n)
{
    cout<<"enter the elements of the array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>*(p+i);
    }
}
//fn to print the elements of array
void print(int *p,int n)
{
    cout<<"The elements of the array are as fallows :"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<*(p+i)<<"  ";
    }
    cout<<endl;
}
//fn to find no. of pairs whose sum = required sum
int check_triple_sum(int ar[],int n,int s)
{
    int p=0;
    // for(int i=0;i<n;i++)
    // {
    //     for(int j=0;j<n;j++)
    //     {
    //         if(i==j)
    //         {
    //             continue;
    //         }
    //         else if(ar[i]+ar[j]==s)
    //         {
    //             p++;
    //         }
    //     }
    // }

    // OR

    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            for(int k=j+1;k<n;k++)
            {
            
                if(ar[i]+ar[j]+ar[k]==s)
                {
                     p++;
                }
            }
        }
    }
    return p;
}
int main()
{
    int n,s;
    cout<<"enter the size of array"<<endl;
    cin>>n;
    int ar[n];
    input(ar,n);
    print(ar,n);
    cout<<"enter the required sum of the pair you want"<<endl;
    cin>>s;
    cout<<"the number of pairs with sum = "<<s<<" are = "<<check_triple_sum(ar,n,s)<<endl;
    return 0;
}