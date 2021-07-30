#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    long long n,a,b=1e9+8;
    cin>>n;
    string s;
    cin>>s;
    long long  arr[n];
    for(int i=0; i<n; i++)
        cin>>arr[i];
    for(int i=0; i<s.size()-1; i++)
    {
        if(s[i]=='R'&&s[i+1]=='L')
        {
            b=min(b,(arr[i+1]-arr[i])/2);
        }
    }
    if(b==1e9+8)
        cout<<"-1"<<endl;
    else
        cout<<b<<endl;

    return 0;
}
 