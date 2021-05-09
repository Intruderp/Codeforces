#include<bits/stdc++.h>
#define vi vector<int>
#define ma map<int,int>
#define uma unordered_map <int,int>
#define ll long long int
#define pb push_back
#define mod 1000000007
#define int long long
#define  loop(i,x,n) for(int i=x;i<n;i++)
#define rloop(i,n) for(int i=n-1;i>=0;i--)
#define test int t;cin>>t; while(t--)
#define mp make_pair
#define pr pair<int,int>
using namespace std;
/*************************************************************************************************/
                                                                                                   
void solve()
{
    int n,x,y,mx=0,s;
    cin>>n;
    int a[n];
    loop(i,0,n)
    cin>>a[i];
    unordered_map<int,vi> m;
    loop(i,0,n)
    {
        cin>>x;
        m[a[i]].pb(x);
    }
    for(auto &it:m)
    {
        sort(it.second.rbegin(),it.second.rend());
        s=it.second.size();
        for(int i=1;i<s;i++)
        {
            it.second[i]+=it.second[i-1];
        }
    }
    int ans[n]={0};
    for(auto &it:m)
    {
        for(int i=1;i<=it.second.size();i++)
        {
            x=it.second.size()/i;
            y=i*x;
            if(y==0)
            break;
            ans[i-1]+=it.second[y-1];
        }
    }
    for(int i:ans)
    cout<<i<<' ';
    cout<<'\n';

    
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