#include <bits/stdc++.h>
using namespace std;
const int AKA=5e5+5;
double arr[AKA];
int main()
{
 int n;
 cin>>n;
 for(int i=0;i<n;++i)
    cin>>arr[i];
   sort(arr,arr+n);
    double r1=arr[n-1];
    int m;
 cin>>m;
 for(int i=0;i<m;++i)
        cin>>arr[i];
    sort(arr,arr+m);
    double p1=arr[m-1];
    int k;
    cin>>k;
 for(int i=0;i<k;++i)
        cin>>arr[i];
    sort(arr,arr+k);
    double p2=arr[0];
    double A , B ;
    cin>>A>>B;
    double ans=((double)B*p1*r1*r1)/((double)A*p2+B*p1);
    cout<<fixed<<setprecision(8)<<sqrt(ans);

}