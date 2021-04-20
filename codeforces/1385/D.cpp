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
string s;
int d(int l,int r,char c)
{
    int ans=0;
    for(int i=l;i<=r;i++)
    {
        if(s[i]!=c)
        ans++;
    }
    return ans;
}
int good(int l,int r,char c)
{
    if(l==r)
    {
        if(s[l]==c)
        return 0;
        else 
        return 1;
    }
    int mid=(l+r)/2;
    return min(d(l,mid,c)+good(mid+1,r,c+1),d(mid+1,r,c)+good(l,mid,c+1));
}
// complexity=n*log(n) => n=for matching the char with string s, and log(n)=> for recursive calls                                                                                               
void solve()
{
    int n;
    //string s;
    cin>>n>>s;
    cout<<good(0,n-1,'a')<<'\n';
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    test
    solve();
    //cout<<log2(131072);
    return 0;
}