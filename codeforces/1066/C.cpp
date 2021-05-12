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
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int q,id,i=2000001,j=2000002,x;
    char c;
    int a[200005];
    cin>>q;
    while (q--)
    {
        cin>>c>>id;
        if(c=='L')
            a[id]=i,i--;
        else if(c=='R')
            a[id]=j,j++;
        else
        {
            x=a[id];
            cout<<min(x-i-1,j-x-1)<<'\n';
        }
    }
    return 0;
}