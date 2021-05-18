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
    int n,k,p=-1,x,y,c=0,d;
    cin>>n>>k;
    vi v;
    loop(i,0,n)
    {
        cin>>x;
        if(x%k)
        v.pb(x);
    }
    set<int> s;
    if(v.size()==0)
    {
        cout<<"0\n";
        return ;
    }
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++)
    {
        if(i>0 && v[i]==v[i-1])
        c++;
        else 
        c=0;
        x=v[i]/k+1+c;
        d=x*k-v[i];
        while (s.count(d))
        {
            x++;
            d=x*k-v[i];
        }
        //cout<<d<<endl;
        s.insert(d);
    }
    auto it=s.end();
    it--;
    cout<<*it+1<<'\n';
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