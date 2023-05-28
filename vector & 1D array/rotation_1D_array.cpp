#include<iostream>
using namespace std;
void input(int ar[],int n)
{
    cout<<"enter the elements of array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
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
// void rotate(int ar[], int n, int k)
// {
//     for(int i=0;i<k;i++)
//     {
//         int c=ar[0],d=INT16_MIN;
//         for(int j=0;j<n;j++)
//         {
//             if((j+1)<n)
//             {
//                 d=ar[j+1];
//                 ar[j+1]=c;
//                 c=d;
//             }
//             else if((j+1)==n)
//             {
//                 d=ar[(j+1)-n];
//                 ar[(j+1)-n]=c;
//                 c=d;
//             }
//         }
//     }
// }
void rotate(int ar[],int n,int k)
{
    int arr[n],j=0;
    k=k%n;//if k is greater than n then it will take care of that
    for(int i=n-k;i<n;i++)
    {
        arr[j++]=ar[i];
    }
    for(int i=0;i<n-k;i++)
    {
        arr[j++]=ar[i];
    }
    print(arr,n);
}
int main ()
{
    int n;
    cout<<"enter the size of array"<<endl;
    cin>>n;
    int ar[n];
    input(ar,n);
    cout<<"array before rotation"<<endl;
    print(ar,n);
    int k;
    cout<<"enter the number of times you want to rotate the 1D array"<<endl;
    cin>>k;
    rotate(ar,n,k);
    // cout<<"array after rotation"<<endl;
    // print(ar,n);
    return 0;
}