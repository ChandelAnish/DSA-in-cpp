#include <iostream>
using namespace std;
int length00(int ar[]) 
{
  return sizeof(ar) ;//you will get the size of 1st element of array since arr is the address of 1st element with an error.
}
int length0(int ar[]) 
{
  return sizeof(ar[0]) ;//you will get the size of 1st element of array since arr is the address of 1st element.
}
int length(int ar[]) 
{
  return sizeof(*ar) ;//you will get the size of 1st element of array since arr is the address of 1st element.
}
int length01(int *p) 
{
  return sizeof(p) ;//you will get the size of 1st element of array since arr is the address of 1st element.
}
void print(int ar[],int n)
{
  for(int i=0;i<n;i++)
  {
    cout<<"array["<<i<<"]  =  "<<ar[i]<<endl;
  }
}
void print01(int *p,int n)
{
  cout<<"printing using pointer method"<<endl;
  for(int i=0;i<n;i++)
  {
    cout<<"array["<<i<<"]  =  "<<*(p+i)<<endl;
  }
}
int main() 
{
  int arr[] = {1, 2, 3, 4, 5};
  int l=sizeof(arr)/sizeof(arr[0]);
  cout << "Length of array is "<<length0(arr)<<endl;
  cout << "Length of array is "<<length0(arr)<<endl;
  cout << "Length of array is "<<length(arr)<<endl;
  cout << "Length of array is "<<length01(arr)<<endl;
  print(arr,l);
  print01(arr,l);
  return 0;
}