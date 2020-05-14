#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
    double x,ratioPos,ratioNeg,ratioZero;
    int pos=0,neg=0,zero=0;
    int n,i;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>x;
        if(x==0)zero++;
        else if(x<0)neg++;
        else pos++;
    }
    printf("%.6lf\n%.6lf\n%.6lf\n",(double)pos/n,(double)neg/n,(double)zero/n);
    return 0;
}
