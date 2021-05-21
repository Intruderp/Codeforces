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
    vi v(n);
    for(int &i:v)
    cin>>i;
    set<int> s1,s2;
    for(int i:v)
    {
        if(i!=0)
        s1.insert(i);
    }
    loop(i,0,n)
    {
        if(s1.count(i+1)==0)
        s2.insert(i+1);
    }
    for(int i:s2)
    {
        if(v[i-1]==0)
        {
            auto it=s2.begin();
            if(*it!=i)
            {
                v[i-1]=*it;
                s2.erase(it);
            }
            else
            {
                auto it2=s2.end();
                it2--;
                v[i-1]=*it2;
                s2.erase(it2);
            }
        }
    }
    loop(i,0,n)
    {
        if(v[i]==0)
        {
            auto it=s2.begin();
            if(*it!=i+1)
            {
                v[i]=*it;
                s2.erase(it);
            }
            else
            {
                auto it2=s2.end();
                it2--;
                v[i]=*it2;
                s2.erase(it2);
            }
        }
    }
    for(int i:v)
    cout<<i<<' ';
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