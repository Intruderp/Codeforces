#include<bits/stdc++.h>
#define int long long
using namespace std;
signed main()
{
    int q,n,m;
    cin>>q;
    while(q--)
    {
        cin>>n>>m;
        int a[11],sum=0;
        a[0]=0;
        for(int i=1;i<=10;i++)
        {
            sum+=(m*i)%10;
            a[i]=sum;
           // cout<<a[i]<<' ';
        }
        int ans,p,t,r;
        p=n/m;
        t=p/10;
        r=p%10;
        //cout<<endl<<p<<' '<<t<<' '<<r<<' ';
        //cout<<sum<<' ';
        ans=t*sum+a[r];
        cout<<ans<<endl;

    }
    return 0;
}