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
    int n,ans=0,sum=0,k=-1;
    string s;
    cin>>s;
    n=s.length();
    loop(i,0,n)
    {
        int x=0;
        sum+=s[i]-'0';
        for(int j=i;j>k;j--)
        {
            x+=(s[j]-'0');
            if(x%3==0)
            {
                ans++;
                k=i;
                break;
            }
        }
    }
    cout<<ans;
} 
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
   // test
    solve();
    return 0;
}