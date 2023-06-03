#include<iostream>
using namespace std;
void input(int p[],int n)
{
    cout<<"enter the elements of array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>p[i];
    }
}
void print(int ar[],int n)
{
    cout<<"the elements of array are as fallows :"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<ar[i]<<"  ";
    }
    cout<<endl;
}
// int second_largest(int ar[],int n)
// {
//     int gr=ar[0],sgr=INT16_MIN;
//     for(int i=0;i<n;i++)
//     {
//         if(gr<ar[i])
//         {
//             sgr=gr;
//             gr=ar[i];
//         }
//         if(ar[i]>sgr && ar[i]<gr)
//         {
//             sgr=ar[i];
//         }
//     }
//     return sgr;
// }

//        OR


int largestNumIndex(int ar[],int n)
{
    int gr=ar[0],idx=0;
    for(int i=1;i<n;i++)
    {
        if(gr<ar[i])
        {
            gr=ar[i];
            idx=i;
        }
    }
    return idx;
}

int main ()
{
    int n;
    cout<<"enter the size of array"<<endl;
    cin>>n;
    int ar[n];
    input(ar,n);
    print(ar,n);
    // cout<<"second largest number = "<<second_largest(ar,n)<<endl;

    //       OR

    int gr=ar[largestNumIndex(ar,n)];
    for(int i=0;i<n;i++)
    {
        if(ar[i]==gr)
        {
            ar[i]=-1;
        }
    }
    cout<<"second largest number = "<<ar[largestNumIndex(ar,n)]<<endl;
    return 0;
}