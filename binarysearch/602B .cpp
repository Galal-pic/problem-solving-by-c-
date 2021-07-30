#include<iostream>
using namespace std;
string ss;
#define ll long long
int main()
{
    int x,y;
    cin>>x;
    int arr[x];
    for(int i=0; i<x; i++)
        cin>>arr[i];
    int l=0,r=0,a,b,ans=0,q=0,flag=0,f=0;
    while(l<x&&r<x)
    {
        if(arr[r]==arr[l])
        {
            ans++;
            r++;
        }
        else if(arr[r]-1==arr[l]&&f==0)
        {
            r++;
            ans++;
            if(flag==0)
            {
                a=r-1;///0
            }
            flag=1;
        }
        else if (flag==0&&arr[r]+1==arr[l])
        {
            r++;
            ans++;
            if(f==0)
            {
                a=r-1;
            }
            f=1;
        }
        else
        {
            l=a;
            r=a+1;
            ans=1;
            f=0,flag=0;
        }
        q=max(ans,q);
    }
    cout<<q;
    return 0;

}


 