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
    int n,s1=0,s2=0,m,ans=0,x,y;
    cin>>n;
    int a[n];
    loop(i,0,n)
    {
        cin>>a[i];
        s1+=a[i];
    }
    cin>>m;
    int b[m];
    loop(i,0,m)
    {
        cin>>b[i];
        s2+=b[i];
    }
    if(s1!=s2)
    {
        pr(-1)
    }
    int i=0,j=0;
    while(i<n and j<m)
    {
        if(a[i]==b[j])
        {
            i++;
            j++;
            ans++;
        }
        else 
        {
            s1=0,s2=0;
            s1=a[i];
            s2=b[j];
            ans++;
            x=i;
            y=j;
            while(s1!=s2)
            {
                if(s1>s2)
                j++;
                else 
                i++;
                if(i!=x)
                s1+=a[i];
                else 
                s2+=b[j];
                x=i;
                y=j;
            }
            i++;
            j++;
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