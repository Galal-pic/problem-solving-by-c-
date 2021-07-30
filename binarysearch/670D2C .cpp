#include<iostream>
using namespace std;
string ss;
#define ll long long
ll x,y;
ll arr[1000000],sal[1000000];
bool valid(ll mid,ll r)
{
    for(int i=0; i<x; i++)
    {
        if(mid*arr[i]>sal[i])
            r=r-((mid*arr[i])-sal[i]);
        if(r<0)
            return 0;
    }
    return 1;
}
int main()
{
    cin>>x>>y;
    for( ll i=0; i<x; i++)
        cin>>arr[i];
    for( ll i=0; i<x; i++)
        cin>>sal[i];
    ll l=0,r=10000000000,mid,ans=0;
    while(l<=r)
    {
        mid=(l+r)/2;
        if(valid(mid,y))
        {
            ans=mid;
            l=mid+1;
        }
        else
            r=mid-1;
    }

cout<<ans;

    return 0;

}