#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    char arr[4][4];
    for(int i=0; i<4; i++)
    {
        for(int q=0; q<4; q++)
        {
            cin>>arr[i][q];
        }
    }
    int c=0,m=1;
    for(int i=0; i<3; i++)
    {
        for(int q=0; q<3; q++)
        {
            vector<char>v;
            int ch=0,ng=0;
            v.push_back(arr[i][q]);
            v.push_back(arr[i][q+1]);
            v.push_back(arr[i+1][q]);
            v.push_back(arr[i+1][q+1]);
            for(int i=0;i<4;i++)
            {
                if(v[i]=='#')
                    ch++;
                else
                    ng++;
            }
            if(ch>=3||ng>=3)
            {
                cout<<"YES"<<endl;
                m=0;
                break;
            }
        }
        if(m==0)
            break;
    }
    if(m==1)
        cout<<"NO"<<endl;
    return 0;
}
