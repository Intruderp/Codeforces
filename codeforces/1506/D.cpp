#include<bits/stdc++.h>
#define vi vector<int>
#define mp map<int,int>
#define ump unordered_map <int,int>
#define ll long long int
#define pb push_back
#define mod 1000000007
//#define int long long
#define  loop(i,x,n) for(int i=x;i<n;i++)
#define rloop(i,n) for(int i=n-1;i>=0;i--)
using namespace std;
/*************************************************************************************************/
                                                                                                   
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,t,x,y;
    cin>>t;
    while (t--)
    {   
        cin>>n;
        mp m;
        y=0;
        loop(i,0,n)
        {
            cin>>x;
            m[x]++;
            y=max(y,m[x]);
        }
        int ans;
        cout<<max(n%2,y-(n-y))<<'\n';
    }
    return 0;
}