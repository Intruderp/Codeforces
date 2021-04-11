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
    int a,b,n;
    string s;
    bool bb=true;
    cin>>a>>b>>s;
    int i=0,j=s.length()-1;
    n=s.length();
    if(a+b!=n)
    bb=false;
    while (i<=j)
    {
        if(s[i]=='?' && s[j]!='?')
        s[i]=s[j];
        else if(s[j]=='?' && s[i]!='?')
        s[j]=s[i];
        i++;
        j--;
    }
    for(int i=0;i<n;i++)
    {
        a-=s[i]=='0';
        b-=s[i]=='1';
    }
    i=0,j=s.length()-1;
    while (i<=j)
    {
        if(s[i]=='?' && s[j]=='?')
        {
            if(i==j)
            {
                if(a>b)
                s[i]='0',a--;
                else 
                s[j]='1',b--;
            }
            else
            {
                if(a>b)
                {
                    s[i]=s[j]='0';
                    a-=2;
                }
                else
                {
                    s[i]=s[j]='1';
                    b-=2;
                }
                
            }
        }
        i++;
        j--;
    }
    if(a!=0 || b!=0)
    bb=false;
    i=0,j=n-1;
    while (i<=j)
    {
        if(s[i]!=s[j])
        bb=false;
        i++;
        j--;
    }
    if(bb)
    cout<<s;
    else 
    cout<<-1;
    cout<<'\n';
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