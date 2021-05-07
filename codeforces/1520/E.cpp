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
    int n,c=0,k,x=0,y=0,ans=0;
    string s;
    cin>>n>>s;
    loop(i,0,n)
    {
        if(s[i]=='*')
        c++;
    }
    loop(i,0,n)
    {
        if(s[i]=='*')
        x++;
        if(x==(c+1)/2)
        {
            k=i;
            //cout<<k<<endl;
            break;
        }
    }
    x=k;
    y=k;
    for(int i=k-1;i>=0;i--)
    {
        if(s[i]=='*')
        {
            ans+=x-i-1;
            x--;
        }
    }
    for(int i=k+1;i<n;i++)
    {
        if(s[i]=='*')
        {
            ans+=i-y-1;
            y++;
        }
    }
    cout<<ans<<'\n';
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