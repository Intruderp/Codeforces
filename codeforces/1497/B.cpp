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
    int n,m,t;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        int a[n],ans=0;
        loop(i,0,n)
        cin>>a[i];
        vi v(m,0);
        loop(i,0,n)
        v[a[i]%m]++;
        for(int i=0;i<=m/2;i++)
        {
           // cout<<v[i]<<' ';
            if(m&1==0 && i==m/2)
            {
                if(v[i]>0)
                ans++;
            }
            else if(i==0)
            {
                if(v[i]>0)
                ans++;
            }
            else
            {
                int x=v[i];
                int y=v[m-i];
                if(x==0 && y==0)
                continue;
                if(abs(x-y)<=1)
                ans++;
                else
                {
                    if(x>y)
                    {
                        x=x-(y+1);
                        ans++;
                        ans+=x;
                    }
                    else
                    {
                        y=y-(x+1);
                        ans++;
                        ans+=y;
                    }   
                }   
            }   
            //cout<<ans<<endl;
        }
        cout<<ans<<'\n';
    }
    return 0;
}