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
using namespace std;
/*************************************************************************************************/
                                                                                                   
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t,n,w1,w2,w3,l,mx;
    string s;
    cin>>t;
    while (t--)
    {
        cin>>s;
        n=s.length();
        map<char,int> m;
        for(char c:s)
        m[c]++;
        //string ans;
        for(char c:s)
        {
            w1=m['S'];
            w2=m['R'];
            w3=m['P'];
            mx=max({w1,w2,w3});
            if(mx==w1)
            cout<<('R');
            else if(mx==w2)
            cout<<('P');
            else 
            cout<<('S');
        }
        cout<<'\n';
    }
    return 0;
}