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
    int n,mm;
    cin>>n>>mm;
    int a[n],ans=0;
    mp m;
    loop(i,0,n)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    reverse(a,a+n);
    loop(i,0,mm)
    {
        cin>>ans;
        m[ans]++;
    }
    ans=0;
    loop(i,0,n)
    {
        bool b=true;
        for(auto it=m.rbegin();it!=m.rend();it++)
        {
            if(it->first>=a[i] && it->second>0)
            {
                it->second--;
                b=false;
                break;
            }
        }
        if(b)
        ans++;
    }
    cout<<ans;
    return 0;
}