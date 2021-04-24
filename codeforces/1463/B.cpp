#include<bits/stdc++.h>
#define vi vector<int>
#define ma map<int,int>
#define uma unordered_map <int,int>
#define ll long long int
#define pb push_back
#define mod 1000000000
#define int long long
#define  loop(i,x,n) for(int i=x;i<n;i++)
#define rloop(i,n) for(int i=n-1;i>=0;i--)
#define test int t;cin>>t; while(t--)
#define mp make_pair
#define pr pair<int,int>
using namespace std;
/*************************************************************************************************/
vector<int> v;                                                                                                
void solve()
{
    int n,x,y;
    cin>>n;
    int a[n];
    loop(i,0,n)
    cin>>a[i];
    for(int i:a)
    {
        auto it=lower_bound(v.begin(),v.end(),i);
        if(it==v.end())
        {
            it--;
            cout<<*it<<' ';
        }
        else
        {
            if(it==v.begin())
            cout<<*it<<' ';
            else
            {
                x=*it;
                it--;
                y=*it;
                if(abs(i-x)>abs(i-y))
                cout<<y<<' ';
                else 
                cout<<x<<' ';
                // for 3rd condition
            }
        }  

    }
    cout<<'\n';
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int x=0,i=0;
    while (true)
    {
        x=pow(2,i);
        if(x>mod)
        break;
        i++;
        v.pb(x);
    }
    test
    solve();
    
    return 0;
}