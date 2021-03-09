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
    int n,mm,x,y,z;
    cin>>n>>mm;
    map<int,int> m;
    while(mm--)
    {
        cin>>x>>y>>z;
        set <int> s;
        if(m[x]!=0)
        s.insert(m[x]);
         if(m[y]!=0)
        s.insert(m[y]);
         if(m[z]!=0)
        s.insert(m[z]);
            if(m[x]==0)
            {
                if(s.count(1)==0)
                m[x]=1,s.insert(1);
                else if(s.count(2)==0)
                m[x]=2,s.insert(2);
                else if(s.count(3)==0)
                m[z]=3,s.insert(3);
            }
            if(m[y]==0)
            {
                if(s.count(1)==0)
                m[y]=1,s.insert(1);
                else if(s.count(2)==0)
                m[y]=2,s.insert(2);
                else if(s.count(3)==0)
                m[y]=3,s.insert(3);
            }
            if(m[z]==0)
            {
                if(s.count(1)==0)
                m[z]=1,s.insert(1);
                else if(s.count(2)==0)
                m[z]=2,s.insert(2);
                else if(s.count(3)==0)
                m[z]=3,s.insert(3);
            }

    }
    for(auto i:m)
    cout<<i.second<<' ';

    return 0;
}