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
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,ans=0;
    cin>>n;
    int a[n],b[n];
    loop(i,0,n)
    cin>>a[i];
    loop(i,0,n)
    cin>>b[i];
    int x=a[0],y=b[0];
    loop(i,0,n)
    {
        if(a[i]>x)
        x=a[i];
        if(b[i]<y)
        y=b[i];
    }
    cout<<max(y-x+1,ans);
    return 0;
}