#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long  a,b,c,d;
    cin>>c>>d;
    a=min(c,d);
    b=max(c,d);
    if(a%2!=0)
        a++;
    if(abs(a-b)<2)
        cout<<"-1"<<endl;
    else
    {
        cout<<a<<" "<<a+1<<" "<<a+2<<endl;

    }



    return 0;
}


 