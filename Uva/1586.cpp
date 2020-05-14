#include<stdio.h>
#include<string.h>

int main()
{
    char s[100],ch[100];
    int t,i,j,n,nSum,len,sublen;

    double sum,carbon=12.01,hydrogen=1.008,oxygen= 16.0,nitrozen=14.01;
    scanf("%d",&t);
    while(t--)
    {
        sum = 0.0;
        scanf("%s",ch);
        len = strlen(ch);
        for(i=0;i<len;i++)
        {
            s[len-i-1] = ch[i];
        }
        s[i]='\0';
       // puts(s);
        for(i=0;i<len;i++)
        {
            nSum = 0;
            if(s[i]>=48 && s[i]<=57)
            {
               if((s[i+1]>=48 && s[i+1]<=57))
               {
                    nSum = (10*(s[i+1]-48))+(s[i]-48);
                    i+=2;
                    //printf("%val = %d\n",nSum);
               }
               else
                {
                    nSum = s[i]-48;
                    i++;
                    //printf("%val = %d\n",nSum);
                }
            }
            else
                nSum=1;
            //printf("%c\n",s[i]);
            if(s[i]=='C')
                sum += carbon*nSum;
            if(s[i]=='H')
                sum += hydrogen*nSum;
            if(s[i]=='O')
                sum += oxygen*nSum;
            if(s[i]=='N')
                sum += nitrozen*nSum;
        }
        printf("%.3lf\n",sum);
    }

    return 0;
}

