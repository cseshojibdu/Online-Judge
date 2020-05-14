#include<stdio.h>
long long int c[239999999],count;
long long int ack(long long int n)
{
    count++;
    if(n==1)return count;

    if(c[n]!=0)
        return count+c[n];

    //printf("%d %d\n",n,count);
    if(!(n&1))return ack(n/2);
    if(n&1)return ack(3*n+1);
}

int main()
{
    long long int n1,n2,n,maxLength,t;
    long long int loc;
    while(scanf("%lld %lld",&n1,&n2)==2)
    {
        if(n1==0 && n2==0)break;
        for(t = 0;t<239999999;t++)c[t]=0;

        if(n1>n2)
        {
            t = n2;
            n2 = n1;
            n1 = t;
        }
        for(n=n1;n<=n2;n++)
        {

            count = 0;
            if(!(n&1))
                c[n] = ack(n/2);
            if(n&1)
                c[n] = ack(3*n+1);
            //printf("maxLenght = %lld\n",maxLength);
        }
        //for(n=n1;n<=n2;n++)printf("%lld -->%lld\n",n,c[n]);
        long long int newmax=0;
        for(n=n2;n>=n1;n--)
        {
            if(newmax<=c[n])
            {
                loc = n;
                newmax=c[n];
            }
        }
        //printf("Newmax = %d, Loc = %d\n",newmax,loc);
        printf("Between %lld and %lld, %lld generates the longest sequence of %lld values.\n",n1,n2,loc,newmax);
    }
    return 0;
}
