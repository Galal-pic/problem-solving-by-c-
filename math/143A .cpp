#include <bits/stdc++.h>
using namespace std;
int main()
{
    int r1,r2,c1,c2,d1,d2;
    cin>>r1>>r2>>c1>>c2>>d1>>d2;
    //if(r1==r2&&r2==c1&&c2==d1&&d1==d2)
    // cout<<"-1";
    //else
    {
        int x=0,a,b,c,d,m=0;
        for(int i=1; i<r1; i++)
        {
            if(i<d1&&i<c1)
            {
                x=r1-i;
                if(x<d2)
                {
                    if((d2-x)+i==c1)
                    {
                        a=i;
                        b=x;
                        c=d2-x;
                        d=(c1+c2)-(a+b+c);
                        m=1;
                        break;
                    }
                }

            }
        }

        if(m==0||a>9||a<1||b>9||b<1||c>9||c<1||d>9||d<1)
            cout<<"-1";
        else if (a==b||a==c||a==d||b==c||b==d||c==d)
            cout<<"-1";
        else if ((a+b)!=r1||(a+c)!=c1||(b+d)!=c2||(a+d)!=d1||(b+c)!=d2||(c+d)!=r2)
            cout<<"-1";

        else
            cout<<a<<" "<<b<<endl<<c<<" "<<d<<endl;




    }



    return 0;
}