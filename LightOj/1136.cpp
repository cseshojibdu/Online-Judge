
#include<stdio.h>
#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int tc;
	cin>>tc;
	long long int a,b,i,j,nd,k,s,count;
	for(i=1;i<=tc;i++)
	{
	    count=0;
	    cin>>a>>b;

	   for(k=a;k<=b;k++)
	   {
	       s=k*(k+1)/2;
           if(s%3==0)count++;

	   }
	   cout<<"Case "<<i<<": "<<count<<endl;

	}

	return 0;
}
