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
    string s,ss;
    cin>>s;
    int j=-1;
    int n=s.length();
    for(int i=0;i<n;i++)
    {
        if(s[i]=='-')
        continue;
        if(s[i]=='.')
        {
            j=i;
            break;
        }
        ss+=s[i];
    }
    string ans;
    for(int i=ss.length()-3;(i)>0;i=i-3)
    {
        if(ss.length()<4)
        break;
        ss.insert(i,",");
    }
    //cout<<ss;
    if(j==-1)
    ss+=(".00");
    else
    {
        int c=0;
        for(int i=j;i<n;i++)
        {
            if(c==3)
            break;
            ss+=s[i];
            c++;
        }
        while(c<3)
        {
            ss.pb('0');
            c++;
        }
    }
    if(s[0]=='-')
    cout<<"($"<<ss<<')';
    else
    cout<<'$'<<ss;

    return 0;
}