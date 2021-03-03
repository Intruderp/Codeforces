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
    int n,ans=0;
    char c[3]={'R','G','B'};
    string s;
    cin>>n>>s;
    for(int i=0;i<n-1;i++)
    {
        if(s[i]==s[i+1])
        {
            if(i==n-2)
            {
                i++;
                for(int j=0;j<3;j++)
                {
                    if(s[i]!=c[j])
                    {
                        s[i]=c[j];
                        break;
                    }
                }
            }
            else
            {
                i++;
                for(int j=0;j<3;j++)
                {
                    if(s[i]!=c[j] && s[i+1]!=c[j])
                    {
                        s[i]=c[j];
                        break;
                    }
                }
            }
            ans++;
        }
    }
    cout<<ans<<'\n';
    cout<<s;
    return 0;
}