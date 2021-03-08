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
    int n;
    cin>>n;
    int a[n];
    loop(i,0,n)
    cin>>a[i];
    map<int,vi> m;
    loop(i,0,n)
    m[a[i]].pb(i);
    mp m2;
    for(auto it:m)
    {
            bool b=true;
            int d=0;
            for(int i=0;i<it.second.size()-1;i++)
            {
                d=it.second[1]-it.second[0];
                if(it.second[i+1]-it.second[i]!=d)
                {
                    b=false;
                    break;
                }
            }
            if(b)
            m2[it.first]=d;
        
    }
    cout<<m2.size()<<endl;
    for(auto it:m2)
    cout<<it.first<<' '<<it.second<<endl;
    return 0;
}