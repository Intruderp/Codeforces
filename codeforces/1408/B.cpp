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
    while (t--)
    {
        cin>>n>>k;
        int a[n],ans=0,check=0;
        loop(i,0,n)
        cin>>a[i];
        while(true)
        {
            bool b=true;
            for(int i:a)
            {
                if(i!=0)
                {
                    b=false;
                    break;
                }
            }
            if(b)
            break;
            set<int> s;
            ans++;
            for(int i=0;i<n;i++)
            {
                if(s.size()<k)
                {
                    s.insert(a[i]);
                    a[i]=0;
                }
                else if(s.size()==k)
                {
                    if(s.count(a[i]))
                    a[i]=0;
                    else 
                    break;
                }
            }
            check++;
            if(check>10000)
            break;
        }
        if(check>10000)
        ans=-1;
        cout<<ans<<'\n';
    }
    
    return 0;
}