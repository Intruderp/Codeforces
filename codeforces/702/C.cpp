#include<bits/stdc++.h>
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
#define pr1 cout<<-1<<endl; return ;
#define all(v) v.begin(),v.end()
#define  loop(i,x,n) for(int i=x;i<n;i++)
#define rloop(i,n) for(int i=n-1;i>=0;i--)
#define test int t; cin>>t; while(t--)
using namespace std;
/*************************************************************************************************/
void solve()
{
    int n,m;
    cin>>n>>m;
    vi v1(n),v2(m);
    loop(i,0,n)
    cin>>v1[i];
    loop(i,0,m)
    cin>>v2[i];
    sort(all(v2));
    int ans=0;
    for(int i:v1)
    {
        auto it=lower_bound(v2.begin(),v2.end(),i);
        if(it==v2.end())
        {
            it--;
            ans=max(ans,abs(*it-i));
        }
        else if(it==v2.begin())
        ans=max(ans,abs(*it-i));
        else
        {
            int a,b;
            a=abs(*it-i);
            it--;
            b=abs(*it-i);
            ans=max(ans,min(a,b));
        }
    }
    cout<<ans;
} 
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    //test
    solve();
    return 0;
}