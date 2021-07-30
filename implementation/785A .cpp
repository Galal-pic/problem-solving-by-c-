#include <bits/stdc++.h>
using namespace std;
int main()
{
   int n;
   string x;
   cin>>n;
   long long sum=0;
   while(n--)
   {
       cin>>x;
       if(x=="Tetrahedron")
        sum+=4;
       else if (x=="Cube")
        sum+=6;
       else if (x=="Octahedron")
        sum+=8;
       else if(x=="Dodecahedron")
        sum+=12;
        else if(x=="Icosahedron")
            sum=sum+20;
   }
   cout<<sum<<endl;

    return 0;
}