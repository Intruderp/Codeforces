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
    set <string> s;
    string str;
    s.insert("47");
    s.insert("4477");
    s.insert("444777");
    s.insert("44447777");
    s.insert("4444477777");
    vector <int> v;
    int x,n;
    for(auto it:s)
    {
        str=it;
        do
        {
            stringstream obj(str);
            obj>>x;
            v.pb(x);
        } while (next_permutation(str.begin(),str.end()));
        
    }
    sort(v.begin(),v.end());
   // for(int i:v)
   // cout<<i<<' ';
   cin>>n;
   auto it=lower_bound(v.begin(),v.end(),n);
   cout<<*it;
     return 0;
}