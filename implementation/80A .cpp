#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long a,y;
    cin>>a>>y;
    vector<int> v;
    int m=0;
    for(int i=2; i<y; i++)
    {
        if(y%i==0)
        {
            m=1;
            break;
        }
    }
    if(m==1)
        cout<<"NO"<<endl;
    else
    {
        for(int i=2; i<y; i++)
        {
            int c=0;
            for(int x=2; x<i; x++)
            {
                if(i%x==0)
                {
                    c=1;
                    break;
                }
            }
            if(c==0)
                v.push_back(i);
        }
        v.push_back(y);
        for(int i=0; i<v.size(); i++)
        {
            if(v[i]==a)
            {
                if(v[i+1]==y)
                    cout<<"YES"<<endl;
                else
                    cout<<"NO"<<endl;
                break;
            }

        }
    }


    return 0;
}