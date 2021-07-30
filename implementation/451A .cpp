#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n,c=0,l=0,r=0;
    cin>>n;
    long long arr[n],arr2[n],arr3[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        arr2[i]=arr[i];
    }
    sort(arr2,arr2+n);
    for(int i=0; i<n; i++)
    {
        if(arr[i]!=arr2[i])
        {
            l=i;
            break;
        }
    }
    for(int i=n-1; i>=0; i--)
    {
        if(arr[i]!=arr2[i])
        {
            r=i;
            break;
        }
    }
    int q=r;
    for(int i=l; i<=r; i++)
    {
        arr3[i]=arr[q];
        q--;
    }
    for(int i=l; i<=r; i++)
    {
        arr[i]=arr3[i];
    }
    for(int i=0; i<n; i++)
    {
        if(arr[i]!=arr2[i])
        {
            cout<<"no"<<endl;
            return 0;
        }
    }
    cout<<"yes"<<endl;

    cout<<l+1<<" "<<r+1<<endl;


    return 0;
}