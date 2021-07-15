#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long  usb,ps2,all,n,sum=0,c=0,a;
    string s;
    cin>>usb>>ps2>>all;
    cin>>n;
    vector<long long >vusb,vps2,vall;
    for(int i=0; i<n; i++)
    {
        cin>>a>>s;
        if(s=="USB")
        {
            vusb.push_back(a);
        }
        else
        {
            vps2.push_back(a);
        }
    }
    sort(vusb.begin(),vusb.end());
    sort(vps2.begin(),vps2.end());
    int st=0;
    int eu=vusb.size();
    for(st=0; st<eu&&usb!=0; st++)
    {
        sum=sum+vusb[st];
        usb--;
        c++;
    }
    int stt=0,enn=vps2.size();
    for(stt=0; stt<enn&&ps2!=0; stt++)
    {
        sum=sum+vps2[stt];
        ps2--;
        c++;
    }
    while(all!=0&&st<eu&&stt<enn)
    {
        if(vusb[st]<vps2[stt])
        {
            sum=sum+vusb[st];
            st++;
            all--;
            c++;
        }
        else
        {
            sum=sum+vps2[stt];
            stt++;
            all--;
            c++;
        }
    }

    while(all!=0&&st<eu)
    {
        sum=sum+vusb[st];
        st++;
        all--;
        c++;
    }
    while(all!=0&&stt<enn)
    {
        sum=sum+vps2[stt];
        stt++;
        all--;
        c++;
    }
    cout<<c<<" "<<sum;

    return 0;
}
 