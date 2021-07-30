#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,a;
    cin>>n>>a;
    int m=0;
    int arr[n][2];
    for(int i=0; i<n; i++)
    {
        for(int q=0; q<2; q++)
            cin>>arr[i][q];
    }
    int freq[7]= {0};
    freq[a]=1;

    for(int i=0; i<n; i++)
    {
        int c=0;
        for(int q=0; q<2; q++)
        {
            int x=arr[i][q];
            freq[x]++;
            freq[abs(x-7)]++;
        }
        int value=0;
        int index=0;
         m=0;
        for(int w=1; w<=6; w++)
        {
            if(freq[w]==0)
            {
                c++;
                 index=w;
            }
        }
        if(c>1)
        {
            m=1;
            break;
        }
        else
        {
            memset(freq, 0, sizeof(freq));
            freq[index]=1;
        }
    }
    if(m==0)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;




    return 0;
}
 