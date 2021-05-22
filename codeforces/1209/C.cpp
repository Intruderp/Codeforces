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
    int n,ct=10;
    string s1,s2,s3,s;
    char c='0',a='0',b;
    cin>>n>>s;
    set<char> st;
    set<int> ans;
    while (ct--)
    {
        loop(i,0,n)
        {
            bool con=false;
            if(st.size()==0)
            con=true;
            if(st.size()!=0)
            {
                auto it=st.upper_bound(s[i]);
                if(it==st.end())
                con=true;
            }
            if(s[i]>=c && con)
            {
                s1.pb(s[i]);
                //a=max(a,s[i]);
                ans.insert(i);
                st.insert(s[i]);
            }
            else 
            s2.pb(s[i]);
        }
        s3=s2+s1;
        if(is_sorted(s3.begin(),s3.end()))
        {
            //cout<<s1<<' '<<s2<<' '<<s3<<endl;
            loop(i,0,n)
            {
                if(ans.count(i))
                cout<<2;
                else 
                cout<<1;
            }
            cout<<'\n';
            return ;
        }
        s1.clear();
        s2.clear();
        s3.clear();
        st.clear();
        ans.clear();
        //cout<<c<<endl;
        c++;
    }
    cout<<"-\n";
} 
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    test
    solve();
    return 0;
}