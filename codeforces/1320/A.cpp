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
    cin>>n;
    int a[n];
    loop(i,0,n)
    cin>>a[i];
    mp m;
    int ans=0;
    loop(i,0,n)
    m[i-a[i]]+=a[i];
    for(auto it:m)
    ans=max(ans,it.second);
    cout<<ans;
    return 0;
}