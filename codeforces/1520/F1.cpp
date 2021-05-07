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
    int n,t,sum,s,x,k;
    cin>>n>>t>>k;
    int h=n,l=1,mid=1;
    if(n==0)
    {
        cout<<0;
        return 0;
    }
    while (l<=h)
    {
        mid=(h+l)/2;
        cout<<"? "<<l<<' '<<mid<<endl;
        cin>>sum;
        if(l==h)
        {
            cout<<"! "<<l;
            return 0;
        }
        s=abs(mid-l)+1;
        x=s-sum;
        if(x>=k)
        {
            h=mid;
        }
        else
        {
            k-=x;
            l=mid+1;
        }
    }
    cout<<"! "<<mid;
    
    return 0;
}