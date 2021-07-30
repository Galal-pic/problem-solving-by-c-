#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    int a[10000]={0};
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        a[arr[i]]=i+1;
    }
    for(int i=0;i<10000;i++)
    {
        if(a[i]!=0)
        cout<<a[i]<<" ";

    }



}