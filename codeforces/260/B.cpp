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
    string s,s1,s2,ans;
    cin>>s;
    map<string,int> m;
    s1=s.substr(0,10);
    mp days;
    days[1]=31;
    days[2]=28;
    days[3]=31;
    days[4]=30;
    days[5]=31;
    days[6]=30;
    days[7]=31;
    days[8]=31;
    days[9]=30;
    days[10]=31;
    days[11]=30;
    days[12]=31;
    m[s1]++;
    for(int i=10;i<s.length();i++)
    {
        s2=s1.substr(1,9);
        s2.pb(s[i]);
        m[s2]++;
        s1=s2;
        s2.clear();
    }
    s1.clear(),s2.clear();
    int mx=0,x,y;
    for(auto it:m)
    {
        s1=it.first;
        s2.clear();
        s2=s1.substr(6,4);
        if(s2=="2013" || s2=="2014" || s2=="2015")
        {

            s2.clear();
            s2=s1.substr(3,2);
            x=(s2[0]-'0')*10+(s2[1]-'0');
            if(x>=1 && x<=12 && s2[0]!='-' && s2[1]!='-')
            {
                s2.clear();
                s2=s1.substr(0,2);
                y=(s2[0]-'0')*10+(s2[1]-'0');
                if(days[x]>=y && y>0)
                {
                    bool b=true;
                    if(s1[2]!='-' || s1[5]!='-')
                    b=false;
                    for(int i=0;i<=9;i++)
                    {
                        if(i!=2 && i!=5 && s1[i]=='-')
                        b=false;
                    }
                    if(it.second>mx && b)
                    {
                        ans=s1;
                        mx=it.second;
                    }
                }
            }
            
        }
    }
    cout<<ans;
    return 0;
}