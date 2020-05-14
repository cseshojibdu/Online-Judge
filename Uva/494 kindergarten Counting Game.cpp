#include<stdio.h>
#include<string.h>

int main()
{
    char s[1000000],ch;
    long long int i, len,count=0;
    while(scanf("%s%c",s,&ch)==2)
    {

        len = strlen(s);
        int flag = 0;
        for(i=0;i<len;i++)
        {
            if((s[i]>='A' && s[i]<='Z')||(s[i]>='a' && s[i]<='z'))
            flag=1;
            break;
        }
        if(flag==1)
            count++;
        if(ch==10)
        {
            printf("%lld\n",count);
            count=0;
        }
    }

    return 0;
}
