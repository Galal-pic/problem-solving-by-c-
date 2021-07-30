#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int n;
    cin>>n;
    int arr[n];
    ll sum=0;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        sum=sum+arr[i];
    }
    sort(arr,arr+n,greater<>());
    int x=0,c=0;

    for(int i=0; i<n; i++)
    {
        x=x+arr[i];
        sum=sum-arr[i];
        c++;
        if(x>sum)
        {
            cout<<c<<endl;
            break;
        }
    }



    return 0;
}

 