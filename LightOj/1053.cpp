#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{

    long long int a,s,d;
    int t,i;
    cout<<a;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>a>>s>>d;
        if(a*a+s*s == d*d || d*d+s*s == a*a || a*a+d*d == s*s)
            printf("Case %d: yes\n",i);

        else
        printf("Case %d: no\n",i);
    }
    return 0;
}
