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
    int n,k;
    cin>>n>>k;
    string s1,s2,s;
    char a[]={'S','E','T'};
    vector<string> v;
    loop(i,0,n)
    {
        cin>>s;
        v.pb(s);
    }
    sort(v.begin(),v.end());
    int ans=0;
    for(int i=0;i<n;i++)
    {
        s1=v[i];
        for(int j=i+1;j<n;j++)
        {
            s2=v[j];
            s.clear();
            for(int x=0;x<s2.length();x++)
            {
                if(s2[x]==s1[x])
                s.pb(s2[x]);
                else
                {
                    for(char c:a)
                    {
                        if(c!=s2[x] && c!=s1[x])
                        s.pb(c);
                    }
                }
            }
            if(binary_search(v.begin(),v.end(),s))
            ans++;
        }
    }
    cout<<ans/3;
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