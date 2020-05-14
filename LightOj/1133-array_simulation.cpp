#include<stdio.h>
#include<iostream>
#include<math.h>
#include<string.h>

using namespace std;

int main()
{
    long long int a[100000],i,d1,k,c,y,z,m,n,j,in,s,temp,b[100000],t;
    char ch[10],input[5];

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
            getchar();
            gets(ch);

            if(ch[0]=='S')
            {
                d1 = ch[2]-'0';
                for(j=0;j<n;j++)
                    a[j]+=d1;

            }
            if(ch[0]=='M')
            {
                d1=ch[2]-'0';
                for(j=0;j<n;j++)
                    a[j]*=d1;
            }
            if(ch[0]=='P')
            {
                y = ch[2]-'0';
                z = ch[4]-'0';
                temp = a[y];
                a[y] = a[z];
                a[z] = temp;
            }

            if(ch[0]=='R')
            {
                for(j=0;j<n;j++)
                    b[j] = a[n-1-j];
                for(j=0;j<n;j++)
                    a[j] = b[j];
            }

            for(i=0;i<n;i++)
            printf("%d ",a[i]);

        }

       printf("Case %d:\n",c);
       for(i=0;i<n;i++)
       printf("%d ",a[i]);
       printf("\n");



    }

    return 0;
}
