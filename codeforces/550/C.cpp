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
    int n,x,y;
    cin>>s;
    n=s.length();
    for(int i=0;i<n;i++)
    {
        if((s[i]-'0')%8==0)
        {
            cout<<"YES\n";
            cout<<s[i];
            return 0;
        }
        for(int j=i+1;j<n;j++)
        {
            x=(s[i]-'0')*10+(s[j]-'0');
            if(x%8==0)
            {
                cout<<"YES\n";
                cout<<x;
                return 0;
            }
            if((x+4)%8==0)
            {
                for(int k=0;k<i;k++)
                {
                    if((s[k]-'0')%2)
                    {
                        cout<<"YES\n";
                        cout<<s[k]<<x;
                        return 0;
                    }
                }
            }
        }
    }
    cout<<"NO";
    return 0;
}