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
bool present(int a,vector<int> v)
{
    for(int i:v)
    {
        if(i==a)
        return true;
    }
    return false;
}
void solve()
{
    int n,x,y,k=300;
    cin>>n;
    vi v(n);
    set<int> s;
    loop(i,0,n)
    {
        cin>>x;
        s.insert(x);
    }
    while(s.size()<=k)
    {
        vi v1;
        x=s.size();
        for(int i:s)
        {
            bool b=false;
            for(int j:s)
            {
                if(i!=j && s.count(abs(i-j))==0)
                {
                    s.insert(abs(i-j));
                    //cout<<abs(i-j)<<endl;
                    b=true;
                    break;
                }
            }
            if(b)
            break;
        }
        if(s.size()>k)
        break;
        if(x==s.size())
        {
            cout<<"YES\n";
            cout<<s.size()<<'\n';
            for(int i:s)
            cout<<i<<' ';
            cout<<"\n";
            return ;
        }

    }
    cout<<"NO\n";
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