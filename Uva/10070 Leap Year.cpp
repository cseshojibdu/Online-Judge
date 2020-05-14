#include<stdio.h>
//verdict: WA, string problem
int main()
{
    unsigned long long int n,ly,hu,bu,i;
    FILE *f1;
    f1 = fopen("output.txt","w");
    while(scanf("%llu",&n)==1)
    {
        if(n==-1)break;
        ly = 0;
        hu = 0;
        bu = 0;
        if(n%400==0 ||(n%4==0 && n%100!=0))
            ly = 1;
        if(ly==1 && n%55==0)
            bu = 1;
        if(n%15==0)
            hu = 1;
        /*if(ly==1)printf("This is leap year.\n");
        if(hu==1)printf("This is huluculu festival year.\n");
        if(bu==1)printf("This is Buluculu festival year.\n");
        if(ly==0 && bu==0 && hu==0)printf("This is an ordinary year.\n");
        */
        if(ly==1)fprintf(f1,"This is leap year.\n");
        if(hu==1)fprintf(f1,"This is huluculu festival year.\n");
        if(bu==1)fprintf(f1,"This is buluculu festival year.\n");
        if(ly==0 && bu==0 && hu==0)fprintf(f1,"This is an ordinary year.\n");
        fprintf(f1,"\n");
    }
    fclose(f1);
    return 0;
}
