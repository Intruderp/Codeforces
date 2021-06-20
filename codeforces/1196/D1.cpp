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
char a[]={'R','G','B'};
string fun(int n,int i)
{
    string s;
    while(n--)
    {
        s.pb(a[i]);
        i++;
        i=i%3;
    }
    return s;
}

void solve()
{
    int n,k,ans=INT_MAX,local_ans=0;
    string s,s2,s3;
    cin>>n>>k>>s;
    for(int i=0;i<n;i++)
    {
        if(i+k>n)
        break;
        s2=s.substr(i,k);
        for(int j=0;j<3;j++)
        {
            s3=fun(k,j);
            local_ans=0;
            for(int in=0;in<k;in++)
                local_ans+=s3[in]!=s2[in];
            ans=min(ans,local_ans);
        }
    }
    pr(ans);
} 
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    test
    solve();
    return 0;
}