#include<bits/stdc++.h>
#define vi vector<int>
#define ma map<int,int>
#define uma unordered_map <int,int>
#define ll long long int
#define pb push_back
#define mod 1000000007
#define int long long
#define  loop(i,x,n) for(int i=x;i<n;i++)
#define rloop(i,n) for(int i=n-1;i>=0;i--)
#define test int t;cin>>t; while(t--)
#define mp make_pair
#define pr pair<int,int>
using namespace std;
/*************************************************************************************************/
                                                                                                   
void solve()
{
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,x,a,b,q,t;
    string s;
    cin>>n>>s>>q;
    string s1,s2,s3,s4;
    s1=s;
    bool tog=0;
    while (q--)
    {
        cin>>t>>a>>b;
        if(t==2)
        {
            tog=!tog;
        }
        else
        {
            if(tog)
            {
                if(a<=n)
                a+=n;
                else
                a-=n;
                if(b<=n)
                b+=n;
                else
                b-=n;
            }
            char c=s1[a-1];
            s1[a-1]=s1[b-1];
            s1[b-1]=c;
            //cout<<a<<' '<<b<<' '<<s1<<' '<<endl;
        }
    }
    //cout<<s1<<endl;
    s2=s1.substr(0,n);
    s3=s1.substr(n);
    if(tog)
    s1=s3+s2;
    cout<<s1;
    return 0;
}