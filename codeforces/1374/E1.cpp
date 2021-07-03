#include<bits/stdc++.h>
#pragma GCC optimize("Ofast")
#pragma GCC optimize ("O3")
#pragma GCC target ("avx")
#define vi vector<int>
#define pii pair<int,int>
#define vpii vector<pair<int,int>>
#define F first
#define S second
#define mp map<int,int>
#define ump unordered_map <int,int>
#define ll long long int
#define pb push_back
#define mod 1000000007
#define int long long
#define pr(x) cout<<x<<'\n'; return ;
#define pry  cout<<"YES\n";return ;
#define prn  cout<<"NO\n"; return ;
#define all(v) v.begin(),v.end()
#define  loop(i,x,n) for(int i=x;i<n;i++)
#define rloop(i,n) for(int i=n-1;i>=0;i--)
#define test int t; cin>>t; while(t--)
using namespace std;
/*************************************************************************************************/
void solve()
{
    int n,k,k1=0,k2=0,x,y,z,n1,n2,n3,ans=0;
    vi v1,v2,v3;
    cin>>n>>k;
    loop(i,0,n)
    {
        cin>>x>>y>>z;
        k1+=y==1;
        k2+=z==1;
        if(y==1 and z==1)
        v3.pb(x);
        else if(y==1)
        v1.pb(x);
        else if(z==1)
        v2.pb(x);
    }
    if(k1<k or k2<k)
    {
        pr(-1)
    }
    k1=0,k2=0;
    sort(all(v1));
    sort(all(v2));
    sort(all(v3));
    n1=v1.size();
    n2=v2.size();
    n3=v3.size();
    if(n1==n2)
    {
        int kk=-1;
        loop(i,0,n1)
        {
            ans+=(v1[i]+v2[i]);
            k1++;
            k2++;
            kk=i;
            if(k1==k)
            break;
        }
        //cout<<ans<<endl;
        int j=0,i=kk;
        while(k1<k)
        {
            ans+=v3[j];
            k1++;
            j++;
        }
        while(j<n3 and i>=0)
        {
            x=v3[j];
            y=v2[i];
            z=v1[i];
            j++;
            i--;
            if(x<(z+y))
            ans+=(x)-(z+y);
        }
    }
    else if(n1>n2)
    {
        int kk=-1;
        loop(i,0,n2)
        {
            ans+=(v1[i]+v2[i]);
            k1++;
            k2++;
            kk=i;
            if(k1==k)
            break;
        }
        int j=0,i=kk;
        while(k1<k)
        {
            ans+=v3[j];
            k1++;
            j++;
        }
        while(j<n3 and i>=0)
        {
            x=v3[j];
            y=v2[i];
            z=v1[i];
            j++;
            i--;
            if(x<(z+y))
            ans+=(x)-(z+y);
        }    
    }
    else
    {
        int kk=-1;
         loop(i,0,n1)
        {
            ans+=(v1[i]+v2[i]);
            k1++;
            k2++;
            kk=i;
            if(k1==k)
            break;
        }
        int j=0,i=kk;
        while(k1<k)
        {
            ans+=v3[j];
            k1++;
            j++;
        }
        while(j<n3 and i>=0)
        {
            x=v3[j];
            y=v2[i];
            z=v1[i];
            j++;
            i--;
            if(x<(z+y))
            ans+=(x)-(z+y);
        }    
    }
    pr(ans)

} 
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}