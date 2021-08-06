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
int ans,n;
int sq(int x)
{
    return x*x;
}
void check(vi v1,vi v2,vi v3)
{
    int local_ans=0,x,y,z,a,b,c;
    for(int i=0;i<v1.size();i++)
    {
        x=v1[i];
        auto it=lower_bound(all(v2),x);
        auto it2=lower_bound(all(v3),x);
        if(it==v2.end())
        {
            it--;
            y=*it;
        }
        else if(*it==x)
        y=x;
        else 
        {
            a=*it;
            if(it!=v2.begin())
            it--;
            b=*it;
            if(abs(a-x)>abs(b-x))
            y=b;
            else 
            y=a;
        }
        if(it2==v3.end())
        {
            it2--;
            z=*it2;
        }
        else if(*it2==x)
        z=x;
        else 
        {
            a=*it2;
            if(it2!=v3.begin())
            it2--;
            b=*it2;
            if(abs(a-x)>abs(b-x))
            z=b;
            else 
            z=a;
        }
        local_ans=sq(x-y)+sq(z-x)+sq(y-z);
        ans=min(ans,local_ans);
        //cout<<x<<' '<<y<<' '<<z<<endl;
    }

}
void solve()
{
    ans=5*1e18;
    int n1,n2,n3;
    cin>>n1>>n2>>n3;
    vi v1(n1),v2(n2),v3(n3);
    loop(i,0,n1)
    cin>>v1[i];
    loop(i,0,n2)
    cin>>v2[i];
    loop(i,0,n3)
    cin>>v3[i];
    sort(all(v1));
    sort(all(v2));
    sort(all(v3));
    check(v1,v2,v3);
    check(v2,v1,v3);
    check(v3,v2,v1);
    pr(ans)
    
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