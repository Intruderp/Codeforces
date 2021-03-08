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
    int n,k,sum=LLONG_MAX,ans=-1,j=0;
    cin>>n>>k;
    int a[n];
    map<int,vi >m;
    loop(i,0,n)
    {
        cin>>a[i];
        m[i%k].pb(a[i]);
    }
    for(auto it:m)
    {
        int s=0;
        for(auto i:it.second)
        {
            //cout<<i<<' ';
            s+=i;
        }
        //cout<<endl;
        if(s<sum)
        {
            sum=s;
            ans=j;
        }
        j++;
    }
   cout<<ans+1;
    return 0;
}