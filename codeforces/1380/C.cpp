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
    int t,n,x,s=1;
    cin>>t;
    while(t--)
    {
        cin>>n>>x;
        int a[n],ans=0;
        loop(i,0,n)
        cin>>a[i];
        sort(a,a+n);
        s=1;
        for(int i=n-1;i>=0;i--)
        {
            //cout<<a[i]<<' '<<s<<endl;
            if(a[i]*s>=x)
            ans++,s=1;
            else 
            s++;
        }
        cout<<ans<<'\n';
    }
    return 0;
}