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
    int n,q,c;
    cin>>n;
    vi v(n);
    loop(i,0,n)
    cin>>v[i];
    sort(v.begin(),v.end());
    cin>>q;
    while(q--)
    {
        cin>>c;
        auto it=upper_bound(v.begin(),v.end(),c);
        cout<<it-v.begin()<<endl;
    }
    return 0;
}