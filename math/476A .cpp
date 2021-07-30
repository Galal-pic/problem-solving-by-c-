#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
int fact(int n)
{
    if(n==0||n==1)
        return 1;
        else
            return n*fact(n-1);
            }
int main()
{
    string x,y;
    cin>>x>>y;
    int a=0,b=0,c=0;
    for(int i=0; i<x.size(); i++)
    {
        if(x[i]=='+')
            a++;
        else
            a--;
    }
    for(int i=0; i<y.size(); i++)
    {
        if(y[i]=='+')
            b++;
        else if(y[i]=='-')
            b--;
        else
            c++;
    }
    if(!c)
    {
        if(b==a)
            cout<<"1.000000000000"<<endl;
        else
            cout<<"0.000000000000"<<endl;
    }
    else
    {
        int i=c+(a-b);
        if(i%2==0&&i/2>=0&&i/2<=c)
        {
            int ans=fact(c)/(fact(c-i/2)*fact(i/2));
            cout<<fixed <<setprecision(12)<<double(ans)/double(pow(2,c));
        }
        else
            cout<<"0.000000000000"<<endl;


    }










    return 0;
}