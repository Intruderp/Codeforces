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
    int n,a,c=0,cc=0,sum,x;
    cin>>n;
    int q[n-1];
    sum=(n*(n+1)/2);
    loop(i,0,n-1)
    {
        cin>>x;
        cc+=x;
        q[i]=x;
        c+=cc;
    }
    a=(sum-c)/n;
    vi v;
    set<int> s;
    //cout<<sum<<' '<<c<<' '<<a;
    if(a<1 || a>n || (sum-c)%n!=0)
    cout<<-1;
    else
    {
        //cout<<a<<' ';
        v.pb(a);
        x=a;
        s.insert(a);
        for(int i=0;i<n-1;i++)
        {
           // cout<<q[i]+x<<' ';
           v.pb(q[i]+x);
           if(q[i]+x<1 || q[i]+x>n)
           {
               cout<<-1;
               return 0;
           }
           s.insert(q[i]+x);
            x=q[i]+x;
        }
        if(s.size()<n)
        {
            cout<<-1;
            return 0;
        }
        for(int i:v)
        cout<<i<<' ';
    }
    return 0;
}