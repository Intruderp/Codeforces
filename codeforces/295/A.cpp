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
    int n,m2,k,x,y,z;
    cin>>n>>m2>>k;
    int a[n];
    loop(i,0,n)
    cin>>a[i];
    vi freq(m2,0),op(n,0);
    map<int,vi > m;
    for(int i=0;i<m2;i++)
    {
        cin>>x>>y>>z;
        m[i].pb(x),m[i].pb(y),m[i].pb(z);
    }
    for(int i=0;i<k;i++)
    {
        cin>>x>>y;
        if(y==m2)
        freq[x-1]++;
        else 
        freq[x-1]++,freq[y]--;
    }
    for(int i=1;i<m2;i++)
    freq[i]+=freq[i-1];
    // cout<<"freq"<<endl;
    // for(int i:freq)
    // cout<<i<<' ';
    for(int i=0;i<m2;i++)
    {
        x=m[i][0];
        y=m[i][1];
        z=m[i][2];
        if(y==n)
        op[x-1]+=z*freq[i];
        else 
        op[x-1]+=z*freq[i],op[y]-=z*freq[i];
    }
    for(int i=1;i<n;i++)
    op[i]+=op[i-1];
    for(int i=0;i<n;i++)
    cout<<op[i]+a[i]<<' ';
    return 0;
}