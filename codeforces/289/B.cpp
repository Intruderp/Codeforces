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
    int n,m,d;
    cin>>n>>m>>d;
    int a[m*n];
    loop(i,0,m*n)
    cin>>a[i];
    sort(a,a+n*m);
    bool b=false;
    int mid=a[(n*m)/2],ans=0;
    loop(i,0,n*m)
    {
        if((abs(a[i]-mid))%d)
        b=true;
        ans+=abs(a[i]-mid)/d;
    }
    if(b)
    cout<<-1;
    else
    cout<<ans;
    return 0;
}