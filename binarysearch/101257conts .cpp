#include <iostream>
using namespace std;
#define out(x) cout<<x<<"\n"
#define outarr(arr,n) for(int i=0;i<n;i++) cout<<arr[i]<<" "; cout<<endl;
inline void fast()
{
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
}
int main()
{
    fast();
    long long  n,x,y,ans=-1,z;
    cin>>n>>x>>y;
    long long l=0,r=1e18;
    while(l<=r)
    {
        long long mid=(r+l)/2;
        z=(mid/x)+(mid/y);
        if(z>=n)
        {
            ans=mid ;
            r=mid-1;
        }
        else
        {
            l=mid+1;
        }
    }
    cout<<ans<<endl;


    return 0;
}