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
map<pair<char,int>,int> m;
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int q,id,i=2000001,j=2000002,x,y,a,b;
    char c;
    cin>>q;
    while (q--)
    {
        cin>>c>>id;
        if(c=='L')
        {
            m[{c,id}]=i;
            i--;
        }
        else if(c=='R')
        {
            m[{c,id}]=j;
            j++;
        }
        else
        {
            if(m.count({'L',id}))
            x=m[{'L',id}];
            else 
            x=m[{'R',id}];
            cout<<min(x-i-1,j-x-1)<<'\n';
        }
    }
    return 0;
}