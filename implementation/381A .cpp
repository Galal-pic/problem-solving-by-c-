#include <iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    int sereja=0,dima=0;
    for(int i  = 0; i<n; i++)
    {
        cin>>arr[i];
    }
    int x =  n -1;
    int z=0;
    for(int i = 0; i<n; i++)
    {
        if(i%2 == 0)
        {
            if(arr[z] > arr[x])
            {
                sereja+=arr[z];
                z++;
            }
            else
            {
                sereja+=arr[x];
                x--;
            }
        }
        else
        {
            if(arr[z] > arr[x])
            {
                dima+=arr[z];
                z++;
            }
            else
            {
                dima+=arr[x];
                x--;
            }
        }
    }
    cout << sereja << " " << dima << endl;
    return 0;
}