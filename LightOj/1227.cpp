#include<stdio.h>
#include<string.h>
#include<iostream>
using namespace std;
int main()
{
    int n,p,t,q,i,j,c,s,a[100];
    cin>>t;
    for(i=1;i<=t;i++)
    {
        memset(a,0,sizeof(a));
        cin>>n>>p>>q;       // dim -- carriable dim-- highest weight
        for(j=0;j<n;j++)
        cin>>a[j];

        s = 0;
        for(j=0;j<p && j<n;j++)    // p = highest no of Dim, j indicate the no of Dim
        {
           if(s+a[j]>q)break;
            s = s + a[j];


        }

        cout<<"Case "<<i<<": "<<j<<endl;
    }
    return 0;
}
