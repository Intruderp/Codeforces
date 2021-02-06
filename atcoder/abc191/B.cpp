#include<bits/stdc++.h>
#define vi vector<int>
#define mp map<int,int>
#define ump unordered_map <int,int>
#define ll long long int
#define pb push_back
#define mod 1000000007
#define  loop(i,n) for(int i=0;i<n;i++)
using namespace std;
int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,x,y;
    vi v;
    cin>>n>>x;
    loop(i,n)
    {
        cin>>y;
        if(y!=x)
        v.pb(y);
    }
    loop(i,v.size())
    cout<<v[i]<<' ';
    return 0;
}