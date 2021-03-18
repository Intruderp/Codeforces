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
    int t,n,j;
    cin>>t;
    while (t--)
    {
        cin>>n;
        set<int> s;
        for(int i=1;i*i<=n;i++)
        {
            s.insert(n/i);
            j=n/i;
            s.insert(n/j);
        }
        s.insert(0);
        cout<<s.size()<<'\n';
        for(int i:s)
        cout<<i<<' ';
        cout<<'\n';
    }
    
    return 0;
}