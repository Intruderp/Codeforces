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
string x,y;
int a[200000],n;
bool isSubsequence(string &ans)
{
    int i=0,j=0;
    while(i<ans.length() and j<y.length())
    {
        if(ans[i]==y[j])
        j++;
        i++;
    }
    return j==y.length();
}
bool check(int mid)
{
    unordered_set<int> s;
    loop(i,0,mid+1)
    s.insert(a[i]-1);
    string ans;
    loop(i,0,n)
    {
        if(!s.count(i))
        ans.pb(x[i]);
    }
    return isSubsequence(ans);
    
}
void solve()
{
    cin>>x>>y;
    int ans=-1,h,l,mid;
    n=x.length();
    l=0,h=n-1;
    loop(i,0,n)
    cin>>a[i];
    while(h>=l)
    {
        mid=(h+l)/2;
        if(check(mid))
        {
            ans=mid;
            l=mid+1;
        }
        else
        h=mid-1;
    }
    pr(ans+1)
} 
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}