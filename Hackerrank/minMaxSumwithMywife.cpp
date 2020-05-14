#include<stdio.h>

int main()
{
    long long int t,a[10],i,j,min,max;
    for(i=1;i<=5;i++)
        scanf("%lld",&a[i]);

    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5-i;j++)
        {
            if(a[j]>a[j+1])
            {
                t = a[j];
                a[j]=a[j+1];
                a[j+1] = t;
            }
        }
    }
    min=0;
    max=0;
    for(i=1;i<=4;i++)
    {
        min=min+a[i];
        max = max + a[i+1];
    }
    printf("%lld %lld\n",min,max);
    return 0;
}
