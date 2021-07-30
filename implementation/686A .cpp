#include <iostream>
using namespace std;
int main()
{
    long long  a,b;
    cin>>a>>b;
    char x;
    long long  sum=b,c=0;
    for(int i=0;i<a;i++)
    {
        cin>>x>>b;
        if(x=='+')
            sum=sum+b;
        else
        {
            if(sum>=b)
                sum=sum-b;
            else
                c++;
        }
    }
    cout<<sum<<" "<<c<<endl;

    return 0;
}