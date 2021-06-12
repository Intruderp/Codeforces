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
#define all(v) v.begin(),v.end()
#define  loop(i,x,n) for(int i=x;i<n;i++)
#define rloop(i,n) for(int i=n-1;i>=0;i--)
#define test int t; cin>>t; while(t--)
using namespace std;
/*************************************************************************************************/
void solve()
{
    int n,x,y;
    string s,ans,a1,a2;
    cin>>n>>s;
    ans=s;
    a1=s;
    for(char c='0';c<='9';c++)
    {
        x=c-'0';
        y=x;
        a1=s;
        for(int i=0;i<n;i++)
        {
            y=x;
            while(y--)
            {
                if(a1[i]=='9')
                a1[i]='0';
                else
                a1[i]++;
            }
        }
        x=n+5;
        while(x--)
        {
            a2=a1[n-1]+a1.substr(0,n-1);
            ans=min(ans,a2);
            a1=a2;
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