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
    int n,mm,x,m1,m2;
    cin>>n>>mm;
    map <int,vi > m;
    for(int i=1;i<=mm;i++)
    {
        if(mm&1)
        {
            x=abs((mm+1)/2-i);
            m[x].pb(i);
        }
        else
        {
            m1=mm/2,m2=mm/2+1;
            if(i>=m2)
            x=i-m2;
            else if(i<=m1)
            x=m1-i;
            m[x].pb(i);
        }
        
    }
    x=0;
    while(true)
    {
        for(auto it:m)
        {
            for(int i=0;i<it.second.size();i++)
            {
                cout<<it.second[i]<<endl;
                x++;
                if(x==n)
                break;
            }
            if(x==n)
            break;
        }
        if(x==n)
        break;
    }
    return 0;
}