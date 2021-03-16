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
    int m,x,y;
    cin>>m;
    pair <int,int> p[m];
    loop(i,0,m)
    cin>>p[i].first>>p[i].second;
    for(int i=1;i<=5;i++)
    {
        x=0,y=4;
        for(auto it:p)
        {
            if(it.first==i || it.second==i)
            x++,y--;
        }
        if(x>=3 || y>=3)
        {
            cout<<"WIN";
            return 0;
        }
    }
    cout<<"FAIL";
    return 0;
}