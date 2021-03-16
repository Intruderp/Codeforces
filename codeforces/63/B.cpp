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
    int n,k,ans=0;
    cin>>n>>k;
    int a[n];
    loop(i,0,n)
    cin>>a[i];
    while(true)
    {
        set<int> s;
        for(int i=0;i<n;i++)
        {
            if(a[i]<k && s.count(a[i])==0)
            {
                s.insert(a[i]);
                a[i]++;
            }
        }
        // for(int i:a)
        // cout<<i<<' ';
        // cout<<endl;
        if(s.size()==0)
        break;
        ans++;
    }
    cout<<ans;
    return 0;
}