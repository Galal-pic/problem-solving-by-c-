#include <bits/stdc++.h>
using namespace std;
#define out(x) cout<<x<<"\n"
#define outarr(arr,n) for(int i=0;i<n;i++) cout<<arr[i]<<" "; cout<<endl;
#define ll long long
void binar(int arr[],int l,int r,int c,int n)
{
    while(l<=r)
    {
        int mid=(l+r)/2;
        if(arr[mid]<=n)
        {

            c=c+(mid-l)+1;
            l=mid +1;
        }
         else
        {
            r=mid -1;
        }

    }
    cout<<c<<endl;
}
int main()
{
    int n,t;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
        cin>>arr[i];
    sort(arr,arr+n);
    cin>>t;
    while(t--)
    {
        int b;
        cin>>b;
        int c=0;
        binar(arr,0,n-1,c,b);
    }
    return 0;
}