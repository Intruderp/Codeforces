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
    int n,x;
    ma m;
    cin>>n;
    int a[n];
    loop(i,0,n)
    {
        cin>>x;
        m[x]++;
        a[i]=x;
    }
    for(auto it:m)
    {
        if(it.second==1)
        {
            for(int i=0;i<n;i++)
            {
                if(a[i]==it.first)
                {
                    cout<<i+1<<'\n';
                    return ;
                }
            }
            return ;
        }
    }
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