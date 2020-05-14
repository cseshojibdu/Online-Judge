#include<stdio.h>
#include<string.h>

int main()
{
    int t,,ls,lc;
    char s[100000],c[100000];
    for(i=1;i<=t;i++)
    {
        int sc[100],cc[100];
        memset(sc,0,sizeof(sc));
        memset(cc,0,sizeof(cc));
        gets(s);
        strupr(s);
        gets(c);
        strupr(c);
        ls = strlen(s);
        lc = strlen(c);

        for(j=0;j<ls;j++)
            sc[s[j]]++;
        for(j=0;j<lc;j++)
            cc[c[j]]++;


    }
    return 0;
}
