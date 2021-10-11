#include <bits/stdc++.h>
using namespace std;
#define out(x) cout<<x<<"\n"
#define outarr(arr,n) for(int i=0;i<n;i++) cout<<arr[i]<<" "; cout<<endl;
#define ll long long
int main()
{
    ll n,t,sum=0,i=0,c=0,f=0;
    cin>>n>>t;
    ll arr[n];
    for(ll i=0; i<n; i++)
        cin>>arr[i];
    int s=0,r=0;
    while(s<n|r<n-1)
    {
        if(sum<=t)
        {
            sum=sum+arr[r];
            c++;
            r++;
            f=max(f,c);
        }
        else
        {
            sum=sum-arr[s];
            s++;
            c--;
        }

    }
    cout<<f-1;




    return 0;
}