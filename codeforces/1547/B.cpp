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
bool sorted(vi v)
{
    int n=v.size();
    for(int i=0;i<n-1;i++)
    {
        if(v[i]>v[i+1])
        return false;
    }
    return true;
}

void solve()
{
    string s;
    cin>>s;
    int n=s.length();
    int freq[26]={0};
    int pos[26];
    memset(pos,-1,sizeof(pos));
    for(int i=0;i<n;i++)
    {
        char c=s[i];
        int x=c-'a'+1;
        freq[x-1]++;
        if(x>n or freq[x-1]>1)
        {
            prn
        }
        pos[c-'a']=i;
    }
    map<char,vi> m;
    for(char c='a';c<='z';c++)
    {
        int d1,d2;
        if(pos[c-'a']!=-1)
        {
            d1=pos[c-'a'];
            for(char c2=c;c2<='z';c2++)
            {
                d2=pos[c2-'a'];
                if(d2!=-1)
                {
                    char x;
                    c2++;
                    x=c2;
                    c2--;
                    for(;x<='z';x++)
                    {
                        if(pos[x-'a']!=-1)
                        {
                            if(d1>d2 and pos[x-'a']>d2 and pos[x-'a']<d1)
                            {
                                prn
                               
                            }
                            if(d2>d1 and pos[x-'a']>d1 and pos[x-'a']<d2)
                            {
                                 //cout<<c<<' '<<c2<<' '<<x<<endl;
                                prn;
                            }
                        }
                    }
                }
            }
        }
    }
    pry
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