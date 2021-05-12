#include<bits/stdc++.h>
#define vi vector<int>
#define mp map<int,int>
#define ump unordered_map <int,int>
#define ll long long int
#define pb push_back
#define mod 1000000007
#define int long long
#define  loop(i,x,n) for(int i=x;i<n;i++)
#define rloop(i,n) for(int i=n-1;i>=0;i--)
#define test int t; cin>>t; while(t--)
using namespace std;
/*************************************************************************************************/
void solve()
{
} 
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,ans=0,sum=0;
    cin>>n;
    vi v(n),v2(n,0);
    set<int> s;
    loop(i,0,n)
    cin>>v[i];
    rloop(i,n)
    {
        s.insert(v[i]);
        v2[i]+=s.size();
    }
    s.clear();
    for(int i=0;i<n-1;i++)
    {
        if(s.count(v[i]))
        continue;
        s.insert(v[i]);
        ans+=v2[i+1];
    }
    cout<<ans;
    return 0;
}