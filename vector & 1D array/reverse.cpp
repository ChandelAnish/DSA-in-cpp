#include<iostream>
 using namespace std;
 int main()
 {
  int n;
  cout<<"enter the length of array"<<endl;
  cin>>n;
  int A[n];
  cout<<"enter the elements of array"<<endl;
  //inputing
  for(int i=0;i<n;i++)   
  {
      cin>>A[i];
  }
  int c=0;
  //reversing
  for(int i=0;i<n/2;i++)
  {
    c=A[i];
    A[i]=A[n-1-i];
    A[n-1-i]=c;
  }
  //printing
  for(int i=0;i<n;i++)   
  {
      cout<<A[i]<<"  ";
  }
  cout<<endl;
  return 0;
 }