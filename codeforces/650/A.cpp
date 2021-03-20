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
    int n,t;
    //cin>>t;
    t=1;
    while(t--)
    {
        cin>>n;
        pair<int,int> p[n];
        loop(i,0,n)
        cin>>p[i].first>>p[i].second;
        mp x,y;
        map<pair<int,int>,int> m;
        int ans=0,a,b,a1,a2,c;
        for(auto it:p)
        {
            x[it.first]++;
            y[it.second]++;
            m[{it.first,it.second}]++;
        }
        for(auto it:p)
        {
            a=x[it.first];
            b=y[it.second];
            a1=a-1;
            a2=b-1;
            c=m[{it.first,it.second}]-1;
            ans+=a1+a2-c;
            x[it.first]--;
            y[it.second]--;
            m[{it.first,it.second}]--;
            //cout<<ans<<endl;
            //cout<<a1<<' '<<a2<<' '<<c<<endl;
        }
        cout<<ans<<'\n';
    }
    return 0;
}