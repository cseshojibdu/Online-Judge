#include<stdio.h>

int main()
{
    int a[500][500],s1,s2;
    int i,j,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
            scanf("%d",&a[i][j]);

    s1 = 0;
    s2 = 0;
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
        {
            if(i==j)
                s1+=a[i][j];
            if(j==n-i+1)
                s2+=a[i][j];
        }
        if(s1>=s2)
            printf("%d\n",s1-s2);
        else
            printf("%d\n",s2-s1);
    return 0;
}
