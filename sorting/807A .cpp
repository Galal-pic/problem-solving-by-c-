#include <bits/stdc++.h>
#define FF ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
struct comp
{
    bool operator()(int const &i, int const &j) const
    {
        return i > j;
    }
};
int main()
{
    FF
    int n;
    cin>>n;
    int array[n];
    int arr[n];
    int t1[n];
    int t2[n];
    for(int i=0; i<n; i++)
    {
        cin>>array[i]>>arr[i];
        t1[i]=array[i];
        t2[i]=arr[i];
    }
    sort(t1,t1+n, comp());
    sort(t2,t2+n, comp());
    int c=1,a=1;
    for(int i=0; i<n; i++)
    {
        if(array[i]!=arr[i])
            c=0;
        if(array[i]!=t1[i]&&arr[i]!=t2[i])
            a=0;
    }

    if (c==0)
        cout<<"rated"<<endl;
    else if(c==1&&a==1)
        cout<<"maybe"<<endl;
        else if (c==1&&a==0)
            cout<<"unrated"<<endl;




}
 