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
    string s1,s2;
    cin>>s1>>s2;
    vi v1(26,0),v2(26,0);
    loop(i,0,s1.length())
    v1[s1[i]-'a']++;
    loop(i,0,s2.length())
    v2[s2[i]-'a']++;
    int ans=0;
    set<char> s;
    loop(i,0,s2.length())
    {
        if(s.count(s2[i]))
        continue;
        if(v2[s2[i]-'a']>v1[s2[i]-'a'])
        ans+=v1[s2[i]-'a'];
        else    
        ans+=v2[s2[i]-'a'];
        if(v1[s2[i]-'a']==0)
        {
            cout<<-1;
            return 0;
        }
        s.insert(s2[i]);
       // cout<<"count"<<v1[s2[i]-'a']<<' '<<v2[s2[i]-'a']<<endl;
       // cout<<ans<<endl;
    }
    cout<<ans;
    return 0;
}