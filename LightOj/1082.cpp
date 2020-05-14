#include<stdio.h>
#include<iostream>
using namespace std;

int main()
{
    long long int n,t,i,r,c=0;;

    cin>>t;
    for(i=1;i<=t;i++)
    {
        c=0;
        cin>>n;
        while(n!=0)
        {
            r = n%2;
//            a[index++] = r;
            if(r==1)
                c++;
            n = n/2;
        }
        if(c%2==0)
        printf("Case %d: even\n",i);
        else
        printf("Case %d: odd\n",i);
    }
    return 0;
}
