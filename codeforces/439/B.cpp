#include<bits/stdc++.h>
#define int long long 
using namespace std;
signed main()
{
    int n,x,ans=0;
    cin>>n>>x;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    for(int i=0;i<n;i++)
    {
        ans+=x*a[i];
        if(x>1)
        x--;
    }
    cout<<ans;
    return 0;
}