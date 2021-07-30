#include <bits/stdc++.h>
using namespace std;
#define fs ios_base::sync_with_stdio(false);    cin.tie(NULL);

int main()
{
    fs
    int arr[4];
    for(int i=0; i<4; i++)
    {
        cin>>arr[i];
    }
    string x;
    cin>>x;
    long long sum=0;
    for(int i=0; i<x.size(); i++)
    {
        sum+=arr[(x[i]-'0')-1];
    }
    cout<<sum<<endl;


    return 0;
}