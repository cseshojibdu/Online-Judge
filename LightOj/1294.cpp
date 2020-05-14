#include<stdio.h>
#include<math.h>
#include<iostream>
using namespace std;

int main()
{
    long long int sum,s,i,j,n,m,c;
    int t,power;
    cin>>t;
    for(i=1;i <=t;i++)
    {
        cin>>n>>m;

        sum = 0;
        c=1;
        power= -1;

        for(j=1;j<=n;j++)
        {

            s = power*j;
            sum = sum+s;
            if((c%m)==0)
                power = power*(-1);
            c++;
        }
        cout<<"Case "<<i<<": "<<sum<<endl;
    }
    return 0;
}
