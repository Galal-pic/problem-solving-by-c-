#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string x;
    cin>>x;
    vector<int> v;
    for(int i=0; i<x.size(); i++)
    {
        if(x[i]!='+')
        {
            int a=x[i]-'0';
            v.push_back(a);
        }
    }
    sort(v.begin(),v.end());
    for(int i=0; i<v.size(); i++)
    {
        cout<<v[i];
        if(i<v.size()-1)
            cout<<"+";
    }



    return 0;
}