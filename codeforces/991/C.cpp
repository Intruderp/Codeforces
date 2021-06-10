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
#define test int t; cin>>t; while(t--)
using namespace std;
/*************************************************************************************************/
int n;
bool check(int k)
{
    int x=n,a=0;
    while(x>0)
    {
        if(x>k)
        a+=k;
        else 
        a+=x;
        x=x-k;
        x=x-x/10;
    }
    return a>=(n+1)/2 ? true:false;
}
void solve()
{
    cin>>n;
    int ans=1,h=n,l=1;
    while(l<=h)
    {
        int mid=(h+l)/2;
        if(check(mid))
        {
            ans=mid;
            h=mid-1;
        }
        else
        l=mid+1;
    }
    cout<<ans;
} 
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    //test
    solve();
    return 0;
}