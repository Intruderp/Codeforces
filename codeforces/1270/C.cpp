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
    cin>>t;
    while (t--)
    {
        cin>>n;
        //int a[n];
        int sum=0,x=0,y;
        loop(i,0,n)
        {
            cin>>y;
            sum+=y;
            x=(x^y);
        }
        if(sum==(2*x))
        {
            cout<<0<<'\n'<<'\n';
            continue;
        }
        if(x==0)
        {
            cout<<1<<'\n';
            cout<<sum<<'\n';
        }
        else
        {
            cout<<2<<'\n';
            sum+=x;
            cout<<sum<<' '<<x<<'\n';
        }
        
    }
    
    return 0;
}