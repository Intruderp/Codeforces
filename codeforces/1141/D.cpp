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
    int n;
    string s1,s2;
    char c;
    cin>>n>>s1>>s2;
    vector<pair<int,int>> v;
    map<char,set<int>> m;
    loop(i,0,n)
    m[s2[i]].insert(i);
    loop(i,0,n)
    {
        if(s1[i]=='?')
        continue;
        c=s1[i];
        if(m.count(c) && m[c].size()>0)
        {
            auto it=m[c].begin();
            v.pb({i+1,*it+1});
            m[c].erase(it);
        }
        else if(m.count(c)==0 || m[c].size()==0)
        {
            if(m.count('?') && m['?'].size()>0)
            {
                c='?';
                auto it=m[c].begin();
                v.pb({i+1,*it+1});
                m[c].erase(it);
            }
        }
        if(m.count(c) && m[c].size()==0)
        m.erase(c);
    }
    loop(i,0,n)
    {
        if(s1[i]=='?')
        {
            for(auto it=m.rbegin();it!=m.rend();it--)
            {
                auto it2=it->second.begin();
                v.pb({i+1,*it2+1});
                m[it->first].erase(it2);
                if(m[it->first].size()==0)
                m.erase(it->first);
                break;
            }
        }
    }
    cout<<v.size()<<endl;
    for(auto it:v)
    cout<<it.first<<' '<<it.second<<endl;
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