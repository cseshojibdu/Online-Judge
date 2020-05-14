#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<iostream>
using namespace std;
int main()
{
    int t,x1,y1,x2,y2,c1,c2,tc,i;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        cin>>x1>>y1>>x2>>y2;
        cin>>tc;
        printf("Case %d:\n",i);
        while(tc--)
        {
            cin>>c1>>c2;
            if(c1>=x1 && c1<=x2 &&c2>=y1&&c2<=y2)
            printf("Yes\n");
            else
            printf("No\n");
        }

    }

    return 0;
}
