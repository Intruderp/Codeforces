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
    int n,j=-1;
    string s;
    cin>>n>>s;
    char c[9];
    loop(i,0,9)
    cin>>c[i];
    loop(i,0,n)
    {
        //cout<<s[i]<<' '<<c[s[i]-'1']<<endl;
        if(s[i]<c[s[i]-'1'])
        {
            s[i]=c[s[i]-'1'];
            j=i+1;
           // cout<<j<<endl;
            break;
        }
    }
    //cout<<'5'-'1'<<' '<<'5'-49;
    if(j!=-1)
    {
        loop(i,j,n)
        {
           if(s[i]<=c[s[i]-'1'])
           s[i]=c[s[i]-'1'];
           else
           break;
        }
    }
    cout<<s;
    return 0;
}