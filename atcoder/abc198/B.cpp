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
bool isp(string s)
{
    int i=0;
    int j=s.length()-1;
    while (i<=j)
    {
        if(s[i]!=s[j])
        return false;
        i++;
        j--;
    }
    return true;
}                                                                                       
void solve()
{
    string s;
    cin>>s;
    int c=0;
    while (true)
    {
        if(c>100000)
        break;
        if(isp(s))
        {
            cout<<"Yes";
            return ;
        }
        s='0'+s;
        c++;

    }
    cout<<"No";
    
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