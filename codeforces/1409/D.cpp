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
int sum(int n)
{
    int ans=0;
    while (n>0)
    {
        ans+=n%10;
        n/=10;
    }
    return ans;
}
int pos(int n)
{
    string s=to_string(n);
    int p=0;
    for(int i=s.length()-1;i>=0;i--)
    {
        if(s[i]!='0')
        return (('9'-s[i])+1)*pow(10,p);
        else 
        p++;
    }
    return -1;
}                                                                                             
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t,n,s,x;
    cin>>t;
    while (t--)
    {
        cin>>n>>s;
        x=n;
        while (sum(n)>s)
        {
            //cout<<n<<endl;
            n+=pos(n);
        }
        cout<<n-x<<'\n';
    }
    
    return 0;
}