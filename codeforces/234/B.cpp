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
    freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
    int n,k,mn=100,x;
    cin>>n>>k;
    multimap <int,int> m;
    loop(i,0,n)
    {
        cin>>x;
        m.insert({x,i+1});
    }
    vi v;
    for(auto it=m.rbegin();it!=m.rend();it++)
    {
        if(k==0)
        break;
        mn=min(it->first,mn);
        k--;
        v.pb(it->second);
    }
    sort(v.begin(),v.end());
    cout<<mn<<endl;
    for(int i:v)
    cout<<i<<' ';
    return 0;
}