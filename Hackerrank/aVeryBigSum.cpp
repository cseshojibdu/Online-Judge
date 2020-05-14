#include<stdio.h>

int main()
{

    int n;
    long long int s,x;
    scanf("%d",&n);
    s = 0;
    for(int i=1;i<=n;i++)
    {
        scanf("%lld",&x);
        s+=x;
    }
    printf("%lld\n",s);
    return 0;
}
