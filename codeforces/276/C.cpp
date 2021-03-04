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
    int n,q,x,y,an=0;
    cin>>n>>q;
    int a[n];
    loop(i,0,n)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    vi v(n,0);
    loop(i,0,q)
    {
        cin>>x>>y;
        if(y==n)
        {
            v[x-1]++;
        }
        else
        {
            v[x-1]++;
            v[y]--;
        }
        
    }
    loop(i,1,n)
    {
        v[i]+=v[i-1];
    }
    sort(v.begin(),v.end());
    loop(i,0,n)
    an+=v[i]*a[i];
    cout<<an;
    return 0;
}