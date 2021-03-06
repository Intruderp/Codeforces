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
    int n,x,y,c;
    cin>>n;
    pair <int,int> p[n];
    mp home;
    loop(i,0,n)
    {
        cin>>p[i].first>>p[i].second;
        home[p[i].first]++;
    }
    loop(i,0,n)
    {
        c=home[p[i].second];
        x=n-1+c;
        y=n-1-c;
        cout<<x<<' '<<y<<'\n';
    }
    return 0;
}