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
    int p,q,l,r,x,y,ans=0;
    cin>>p>>q>>l>>r;
    pair <int,int> p1[p],p2[q];
    loop(i,0,p)
    cin>>p1[i].first>>p1[i].second;
    loop(i,0,q)
    cin>>p2[i].first>>p2[i].second;
    loop(i,l,r+1)
    {
        for(int j=0;j<q;j++)
        {
            x=p2[j].first+i;
            y=p2[j].second+i;
            bool b=false;
            for(int k=0;k<p;k++)
            {
                if(x>p1[k].second || y<p1[k].first)
                {
                    "hello";
                }
                else
                {
                    ans++;
                    b=true;
                    break;
                }  
            }
            if(b)
            break;
        }
    }
    cout<<ans;
    return 0;
}