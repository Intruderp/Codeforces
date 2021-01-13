#include<bits/stdc++.h>
#define int long long
using namespace std;
signed main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    int steps=0;
    sort(a,a+n);
    for(int i=0;i<n;i++)
    {
        if(a[i]==i+1)
        continue;
        else
        {
            steps+=abs(i+1-a[i]);
        }
        
    }
    cout<<steps;
    return 0;

}