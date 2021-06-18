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
void solve()
{
    int n,count=0;
    cin>>n;
    vi v1(n),v2(n);
    loop(i,0,n)
    cin>>v1[i];
    sort(all(v1));
    int i=0,j=n-1;
    while(true)
    {
        v2[i]=v1[j];
        j--;
        i+=2;
        if(i>n)
        break;
    }
    if(n%2)
    i=n-2;
    else 
    i=n-3;
    j=0;
    while (i>=0)
    {
        v2[i]=v1[j];
        j++;
        i=i-2;
    }
    
    for(int i=1;i<n-1;i++)
    {
        if(v2[i]<v2[i-1] and v2[i]<v2[i+1])
        count++;
    }
    if(n%2==0)
    v2[n-1]=v1[n/2-1];
    cout<<count<<endl;
    for(auto element:v2)
    cout<<element<<' ';

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