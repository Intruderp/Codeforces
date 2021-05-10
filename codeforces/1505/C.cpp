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
    string s;
    cin>>s;
    int n=s.length();
    if(n<=2)
    cout<<"YES";
    else
    {
        int x,y,z;
        x=s[0]-'A';
        y=s[1]-'A';
        //bool b=true;
        for(int i=2;i<n;i++)
        {
            z=s[i]-'A';
            if((x+y)%26!=z)
            {
                cout<<"NO";
                return 0;
            }
            x=y;
            y=z;
        }
        cout<<"YES";
    }
    return 0;
}