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
vi v,a,b;
void solve()
{
    string s;
    int n,k;
    cin>>n>>k>>s;
    for(int i=0;i<n;i++)
    {
        int count=0;
        char c=s[i];
        while(s[i]==c)
        {
            i++;
            count++;
        }
        i--;
        if(c=='b')
        count*=-1;
        v.pb(count);
    }
    int x=0,y=0,ans=0;
    for(int i:v)
    {
        if(i>0)
        x+=i;
        else 
        y+=abs(i);
        a.pb(x);
        b.pb(y);
    }
    // for(int i:v)
    // cout<<i<<' ';
    // cout<<endl;
    // for(int i:a)
    // cout<<i<<' ';
    // cout<<endl;
    // for(int i:b)
    // cout<<i<<' ';
    // cout<<endl;cout<<endl;
    for(int i=0;i<v.size();i++)
    {
        if(v[i]<0)
        continue;
        x=k;
        y=0;
        if(i>0)
        x+=b[i-1],y=b[i-1];
        auto it=upper_bound(all(b),x);
        it--;
        int local_ans=0;
        local_ans+=max(*it-y,min(k,n-i));
        x=it-b.begin();
       // cout<<"itr "<<*it<<' '<<x<<' '<<a[x]<<endl;
        local_ans+=a[x];
        if(i>0)
        local_ans-=a[i-1];
        ans=max(ans,local_ans);
    }
    //cout<<ans<<endl;
    for(int i=0;i<v.size();i++)
    {
        if(v[i]>0)
        continue;
        x=k;
        y=0;
        if(i>0)
        x+=a[i-1],y=a[i-1];
        auto it=upper_bound(all(a),x);
        it--;
        int local_ans=0;
        local_ans+=max(*it-y,min(k,n-1));
        y=it-a.begin();
        //cout<<"itr "<<*it<<' '<<x<<' '<<b[y]<<endl;
        local_ans+=b[y];
        if(i>0)
        local_ans-=b[i-1];
        ans=max(ans,local_ans);
    }
    int sz=v.size();
    if(min(a[sz-1],b[sz-1])<=k)
    ans=n;
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