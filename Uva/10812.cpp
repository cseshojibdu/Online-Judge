#include<cstdio>
#include<iostream>
using namespace std;
// Accepted
int main()
{
    unsigned long long int t,a,b,s,d;

    cin>>t;
    while(t--)
    {
        cin>>s>>d;
        a=(s+d)/2;
        b = (s-d)/2;
        if(s<d)cout<<"impossible"<<endl;
        else if((s-d)%2==1)cout<<"impossible"<<endl;
        else cout<<a<<" "<<b<<endl;
    }
    return 0;
}
