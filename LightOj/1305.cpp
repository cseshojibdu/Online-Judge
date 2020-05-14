#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;

int main()
{
    long long int a1,a2,b1,b2,c1,c2,d1,d2, x, y,t,i, area;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>a1>>a2>>b1>>b2>>c1>>c2;
        if(b1-a1>=0)
        d1 = c1-(abs(b1)-abs(a1));
        else
        d1 = c1 +(abs(b1)-abs(a1));
    // d2 er value chinta korte hobe






        cout<<d1<<" "<<d2<<endl;
    }

    return 0;
}
