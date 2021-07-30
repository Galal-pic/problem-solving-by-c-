#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    char c;
    int x=0;
    for(int i=0;i<a*b;i++)
    {
        cin>>c;
        if(c=='C'||c=='M'||c=='Y')
            x=1;
    }
    if(x==1)
        cout<<"#Color"<<endl;
    else
        cout<<"#Black&White"<<endl;
    return 0;
}