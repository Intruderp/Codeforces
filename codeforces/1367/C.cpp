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
    int n,k;
    string s1,s;
    cin>>n>>k>>s;
    s1=s;
    int a[n],b[n],d=INT_MAX;
    loop(i,0,n)
    {
        if(s[i]=='1')
        d=i;
        a[i]=abs(i-d);
    }
    d=INT_MAX;
    rloop(i,n)
    {
        if(s[i]=='1')
        d=i;
        b[i]=abs(i-d);
    }
    d=INT_MAX;
    loop(i,0,n)
    {
        if(s[i]=='1')
        d=i;
        if(s[i]!='1')
        {
            if(a[i]>k && b[i]>k && abs(i-d)>k)
            {
                s[i]='1';
            }
        }
        if(s[i]=='1')
        d=i;
    }
    int ans=0;
    //cout<<s<<endl;
    loop(i,0,n)
    {
        if(s1[i]!='1' && s[i]=='1')
        ans++;
    }
    cout<<ans<<'\n';
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