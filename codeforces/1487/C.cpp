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
int a[]={3,1};    
int dp[5][10000];
bool sum(int s,int i)
{
    if(i==2)
    return false;
    if(s==0)
    return true;
    if(dp[i][s]!=-1)
    return dp[i][s];
    if(s>=a[i])
    return sum(s-a[i],i) || sum(s,i+1);
    else 
    return sum(s,i+1);
}                                                                                             
void solve()
{
    int n,x=0,y=1,z;
    cin>>n;
    memset(dp,-1,sizeof(dp));
    z=n*(n-1)/2;
    loop(i,0,z+1)
    {
        x=z-i;
        if((3*x+2*i)%n==0)
        {
            int s=(3*x+2*i)/n;
            if(sum(s,0))
            {
                y=i;
                break;
            }
        }
    }
    int k=n-1,c1,c2;
    for(int i=1;i<n;i++)
    {
        c1=x/n;
        c2=y*2/n;
        for(int j=1;j<=k;j++)
        {
            if(c1>0) cout<<1<<' ',c1--;
            else if(c2>0) cout<<0<<' ', c2--;
            else cout<<-1<<' ';
        }
        k--;
    }
    //cout<<x<<' '<<y<<endl;
    cout<<endl;
    
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