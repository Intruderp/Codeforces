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
    int t,m,n,x;
    cin>>t;
    while (t--)
    {
        cin>>n>>m>>x;
        int i=1,j=1,jj=1;
        i=x%n;
        if(x%n==0)
        i=n;
        jj=x/n;
        if(x%n)
        jj++;
        //cout<<i<<' '<<jj<<endl;
        cout<<jj+(i-1)*m<<'\n';
    }
    
    return 0;
}