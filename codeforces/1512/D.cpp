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
    int n,sum=0,x=-1,y=-1,s;
    cin>>n;
    vi v(n+2);
    loop(i,0,n+2)
    {
        cin>>v[i];
        sum+=v[i];
    }
    sort(v.begin(),v.end());
    for(int i=0;i<n+2;i++)
    {
        s=sum-v[i];
        if(s%2==0)
        {
            if(binary_search(v.begin(),v.end(),s/2))
            {
                x=i;
                auto it=lower_bound(v.begin(),v.end(),s/2);
                y=it-v.begin();
                if(x==y)
                {
                    x=-1;
                }
                if(x!=-1)
                break;
            }
        }
    }
    if(x!=-1)
    {
        for(int i=0;i<n+2;i++)
        {
            if(i==x || y==i)
            continue;
            else 
            cout<<v[i]<<' ';
        }
    }
    else 
    cout<<-1;
    cout<<'\n';
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