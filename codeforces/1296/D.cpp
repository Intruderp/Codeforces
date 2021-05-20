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
    int n,a,b,k,cy,r,x,y;
    cin>>n>>a>>b>>k;
    int h[n];
    loop(i,0,n)
    cin>>h[i];
    pair<int,int> p[n];
    loop(i,0,n)
    {
        if(h[i]%(a+b)==0)
        {
            cy=h[i]/(a+b);
            cy--;
            r=h[i]-(cy*(a+b));
            x=r/a;
            if(r%a)
            x++;
            p[i].first=x-1;
            p[i].second=i;
        }
        else
        {
            cy=h[i]/(a+b);
            r=h[i]-cy*(a+b);
            x=r/a;
            if(r%a)
            x++;
            p[i].first=x-1;
            p[i].second=i;
        }
    }
    sort(p,p+n);
    int ans=0;
    loop(i,0,n)
    {
        if(k>=p[i].first)
        {
            ans++;
            if(p[i].first>0)
            k-=p[i].first;
            //cout<<p[i].first<<' '<<p[i].second<<' '<<endl;
        }
    }
    cout<<ans<<'\n';

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