#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    int ar[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        ar[i]=arr[i];
    }
    int a=0,b=0,c=0,x=0;
    sort(ar,ar+n);
    for(int i=0; i<n; i++)
    {
        if(ar[i]==1)
            a++;
        else if(ar[i]==2)
            b++;
        else if (ar[i]==3)
            c++;
        if(a>=1&&b>=1&&c>=1)
        {
            x++;
            a--;
            b--;
            c--;
        }
    }

    cout<<x<<endl;
    while(x--)
    {
        a=-1;
        b=-1;
        c=-1;
        for(int i=0; i<n; i++)
        {
            if(arr[i]==1)
            {
                a=i;
            }
            else if (arr[i]==2)
            {
                b=i;

            }
            else if (arr[i]==3)
            {
                c=i;
            }
            if(a!=-1&&b!=-1&&c!=-1)
            {
                arr[a]=0;
                arr[b]=0;
                arr[c]=0;
                cout<<a+1<<" "<<b+1<<" "<<c+1<<endl;
                break;

            }
        }
    }



    return 0;
}