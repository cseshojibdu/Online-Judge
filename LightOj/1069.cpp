#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<iostream>
using namespace std;
int main()
{
    int t,lift,me,i,time;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>me>>lift;
        time = 9+(abs(me-lift)*4)+10+me*4;
        cout<<"Case "<<i<<": "<<time<<endl;

    }

    return 0;
}
