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
    string s;
    cin>>s;
    int c1=0,c2=0,c3=0;
    loop(i,0,s.length())
    {
        if(s[i]=='4')
        c1++;
        if(s[i]=='7')
        c2++;
        if(i+1<s.length() && s[i]=='4' && s[i+1]=='7')
        c3++;
    }
    if(c1==0 && c2==0 && c3==0)
    {
        cout<<-1;
        return 0;
    }
    int m=max({c1,c2,c3});
    if(m==c1)
    cout<<4;
    else if(m==c3)
    cout<<47;
    else if(m==c2)
    cout<<7;
    return 0;
}