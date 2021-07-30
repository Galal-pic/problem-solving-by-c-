#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll n,k,m,x,y,s=0,ans=0;
bool valid(ll x,ll y)
{
    return x>0&&x<=n&&y>0&&y<=m;
}
int main()
{
    cin>>n>>m>>x>>y;
    cin>>k;
    while(k--)
    {
        s=0;
        ll l=0,r=1e9+9,a,b,mid;
        cin>>a>>b;
        while(l<=r)
        {
            mid=l+(r-l)/2;
            if(valid(x+(a*mid),y+(b*mid)))
            {
                s=mid;
                l=mid+1;
            }
            else
            {
                r=mid-1;
            }
        }
        ans+=s;
        x=(a*s)+x;
        y=(b*s)+y;
    }
    cout<<ans;

    return 0;
}