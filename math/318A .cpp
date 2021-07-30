#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    long long  a,b,c;
    cin>>a>>b;
    if(a%2!=0)
    {
        c=(a/2)+2;
    }
    else
    {
        c=(a/2)+1;
    }
    if(b<c)
    {
        b=(b+(b-1));
        cout<<b<<endl;
    }
    else
    {
        b=(b-(c-1))*2;
        cout<<b<<endl;

    }





    return 0;
}

 