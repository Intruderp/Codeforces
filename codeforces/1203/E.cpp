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
void solve()
{
    int n,x;
    cin>>n;
    vi v(150001,0);
    loop(i,0,n)
    {
        cin>>x;
        v[x]++;
    }
    loop(i,0,150002)
    {
        if(v[i]==1)
        {   
            if(i-1>0 && v[i-1]==0)
            {
                v[i]=0;
                v[i-1]=1;
            }
            continue;
        }
        if(v[i]==2)
        {
            if(i-1>0 && v[i-1]==0)
            v[i-1]=1;
            else 
            v[i+1]++;
            continue;
        }
        if(v[i]>2)
        {
            if(i-1>0 && v[i-1]==0)
            v[i-1]++,v[i+1]++;
            else 
            {
                v[i+1]+=1;
                // if(v[i+1]==2)
                // i++;
            }
        }
    }
    int ans=0;
    loop(i,0,150002)
    ans+=(v[i]!=0);
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