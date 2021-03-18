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
    int t,n,k;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        int x,y,z;
       // cout<<(14&1)<<endl;
        if(n%2==0)
        {
            if((n/2)%2==0)
            {
                x=n/2,y=n/4,z=n/4;
            }
            else
            {
                x=2,y=(n-2)/2,z=(n-2)/2;
            }
        }
        else
        {
            x=n/2,y=n/2,z=1;
        }
        cout<<x<<' '<<y<<' '<<z<<'\n';
    }
    return 0;
}