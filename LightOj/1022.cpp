#include<stdio.h>
#include<math.h>
#include<iostream>
#define pi 2 * acos (0.0)
using namespace std;
int main()
{
    double a,r,s,d;
    int t,i;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        cin>>r;
        s = 4*r*r;
        a = pi*r*r;
        d = s-a;
        printf("Case %d: %.2lf\n",i,d);
    }

    return 0;
}
