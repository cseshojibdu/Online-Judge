#include<stdio.h>

int main()
{

    int t,i,len,check,sum;
    char s[1000],extra;
    //scanf("%d%c",&t,&extra);
    scanf("%d",&t);

    while(t--)
    {
        sum = 0;
        check = 1;
        //scanf("%s%c",s,&extra);
        scanf("%s",s);
        for(i=0;s[i];i++)
        {
            if(s[i]!='X'&& s[i]!='x')
            {
                sum+=check;
                check++;
            }
            else
                check = 1;
        }
        printf("%d\n",sum);
    }
    return 0;
}
