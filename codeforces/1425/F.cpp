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
void solve()
{
} 
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,a,b,c,l,r,x,y,z;
    cin>>n;
    cout<<"? "<<1<<' '<<2<<endl;
    cin>>x;
    cout<<"? "<<2<<' '<<3<<endl;
    cin>>y;
    cout<<"? "<<1<<' '<<3<<endl;
    cin>>z;
    a=z-y;
    b=x-a;
    c=y-b;
    int ans[n];
    ans[0]=a;
    ans[1]=b;
    ans[2]=c;
    l=3,r=4;
    for(int i=3;i<n;i++)
    {
        cout<<"? "<<l<<' '<<r<<endl;
        cin>>x;
        ans[i]=x-c;
        l++;
        r++;
        c=ans[i];
    }
    cout<<"! ";
    for(int i:ans)
    cout<<i<<' ';
    return 0;
}