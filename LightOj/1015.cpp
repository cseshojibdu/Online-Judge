
#include<stdio.h>
#include<iostream>
using namespace std;

int main()
{
    long long int i,tc,j,n,number,s;
    cin>>tc;
    for(i=1;i<=tc;i++)
    {
        s = 0;
        cin>>n;
        for(j=0;j<n;j++)
        {
            cin>>number;
            if(number>=1)
            s= s + number;
        }
        printf("Case %lld: %lld\n",i,s);

    }

    return 0;
}
