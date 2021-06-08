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
void solve()
{
    int n;
    cin>>n;
    mp m;
    int a[n];
    loop(i,0,n)
    {
        cin>>a[i];
        m[a[i]]++;
    }
    int x=0,y=0;
    for(auto it:m)
    {
        if(it.second==1)
        x++;
        if(it.second>=3)
        y++;
    }
    if(x%2==0)
    {
        int z=x/2;
        cout<<"YES\n";
        for(int i:a)
        {
            if(m[i]==1)
            {
                if(z>0)
                cout<<'A';
                else 
                cout<<'B';
                z--;
            }
            else
            cout<<'B';

        }
    }
    else if(y>=1)
    {
        int z=((x+1)/2),zz,c=-1;
        zz=z;
        zz=0;
        set<int> s;
        set<int> s1;
        cout<<"YES\n";
        for(int i:a)
        {
            if(c==i)
            {
                cout<<'A';
                continue;
            }
            if(m[i]==1)
            {
                if(z>0)
                cout<<'A';
                else 
                cout<<'B';
                z--;
            }
            else if(zz==0 && m[i]!=2)
            {
                cout<<'B';
                zz=1;
                c=i;
            }
            else 
            cout<<'A';

        }
    }
    else
    cout<<"NO";
} 
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    //test
    solve();
    return 0;
}