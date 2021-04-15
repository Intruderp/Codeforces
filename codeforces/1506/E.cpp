#include<bits/stdc++.h>
#define vi vector<int>
#define ma map<int,int>
#define uma unordered_map <int,int>
#define ll long long int
#define pb push_back
#define mod 1000000007
#define int long long
#define  loop(i,x,n) for(int i=x;i<n;i++)
#define rloop(i,n) for(int i=n-1;i>=0;i--)
#define test int t;cin>>t; while(t--)
#define mp make_pair
#define pr pair<int,int>
using namespace std;
/*************************************************************************************************/
                                                                                                   
void solve()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin>>n;
    ma s,s2;
    int a[n];
    loop(i,0,n)
    {
        cin>>a[i];
        s[i+1]=1;
        s2[i+1]=2;
    }
    cout<<a[0]<<' ';
    s2.erase(a[0]);
    for(int i=1;i<n;i++)
    {
        if(a[i]==a[i-1])
        {
            auto it=s2.begin();
            cout<<it->first<<' ';
            s2.erase(it);
        }
        else 
        {
            cout<<a[i]<<' ';
            auto it=s2.lower_bound(a[i]);
            s2.erase(it);
        }
    }
    cout<<'\n'<<a[0]<<' ';
    s.erase(a[0]);
    for(int i=1;i<n;i++)
    {
        if(a[i]==a[i-1])
        {
            auto it=s.lower_bound(a[i]);
            it--;
            cout<<it->first<<' ';
            s.erase(it);
        }
        else 
        {
            cout<<a[i]<<' ';
            //auto it=lower_bound(s.begin(),s.end(),a[i]);
            s.erase(a[i]);
        }
    }
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