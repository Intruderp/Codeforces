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
    int t,n;
    string s,s2;
    cin>>t;
    while (t--)
    {
        cin>>s;
        n=s.length();
        set<int> ans;
        for(int i=0;i<n-2;i++)
        {
            s2=s.substr(i,5);
            if(s2=="twone")
            {
                ans.insert(i+2);
                i+=4;
                continue;
            }
            s2=s.substr(i,3);
            if(s2=="one")
            {
                ans.insert(i+1);
                i+=2;
                continue;
            }
            s2=s.substr(i,3);
            if(s2=="two")
            {
                ans.insert(i+1);
                i+=2;
            }
        }
        cout<<ans.size()<<'\n';
        for(int i:ans)
        cout<<i+1<<' ';
        cout<<'\n';
    }
    
    return 0;
}