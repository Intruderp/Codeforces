#include<bits/stdc++.h>
#define vi vector<int>
#define pii pair<int,int>
#define vpii vector<pair<int,int>>
#define F first
#define S second
#define mp map<int,int>
#define ump unordered_map <int,int>
#define ll long long int
#define pb push_back
#define mod 1000000007
#define int long long
#define pr1 cout<<-1<<endl; return ;
#define all(v) v.begin(),v.end()
#define  loop(i,x,n) for(int i=x;i<n;i++)
#define rloop(i,n) for(int i=n-1;i>=0;i--)
#define test int t; cin>>t; while(t--)
using namespace std;
/*************************************************************************************************/
vi primes;
const int n=100000;
bool a[n+1];
void seive()
{
    memset(a,true,sizeof(a));
    a[0]=a[1]=false;
    for(int i=2;i*i<=n;i++)
    {
        for(int j=i*i;j<=n;j+=i)
        a[j]=false;
    }
}
void solve()
{
    int x,c=1,y=3,z,d=2,e=1,f;
    cin>>x;
    f=x-1;
    for(int i=x;;i++)
    {
        if(a[i])
        {
            cout<<i<<'\n';
            z=i;
            break;
        }
    }
    int ct=0;
    while(z--)
    {
        ct++;
        if(ct<=x)
        {
            cout<<c<<' '<<d<<'\n';
            c++;
            d++;
            if(c==x)
            {
                c=1;
                d=x;
            }
        }
        else
        {
            cout<<e<<' '<<f<<'\n';
            e++;
            f--;
        }
    }
} 
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    //test
    seive();
    solve();
    return 0;
}