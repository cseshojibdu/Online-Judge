#include<stdio.h>
#include<string.h>

int main()
{
    char ch[10],s[10];
    int n,t,i,j,l;
    scanf("%d",&n);
    for(t = 1; t<= n ; t++)
    {
        scanf("%s",ch);
        l = strlen(ch);
        for(i=0;i<l;i++)
        s[i]=ch[l-1-i];
        s[i]='\0';

        if(strcmp(s,ch)==0)
            printf("Case %d: Yes\n",t);
        else
            printf("Case %d: No\n",t);
    }
    return 0;
}
