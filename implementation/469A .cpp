#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int n,a,c;
    cin>>n>>a;
    int freq[n+1]= {0};
    for(int i=0; i<a; i++)
    {
        cin>>c;
        freq[c]++;
    }
    int b;
    cin>>b;
    for(int i=0; i<b; i++)
    {
        cin>>c;
        freq[c]++;
    }
    int m=0;
    for(int i=1; i<=n;i++)
    {
        if(freq[i]==0)
        {
            m=1;
        }
    }
    if(m==0)
        cout<<"I become the guy."<<endl;
    else
        cout<<"Oh, my keyboard!"<<endl;






    return 0;
}

 