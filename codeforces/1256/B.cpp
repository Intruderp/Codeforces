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
    int n;
    cin>>n;
    int a[n];
    set<int> s;
    loop(i,0,n)
    {
        cin>>a[i];
        if(s.size()!=n-1)
        s.insert(i);
    }
    int c=1,x,p=0;
    while (true)
    {
        x=-1;
        for(int i=0;i<n-1;i++)
        {
            if(a[i+1]==c)
            {
                x=i;
                break;
            }
        }
        if(x!=-1)
        {
            for(int i=x;;i--)
            {
                if(a[i]<a[i+1] || i<0)
                break;
                if(s.count(i))
                {
                    swap(a[i],a[i+1]);
                    s.erase(i);
                }
            }
        }
        if(s.size()==0 || c==n || p==n-1)
        break;
        c++;
        p++;
    }
    for(int i:a)
    cout<<i<<' ';
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