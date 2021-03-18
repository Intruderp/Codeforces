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
    int n,q;
    cin>>q;
    while(q--)
    {
        cin>>n;
        int a[n+1]={0},x,ans=0;
        loop(i,0,n)
        {
            cin>>x;
            a[x]++;
        }
        set<int> s;
        vi v;
        for(int i:a)
        {
            if(i!=0)
            v.pb(i);
        }
        for(int i:v)
        {
            if(s.count(i)==0)
            {
                s.insert(i);
            }
            else
            {
                if(i==1)
                continue;
                while (i>0)
                {
                    i--;
                    if(s.count(i)==0)
                    {
                        s.insert(i);
                        break;
                    }
                }
                
            }
            
        }
        for(int i:s)
        ans+=i;
        cout<<ans<<'\n';
    }
    return 0;
}