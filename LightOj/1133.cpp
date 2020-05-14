#include<stdio.h>
#include<iostream>
#include<math.h>
#include<string.h>

using namespace std;

int main()
{
    long long int a[100000],i,d1,k,c,y,z,m,n,j,s,temp,b[100000],t;
    char ch,input[5];

    cin>>t;
    for(c=1;c<=t;c++)
    {
        cin>>n>>m;
        for(i=0;i<n;i++)
        {
            cin>>a[i];

        }
        for(i=0;i<m;i++)
        {
            gets(input);
                if(input[0]=='S')
                 {
                     d1 = input[2]-'0';
                     for(j=0;j<n;j++)
                        a[j]+=d1;

                 }
                if(input[0]=='M')
                {
                    d1 = input[2]-'0';
                    for(j=0;j<n;j++)
                        a[j]*=d1;
                }
                if(input[0]=='P')
                {
                    y = input[2]-'0';
                    z = input[4]-'0';
                    temp = a[y];
                    a[y] = a[z];
                    a[z] = temp;
                }

            if(input[0]=='R')
            {
                for(j=0;i<n;j++)
                   b[j] = a[n-1-j];
                for(j=0;i<n;j++)
                a[j] = b[j];
            }

        }
       printf("Case %d:\n",c);
       for(i=0;i<n;i++)
       printf("%d ",a[i]);
       printf("\n");



    }

    return 0;
}
