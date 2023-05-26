#include<iostream>
using namespace std;
int f=0;
//function to input the values in array.


// void input(int ar[])//remember here ar[] is considered as a pointer not the whole array i.e if you only use ar then it will point to the first element of array only.
// {
//     int l=(sizeof(ar))/(sizeof(ar[0]));//this will give an error although the program will run but will not give desired output since ar which you are passing , you are not specifing position( you need to specify position since ar is taken as a single pointer not the whole array) that's why error( error can be removed if you use *ar or ar[0] in place of ar in sizeof() function but then also there will be logical error) is shown and after that the compiler considers ar as a pointer pointing towards the first element of the array therefore it gives the size of 1st element which on division with ar[0] gives 1 so the for loop only runs once and hence the array only takes 1 input. So to fix it you have to take length of as a parameter int the input() function. 
//     cout<<"Enter the elements of array :"<<endl;
//     for(int i=0;i<l;i++)
//     {
//         cout<<"array["<<i<<"]  =  ";
//         cin>>ar[i];
//     }
// }


void input(int ar[],int l)
{
    cout<<"Enter the elements of array :"<<endl;
    for(int i=0;i<l;i++)
    {
        cout<<"array["<<i<<"]  =  ";
        cin>>ar[i];
    }
}
//function to print the content of an array.
void print(int ar[],int l)
{
    cout<<"The elements of the array are as falows :"<<endl;
    for(int i=0;i<l;i++)
    {
        cout<<"array["<<i<<"]  =  "<<ar[i]<<endl;
    }
}
//function to find the greatest element in an array.
int greatest(int ar[],int l)
{
    int gr=ar[0];
    //To find the greatest element.
    for(int i=1;i<l;i++)
    {
        if(ar[i]>gr)
        {
            gr=ar[i];
        }
    }
    //To find the frequency of greatest element.
    for(int i=1;i<l;i++)
    {
        if(ar[i]==gr)
        {
            f++;
        }
    }
    return gr;
}
int main()
{
    int n;
    cout<<"Enter the size of array"<<endl;
    cin>>n;
    int ar[n];
    input(ar,n);
    print(ar,n);
    cout<<"The greatest element in the array is = "<<greatest(ar,n)<<endl;
    cout<<"The frequency of greatest element in the array is = "<<f<<endl;
    return 0;
}