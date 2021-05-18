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
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,k;
    cin>>n>>k;
    int a[n];
    map<int,vi> m;
    bool ans=true;
    loop(i,0,n)
    {
        cin>>a[i];
        m[a[i]].pb(i);
        if(m[a[i]].size()>k)
        ans=false;
    }
    if(!ans)
    cout<<"NO";
    else
    {
        cout<<"YES\n";
        int x=1;
        int arr[n];
        for(auto it:m)
        {
            if(x>k)
            x=1;
            for(int j=0;j<it.second.size();j++)
            {
                arr[it.second[j]]=x;
                x++;
                if(x>k)
                x=1;
            }
        }
        for(int i:arr)
        cout<<i<<' ';
    }
    return 0;
}