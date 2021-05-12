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
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,m,k,l;
    cin>>n>>m>>k>>l;
    bool b=true;
    int x;
    if(k+l>n)
    b=false;
    x=(k+l)/m;
    if((k+l)%m)
    x++;
    if(m*x>n)
    b=false;
    if(!b)
    cout<<-1;
    else 
    cout<<x;

    return 0;
}