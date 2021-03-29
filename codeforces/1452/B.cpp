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
    int t,n;
    cin>>t;
    while (t--)
    {
        cin>>n;
        int a[n],sum=0;
        loop(i,0,n)
        {
            cin>>a[i];
            sum+=a[i];
        }
        int av=ceil((sum*1.0)/(n-1));
        int s=av*(n-1);
        sort(a,a+n);
        if(a[n-1]>av)
        s=a[n-1]*(n-1);
        cout<<s-sum<<'\n';
    }
    
    return 0;
}