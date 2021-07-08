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
    int n,p,ans=0,c=0,i,j,x1=-1,x2,y1,y2;
    cin>>n>>p;
    p--;
    string s;
    char c1,c2;
    cin>>s;
    i=0,j=n-1;
    while(i<=j)
    {
        if(s[i]!=s[j])
        {
            if(x1==-1)
            {
                x1=i;
                x2=j;
            }
            y1=i;
            y2=j;
            c++;
            c1=s[i];
            c2=s[j];
            if(c1>c2)
            swap(c1,c2);
            ans+=min(c2-c1,'z'-c2+c1-'a'+1);
        }
        i++;
        j--;
    }
    if(c==1)
    ans+=min(abs(x1-p),abs(x2-p));
    else if(c>=2)
    {
        int d1,d2;
        if(p<=x1)
        ans+=y1-p;
        else if(p>=x2)
        ans+=p-y2;
        else if(p>=x1 and p<=y1)
        {
            d1=min(p-x1,y1-p);
            d2=max(p-x1,y1-p);
            ans+=2*d1+d2;
        }
        else if(p>=y1 and p<=y2)
        ans+=min(p-x1,x2-p);
        else if(p>=y2 and p<=x2)
        {
            d1=min(p-y2,x2-p);
            d2=max(p-y2,x2-p);
            ans+=d1*2+d2;
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