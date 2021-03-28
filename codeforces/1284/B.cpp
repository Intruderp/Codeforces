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
    int n,m;
    cin>>n;
    int ans=n*n,c=0;
    vi left,right;
    for(int i=0;i<n;i++)
    {
        cin>>m;
        vi v(m);
        loop(i,0,m)
        cin>>v[i];
        reverse(v.begin(),v.end());
        if(is_sorted(v.begin(),v.end()))
        left.pb(v[m-1]),right.pb(v[0]);
    }
    sort(left.begin(),left.end());
    for(int i=0;i<right.size();i++)
    {
        auto it=upper_bound(left.begin(),left.end(),right[i]);
        c+=it-left.begin();
    }
    cout<<ans-c;
    return 0;
}