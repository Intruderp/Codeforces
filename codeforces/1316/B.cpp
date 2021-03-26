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
    int t,n,k,a;
    string s,s1,s2,ans;
    cin>>t;
    while (t--)
    {
        cin>>n>>s;
        ans=s;
        a=1;
        for(k=1;k<=n;k++)
        {
            s1=s.substr(0,k-1);
            s2=s.substr(k-1,n);
            if(s2.length()%2)
            reverse(s1.begin(),s1.end());
            s1=s2+s1;
            //cout<<s1<<endl;
            if(s1<ans)
            ans=s1,a=k;
        }
        cout<<ans<<'\n'<<a<<'\n';
    }
    
    return 0;
}