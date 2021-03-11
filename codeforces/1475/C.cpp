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
    int t,a,b,k;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>k;
        vi v1(k),v2(k);
        int ans=0;
        mp m1,m2;
        loop(i,0,k)
        {
            cin>>v1[i];
            m1[v1[i]]++;
        }
        loop(i,0,k)
        {
            cin>>v2[i];
            m2[v2[i]]++;
        }
        loop(i,0,k)
        {
            ans+=(k-i-1)-m1[v1[i]]+1-m2[v2[i]]+1;
            if(m1[v1[i]]>1)
            m1[v1[i]]--;
            if(m2[v2[i]]>1)
            m2[v2[i]]--;
        }
        cout<<ans<<'\n';
    }
    return 0;
}