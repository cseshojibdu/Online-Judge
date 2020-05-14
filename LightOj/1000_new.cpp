#include<stdio.h>

int main()
{
    unsigned int a,b,c;
    int t,i;
    scanf("%d",&t);

    for(i=1;i<=t;i++)
    {
        scanf("%u %u",&a,&b);
        c = a+b;
        printf("Case %u: %u\n",i,c);
    }
    return 0;
}
