#include<stdio.h>
#include<iostream>
using namespace std;

int main()
{
    long long int a[100000],n,t,i,r,total,max,j;

    cin>>t;
    for(i=1;i<=t;i++)
    {
        total = 0;
        cin>>n;
        for(j=0;j<n;j++)
       {
           cin>>a[j];
           total+=a[j];


       }

        total+= n;
        total/=2;
        if(total==0)total = 1;
        cout<<"Case "<<i<<":"<<" "<<total<<endl;

    }

    return 0;
}
