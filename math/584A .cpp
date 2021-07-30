#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    long long n,m,a;
    cin>>n>>a;
    m=log10(a)+1;
    if(n<m)
    {
        cout<<"-1"<<endl;
    }
    else
    {
        int arr[n];
        for(int i=0; i<n; i++)
        {
            if(i==0)
            {
                if(a==10)
                    arr[i]=1;
                else
                arr[i]=a;
            }
            else
            {
                arr[i]=0;
            }
        }
        for(int i=0; i<n; i++)
        {
            cout<<arr[i];
        }

    }

    return 0;
}