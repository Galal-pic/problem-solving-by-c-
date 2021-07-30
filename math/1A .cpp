#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long x,y,z; cin>>x>>y>>z;
    long long  c=x/z;
    long long  t=y/z;
    if(x%z!=0)
    c++;
    if(y%z!=0)
        t++;
    cout<<c*t<<endl;


    return 0;
}