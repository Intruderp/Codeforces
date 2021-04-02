#include<bits/stdc++.h>
#define vi vector<int>
#define mp map<int,int>
#define ump unordered_map <int,int>
#define ll long long int
#define pb push_back
#define mod 1000000007
//#define int long long
#define  loop(i,x,n) for(int i=x;i<n;i++)
#define rloop(i,n) for(int i=n-1;i>=0;i--)
using namespace std;
/*************************************************************************************************/
                                                                                                   
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t,n;
    cin>>t;
    while (t--)
    {
        cin>>n;
        int a[n],sum=0,ans=0;
        loop(i,0,n)
        cin>>a[i];
        vector<int> s(n+1,0);
        for(int i=0;i<n;i++)
        {
            sum=a[i];
            for(int j=i+1;j<n;j++)
            {
                sum+=a[j];
                if(sum>n)
                break;
                s[sum]++;
            }
        }
        for(int i:a)
        {
            if(s[i])
            ans++;
        }
        cout<<ans<<'\n';
    }
    
    return 0;
}