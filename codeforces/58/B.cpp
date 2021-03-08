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
    set <int> s;
    cin>>n;
    s.insert(n);
    while(true)
    {
        bool b=true;
        for(int i=2;i*i<=n;i++)
        {
            if(n%i==0)
            b=false;
        }
        if(b)
        break;
        for(int i=2;i*i<=n;i++)
        {
            if(n%i==0)
            {
                s.insert(n/i);
                n=n/i;
                break;
            }
        }
    }
    s.insert(1);
    for(auto it=s.rbegin();it!=s.rend();it++)
    cout<<*it<<' ';
    return 0;
}