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
                                                                                                   
void solve()
{
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,s=0;
    cin>>n;
    int a[n];
    loop(i,0,n)
    {
        cin>>a[i];
        s+=a[i];
    }
    sort(a,a+n);
    if(s%2==0 && a[n-1]<=(s-a[n-1]))
    cout<<"YES";
    else 
    cout<<"NO";
    return 0;
}