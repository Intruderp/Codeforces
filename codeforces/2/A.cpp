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
    int n;
    cin>>n;
    string s[n];
    int a[n];
    map <string,int> m,mf;
    loop(i,0,n)
    {
        cin>>s[i]>>a[i];
        m[s[i]]+=a[i];
    }
    int mx=0;
    for(auto it:m)
    {
        mx=max(mx,it.second);
    }
    loop(i,0,n)
    {
        mf[s[i]]+=a[i];
        if(mf[s[i]]>=mx && m[s[i]]==mx)
        {
            cout<<s[i];
            return 0;
        }
    }
}