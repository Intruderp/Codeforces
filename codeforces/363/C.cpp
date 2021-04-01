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
    int n;
    string s,ans,ans2;
    cin>>s;
    n=s.length();
    for(int i=0;i<n;i++)
    {
        if(i+1<n && s[i]==s[i+1])
        {
            ans.pb(s[i]);
            ans.pb(s[i]);
            i++;
            for(int j=i;j<n;j++)
            {
                if(s[j]!=s[i])
                {
                    i=j-1;
                    break;
                }
                if(j==n-1)
                i=n;
            }
        }
        else 
        ans.pb(s[i]);
    }
    //cout<<ans<<endl;
    n=ans.length();
    for(int i=0;i<ans.length();i++)
    {
        if(i+1<n && ans[i]==ans[i+1])
        {
            if(i+3<n && ans[i+2]==ans[i+3])
            {
                ans2.pb(ans[i]);
                ans2.pb(ans[i+1]);
                ans2.pb(ans[i+2]);
                i+=3;
            }
            else 
            {
                ans2.pb(ans[i]);
                ans2.pb(ans[i+1]);
                i++;
            }
        }
        else 
        ans2.pb(ans[i]);
    }
    cout<<ans2;
    return 0;
}