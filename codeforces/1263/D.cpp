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
vector<char> v[26];
int vis[27];
void dfs(int n)
{
    vis[n]=1;
    for(auto child:v[n])
    {
        if(vis[child-'a']==0)
        dfs(child-'a');
    }
}                                                                                 
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin>>n;
    string a[n];
    loop(i,0,n)
    cin>>a[i];
    loop(i,0,n)
    {
        string s=a[i];
        int k=s[0]-'a';
        for(int j=1;j<s.length();j++)
        {
            bool b=true;
            for(auto it:v[k])
            {
                if(it==s[j])
                {
                    b=false;
                    break;
                }
            }
            if(b)
            {
                v[k].pb(s[j]);
                v[s[j]-'a'].pb(s[0]);
            }
        }
                v[k].pb(s[0]);
    }
    // for(int i=0;i<26;i++)
    // {
    //     cout<<i<<" : ";
    //     for(auto it:v[i])
    //     cout<<it<<' ';
    //     cout<<endl;
    // }
    int cc=0;
    for(int i=0;i<26;i++)
    {
        if(vis[i]==0 && v[i].size()!=0)
        {
            dfs(i);
            cc++;
        }
    }
    cout<<cc;
    return 0;
}