#include<stdio.h>

int main()
{
    char s[150],ch[150],extra;
    int t,a[101],i,j,n,nSum,digit,len,finalPosition;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        for(i=0;i<n;i++)
            a[i]=0;

        finalPosition = 0;
        for(i=0;i<n;i++)
        {
            //printf("Input %d: ",i);
            scanf("%s",s);
            if(s[0]=='L')
                a[i] = -1;
            else if(s[0]=='R')
                a[i] = 1;
            else
            {
                scanf("%s",s);
                scanf("%d",&nSum);

                /*
                len = strlen(s);
                for(j=0;j<len;j++)
                {
                    s[len-j-1] = ch[j];
                }
                s[j]='\0';
                nSum = 0;
                int y,x = 0;
                for(j=0;s[j]!=' ';j++)
                {
                    y = s[j]-48;
                    nSum = 10*x + y;
                    x = nSum;
                }
                */
                a[i]=a[nSum-1];
            }
            finalPosition+=a[i];
        }
        printf("%d\n",finalPosition);
    }

    return 0;
}
