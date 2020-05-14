#include<stdio.h>

int main()
{
    int n,newCola, startCola,rest,r,totalCola;
    while(scanf("%d",&n)==1)
    {
        totalCola = n;
        while(n>=3)
        {
            r = n/3;
            totalCola = totalCola + r;
            rest = n % 3 ;
            n= r + rest;
        }
        if(n==2)totalCola++;
        printf("%d\n",totalCola);
    }
    return 0;
}
