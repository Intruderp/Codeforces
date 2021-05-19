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
    int n,ans=2,occupied;
    cin>>n;
    pair<int,int> p[n];
    loop(i,0,n)
    cin>>p[i].first>>p[i].second;
    occupied=p[0].first;
    for(int i=1;i<n-1;i++)
    {
        if(p[i].first-p[i].second>occupied)
        {
            ans++;
            occupied=p[i].first;
        }
        else if(p[i+1].first-p[i].first>p[i].second)
        {
            ans++;
            occupied=p[i].first+p[i].second;
        }
        else 
        occupied=p[i].first;
    }
    if(n==1)
    ans=1;
    cout<<ans;
    return 0;
}