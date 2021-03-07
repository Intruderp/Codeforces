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
    int t,n,k;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        vi v;
        loop(i,k+1,n+1)
        {
            v.pb(i);
        }
        vi v1,v2;
        int sum=0;
        loop(i,1,k)
        {
            if(sum+i>=k)
            break;
            sum+=i;
            v1.pb(i);
        }
        sum=0;
        set <int> s;
        for(int i=k-1;i>=1;i--)
        {
            if(s.count(k-i)==1)
            break;
            s.insert(i);
            v2.pb(i);
        }
        if(v1.size()>v2.size())
        {
            cout<<v1.size()+v.size()<<'\n';
            for(int i:v1)
            cout<<i<<' ';
            for(int i:v)
            cout<<i<<' ';
        }
        else
        {
            cout<<v2.size()+v.size()<<'\n';
            for(int i:v2)
            cout<<i<<' ';
            for(int i:v)
            cout<<i<<' ';
        }
        cout<<'\n';
        
    }
    return 0;
}