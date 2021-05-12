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
    int n,d,x;
    cin>>n>>d;
    int a[n],b[n];
    loop(i,0,n)
    cin>>a[i];
    loop(i,0,n)
    cin>>b[i];
    x=a[d-1]+b[0];
    int i=1,j=0;
    rloop(k,n)
    {
        if(j>k)
        break;
        if(k==d-1)
        continue;
        //cout<<k<<' '<<a[k]<<endl;
        if(a[k]+b[i]<=x)
        {
            a[k]+=b[i];
            i++;
        }
        else
        {
            a[j]+=b[i];
            i++;
            j++;
            k++;
            //cout<<"hello\n";
        }
        
    }
    a[d-1]=x;
    int ans=1;
    loop(i,0,n)
    {
        if(a[i]>x)
        ans++;
        //cout<<a[i]<<' ';
    }
    cout<<ans;
    return 0;
}