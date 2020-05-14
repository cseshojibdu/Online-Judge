#include<stdio.h>
#include<math.h>

int main()
{
    long long int n,i,j,k,t,a[100][100],x,nd;

    while(scanf("%lld",&n)==1)
    {
        if(n==0)
            break;
        int flag[100]={0};
        int maxLenght=0;
        for(i=1;i<=n;i++)
        {
            scanf("%lld",&x);
            if(x==0)
            {
                flag[0]++;
                continue;
            }
            else
            nd = floor(log10(x))+1;
            //printf("Digit = %lld\n",nd);
            flag[nd]++;
            j = flag[nd];
            if(maxLenght<nd)
                maxLenght=nd;
            a[nd][j] = x;
        }
/*
        printf("\nTEST\n");
        for(i=1;i<=maxLenght;i++)
        {
            for(j=1;j<=flag[i];j++)
                printf("%lld",a[i][j]);
        }
         printf("\nTEST End\n");
*/
        for(i=1;i<=maxLenght;i++)
        {
            for(j=1;j<=flag[i];j++)
            {
                for(int k=1;k<=flag[i]-j;k++)
                    if(a[i][k]<a[i][k+1])
                    {
                        t = a[i][k];
                        a[i][k]=a[i][k+1];
                        a[i][k+1]=t;
                    }
            }
        }

        for(i=1;i<=maxLenght;i++)
        {
            for(j=1;j<=flag[i];j++)
                printf("%lld",a[i][j]);
        }
        if(maxLenght==0)
            printf("0");
        else
        for(i=1;i<=flag[0];i++)
            printf("0");
        printf("\n");
    }
    return 0;
}
