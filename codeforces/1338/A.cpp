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
    int n,t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n];
        loop(i,0,n)
        cin>>a[i];
        int m=a[0],ans=0,x=0,p=0;
        loop(i,0,n)
        {
            m=max(m,a[i]);
            x=max(x,m-a[i]);
        }
        while(x>0)
        {
            x=x-pow(2,p);
            p++;
            ans++;
        }
        cout<<ans<<endl;
    }
    return 0;
}