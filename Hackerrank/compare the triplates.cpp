#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{

    int n,i,x=0,y=0;
    int a[3],b[3];
    for(i=0;i<3;i++)cin>>a[i];
    for(i=0;i<3;i++)
    {
        cin>>b[i];
        if(a[i]>b[i])x++;
        else if(a[i]<b[i])y++;
    }
    cout<<x<<" "<<y<<endl;

    return 0;
}

