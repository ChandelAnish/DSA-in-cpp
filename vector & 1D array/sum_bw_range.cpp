#include<iostream>
using namespace std;
void input(int *ar,int n,int m)
{
    cout<<"enter the elements of the array"<<endl;
    for(int i=0;i<n;i++)
    {
        for (int j=0;j<m;j++)
        {
            cin>>(*(ar+i*m+j));
        }
    }
}
void print (int *ar,int n,int m)
{
    cout<<"the elements of the array are as fallows :"<<endl;
    for(int i=0;i<n;i++)
    {
        for (int j=0;j<m;j++)
        {
            cout<<(*(ar+i*m+j))<<"  ";
        }
        cout<<endl;
    }
}
// int sum(int *ar,int n,int m,int u,int uu,int l,int ll)
// {
//     int s=0;
//     for(int i=u;i<=l;i++)
//     {
//         for (int j=uu;j<=ll;j++)
//         {
//             s+=*(ar+i*m+j);
//         }
//     }
//     return s;
// }

//          OR


// int sum(int *ar,int n,int m,int u,int uu,int l,int ll)
// {
//     //storing the running sum of each row in that row
//     for(int i=0;i<n;i++)
//     {
//         for (int j=1;j<m;j++)
//         {
//             *(ar+i*m+j)+=*(ar+i*m+j-1);
//         }
//     }
//     int s=0;
//     for(int i=u;i<=l;i++)
//     {
//         if(uu!=0)
//         {
//             s+=*(ar+i*m+ll)-*(ar+i*m+(uu-1));
//         }
//         else
//         {
//             s+=*(ar+i*m+ll);
//         }
//     }
//     return s;
// }

//          OR

int sum(int *ar,int n,int m,int u,int uu,int l,int ll)
{
    //storing the running sum of each row in that row
    for(int i=0;i<n;i++)
    {
        for (int j=1;j<m;j++)
        {
            *(ar+i*m+j)+=*(ar+i*m+j-1);
        }
    }
    //storing the running sum of each column of the array obtained after the above operation.
    for(int i=0;i<n;i++)
    {
        for (int j=1;j<m;j++)
        {
            *(ar+j*m+i)+=*(ar+(j-1)*m+i);
        }
    }
    int s;
    if(u!=0 && uu!=0)
    {
        s=*(ar+l*m+ll)-*(ar+(u-1)*m+ll)-*(ar+(l)*m+(uu-1))+*(ar+(u-1)*m+(uu-1));
    }
    else if(uu==0 && u!=0)
    {
        s=*(ar+l*m+ll)-*(ar+(u-1)*m+ll);
    }
    else if(u==0 && uu!=0)
    {
        s=*(ar+l*m+ll)-*(ar+(l)*m+(uu-1));
    }
    else
    {
        s=*(ar+l*m+ll);
    }
    return s;
}
int main()
{
    cout<<"enter the row and column of the array"<<endl;
    int n,m;
    cin>>n>>m;
    int ar[n][m];
    input((int *)ar,n,m);
    print((int *)ar,n,m);
    cout<<"enter the first coordinates (in 0 index system)"<<endl;
    int u,uu,l,ll;
    cin>>u>>uu;
    cout<<"enter the second coordinates (in 0 index system)"<<endl;
    cin>>l>>ll;
    cout<<"the sum of rectangle between the given range = "<<sum((int *)ar,n,m,u,uu,l,ll)<<endl;
    return 0;
}