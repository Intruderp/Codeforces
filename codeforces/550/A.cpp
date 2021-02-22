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
    string s;
    cin>>s;
    int n=s.length(),ab=0,ba=0;
    for(int i=0;i<n-1;i++)
    {
        if(s[i]=='A' && s[i+1]=='B' && !ab)
        {
            ab=1;
            i++;
            continue;
        }
        if(s[i]=='B' && s[i+1]=='A' && ab)
        {
            ba=1;
        }
        if(ab && ba)
        {
            cout<<"YES";
            return 0;
        }
    }
    ab=0,ba=0;
    for(int i=0;i<n-1;i++)
    {
        if(s[i]=='B' && s[i+1]=='A' && !ba)
        {
            ba=1;
            i++;
            continue;
        }
        if(s[i]=='A' && s[i+1]=='B' && ba)
        {
            ab=1;
        }
        if(ab && ba)
        {
            cout<<"YES";
            return 0;
        }
    }
    cout<<"NO";
    return 0;
}