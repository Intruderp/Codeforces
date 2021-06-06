#include <bits/stdc++.h>
#define vi vector<int>
#define mp map<int, int>
#define ump unordered_map<int, int>
#define ll long long int
#define pb push_back
#define mod 1000000007
#define int long long
#define loop(i, x, n) for (int i = x; i < n; i++)
#define rloop(i, n) for (int i = n - 1; i >= 0; i--)
#define test  \
    int t;    \
    cin >> t; \
    while (t--)
using namespace std;
/*************************************************************************************************/
vector<string> st;
bool comp(string s1,string s2)
{
    if(s1.length()==s2.length())
    return s1<s2;
    return s1.length()<s2.length();
}
void help(string s)
{
    if(s.length()>3)
    return ;
    if(s.length()>0)
    st.pb(s);
    for(char c='a';c<='z';c++)
    {
        help(s+c);
    }
}
int isSubstring(string s1, string s2)
{
    int M = s1.length();
    int N = s2.length();
 
    /* A loop to slide pat[] one by one */
    for (int i = 0; i <= N - M; i++) {
        int j;
 
        /* For current index i, check for
 pattern match */
        for (j = 0; j < M; j++)
            if (s2[i + j] != s1[j])
                break;
 
        if (j == M)
            return i;
    }
 
    return -1;
}
void solve()
{
    int n;
    string s;
    cin>>n>>s;
    for(string str:st)
    {
        if(isSubstring(str,s)==-1)
        {
            cout<<str<<"\n";
            return ;
        }
    }

}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    // char c = 'a';
    // while (true)
    // {
    //     if (v.size() < 26)
    //     {
    //         v.pb(to_string(c));
    //         c++;
    //         cout<<c<<endl;
    //     }
    //     else if (v.size() < 702)
    //     {
    //         char x = 'a';
    //         char y = 'a';
    //         int ct = 26, ct2 = 26;
    //         while (ct2--)
    //         {
    //             y='a';
    //             while (ct--)
    //             {
    //                 string str = to_string(x) + to_string(y);
    //                 v.pb(str);
    //                 y++;
    //             }
    //             x++;
    //         }
    //         break;
    //     }

    //     // for(string str:s)
    //     // cout<<str<<endl;
    //     // test
    //     // solve();
    //     cout<<v.size();
    help("");
    //cout<<st.size();
    // for(string str:st)
    // cout<<str<<endl;
    sort(st.begin(),st.end(),comp);
    test
    solve();
   return 0;
    
}