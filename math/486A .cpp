#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long x;
    cin>>x;
    if(x%2==0)
        cout<<x/2<<endl;
    else
    {
        long long  c=(x+1)/2;
        cout<<"-"<<c<<endl;

    }
    return 0;
}