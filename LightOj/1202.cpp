#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;

int main()
{
    long double div1,div2,max,a,s,d,f;
    int t,i;

    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>a>>s>>d>>f;
        div1 = (a-d)/(s-f);
        cout<<div1<<" ";
        div2 = (s-f)/(a-d);
        cout<<div2<<" ";
        if(div1>div2)
        max = div1;
        else
        max = div2;

        cout<<" "<<max;



    }
    return 0;
}
