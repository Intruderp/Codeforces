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
    vector<vector<int>> v(n,vector<int>(11,0));
    mp m;
    int a[n];
    loop(i,0,n)
    {
        cin>>a[i];
        m[a[i]]++;
        for(int j=1;j<=10;j++)
        v[i][j]=m[j];
    }
    rloop(i,n)
    {
        mp n;
        for(int j=1;j<=10;j++)
        {
            if(v[i][j]>0)
            {
                n[v[i][j]]++;
                if(n.size()>2)
                break;
            }
        }
        if(n.size()==1 && (n.begin()->first==1 || n.begin()->second==1))
        {
            cout<<i+1;
            return ;
        }
        if(n.size()==2)
        {
            int a,b,x=-1,y;
            for(auto it:n)
            {
                if(x==-1)
                x=it.second,a=it.first;
                else 
                y=it.second,b=it.first;
            }
            if(x==1)
            {
                if(a==1 || a-b==1)
                {
                    cout<<i+1;
                    return ;
                }
            }
            if(y==1)
            {
                if(b==1 || b-a==1)
                {
                    cout<<i+1;
                    return ;
                }
            }
        }
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