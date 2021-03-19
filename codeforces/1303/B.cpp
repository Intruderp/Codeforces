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
    int t,n,a,b,ans;
    cin>>t;
    while (t--)
    {
        cin>>n>>a>>b;
        ans=0;
        if(a>=b)
        ans=n;
        else
        {
            int cycle;
            cycle=((n+1)/2)/a;
            if(((n+1)/2)%a==0)
            cycle--;
            ans+=cycle*b;
            ans+=(n+1)/2;
        }
        ans=max(ans,n);
        cout<<ans<<'\n';
    }
    
    return 0;
}