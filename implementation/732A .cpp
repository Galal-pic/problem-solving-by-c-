#include <bits/stdc++.h>
using namespace std;
#define fs ios_base::sync_with_stdio(false);    cin.tie(NULL);
int main()
{
    long long x,y;
    cin>>x>>y;
    int a=x,b=y,c=0;
    if((a%10==0)||(a%10==y))
    {
        cout<<"1"<<endl;
    }
    else
    {
        for(int i=1; 1; i++)
        {
            if((a%10==0)||(a%10==y))
                break;
            a=x*i;
            c++;

        }
        cout<<c<<endl;
    }

    return 0;
}