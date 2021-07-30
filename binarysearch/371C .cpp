#include<iostream>
using namespace std;
string ss;
#define ll long long
ll b=0,s=0,c=0,nb,nc,ns,pb,pc,ps,x;
bool valid(ll m,ll r)
{
    /// 2 4
    if(m*s<=ns&&m*c<=nc&&m*b<=nb)
    {
        return true;
    }
    if(m*b>nb)
        r=r-((m*b)-nb)*pb;
    if(m*s>ns)
        r=r-((m*s)-ns)*ps;
    if(m*c>nc)
        r=r-((m*c)-nc)*pc;
    if (r<0)
        return 0;
    else
        return true;
}
int main()
{
    cin>>ss;
    cin>>nb>>ns>>nc;
    cin>>pb>>ps>>pc;
    cin>>x;
    for(int i=0; i<ss.size(); i++)
    {
        if(ss[i]=='S')
            s++;
        else if (ss[i]=='B')
            b++;
        else
            c++;
    }
    ll l=0,r=x+1000;
    ll ans;
    while(l<=r)
    {
        ll mid =(l+r)/2;
        if(valid(mid,x))
        {
            ans=mid;
            l=mid+1;
        }
        else
        {
            r=mid-1;
        }

    }
    cout<<ans;
    return 0;

}