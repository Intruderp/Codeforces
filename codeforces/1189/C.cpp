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
    int n,s=0,q,l,r,x,y;
    cin>>n;
    int a[n];
    loop(i,0,n)
    {
        cin>>x;
        s+=x;
        a[i]=s;
    }
    cin>>q;
    while (q--)
    {
        cin>>l>>r;
        y=a[r-1];
        if(l==1)
        x=0;
        else 
        x=a[l-2];
        cout<<(y-x)/10<<'\n';
    }
    

} 
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    //test
    solve();
    return 0;
}