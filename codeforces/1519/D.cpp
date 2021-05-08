#include<bits/stdc++.h>
#define vi vector<int>
#define ma map<int,int>
#define uma unordered_map <int,int>
#define ll long long int
#define pb push_back
#define mod 1000000007
#define int long long
#define  loop(i,x,n) for(int i=x;i<n;i++)
#define rloop(i,n) for(int i=n-1;i>=0;i--)
#define test int t;cin>>t; while(t--)
#define mp make_pair
#define pr pair<int,int>
using namespace std;
/*************************************************************************************************/
                                                                                                   

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,sum=0,ans=0,cur=0;
    cin>>n;
    int a[n],b[n];
    loop(i,0,n)
    cin>>a[i];
    loop(i,0,n)
    cin>>b[i];
    loop(i,0,n)
    sum+=a[i]*b[i];
    ans=sum;
    loop(i,0,n)
    {
        int l,r;
        r=i+1;
        l=i-1;
        cur=sum;
        while(l>=0 && r<n)
        {
            cur-=(a[l]*b[l]+a[r]*b[r]);
            cur+=(a[l]*b[r]+a[r]*b[l]);
            l--;
            r++;
            ans=max(ans,cur);
        }

    }
    loop(i,0,n)
    {
        int l,r;
        r=i;
        l=i-1;
        cur=sum;
        while (l>=0 && r<n)
        {
            cur-=(a[l]*b[l]+a[r]*b[r]);
            cur+=(a[l]*b[r]+a[r]*b[l]);
            l--;
            r++;
            ans=max(ans,cur);
        }
        
    }
    cout<<ans;
    return 0;
}