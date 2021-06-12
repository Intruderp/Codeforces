#include<bits/stdc++.h>
#define vi vector<int>
#define pii pair<int,int>
#define vpii vector<pair<int,int>>
#define F first
#define S second
#define mp map<int,int>
#define ump unordered_map <int,int>
#define ll long long int
#define pb push_back
#define mod 1000000007
#define int long long
#define all(v) v.begin(),v.end()
#define  loop(i,x,n) for(int i=x;i<n;i++)
#define rloop(i,n) for(int i=n-1;i>=0;i--)
#define test int t; cin>>t; while(t--)
using namespace std;
/*************************************************************************************************/
set<char> st;
bool check(string s)
{
    set<char> str;
    if(s.length()<3)
    return false;
    for(char c:s)
    str.insert(c);
    return str.size()>=2;
}
void solve()
{
    string s,x;
    int n;
    cin>>s;
    st.insert('a');
    st.insert('e');
    st.insert('i');
    st.insert('o');
    st.insert('u');
    n=s.length();
    loop(i,0,n)
    {
        x=s.substr(i,3);
        if(x.length()<3)
        {
            cout<<x;
            break;
        }
        if(st.count(x[2]))
        {
            cout<<x[0]<<x[1]<<x[2];
            i+=2;
            continue;
        }
        if(st.count(x[1]))
        {
            cout<<x[0]<<x[1];
            i++;
            continue;
        }
        if(st.count(x[0]))
        {
            cout<<x[0];
            continue;
        }
        if(check(x))
        {
            cout<<x[0]<<x[1]<<' ';
            i+=1;
        }
        else
        {
            cout<<x[0];
        }
        
    }
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