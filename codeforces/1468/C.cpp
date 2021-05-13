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
    int n,x,y,z,c=0;
    cin>>n;
    set<pair<int,int>> s;
    map<int,set<int>> m;
    while (n--)
    {
        cin>>x;
        if(x==1)
        cin>>y;
        //c++;
        if(x==1)
        {
            c++;
            m[y].insert(c);
            s.insert({c,y});
            //cout<<"hello\n";
            continue;
        }
        if(x==2)
        {
            cout<<s.begin()->first<<' ';
            if(m[s.begin()->second].size()==1)
            m.erase(s.begin()->second);
            else
            m[s.begin()->second].erase(s.begin()->first);
            s.erase(s.begin());
        }
        if(x==3)
        {
            auto it=m.end();
            it--;
            x=it->first;
            y=*m[x].begin();
            cout<<*m[x].begin()<<' ';
            //cout<<x<<' '<<y<<endl;
            s.erase({y,x});
            if(m[x].size()==1)
            {
                m.erase(it);
                continue;
            }
            m[x].erase(m[x].begin());
        }
    }
    
    return 0;
}