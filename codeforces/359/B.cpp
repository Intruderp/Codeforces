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
    int n,k;
    cin>>n>>k;
    vi v;
    loop(i,1,2*n+1)
    v.pb(i);
    int j=2*n-1;
    while(k--)
    {
        swap(v[j],v[j-1]);
        j-=2;
    }
    for(int i:v)
    cout<<i<<' ';
    return 0;
}