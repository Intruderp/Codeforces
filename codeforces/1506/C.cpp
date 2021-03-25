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
int LCS(char* X, char* Y, int m, int n)
{
    
 
    int LCSuff[m + 1][n + 1];
    int result = 0;
    for (int i = 0; i <= m; i++)
    {
        for (int j = 0; j <= n; j++)
        {
        
            if (i == 0 || j == 0)
                LCSuff[i][j] = 0;
 
            else if (X[i - 1] == Y[j - 1]) {
                LCSuff[i][j] = LCSuff[i - 1][j - 1] + 1;
                result = max(result, LCSuff[i][j]);
            }
            else
                LCSuff[i][j] = 0;
        }
    }
    return result;
}
 
                                                                                                   
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t,n,m;
    cin>>t;
    string s1,s2;
    while (t--)
    {
        cin>>s1>>s2;
        n=s1.length(),m=s2.length();
        char a[n],b[m];
        loop(i,0,n)
        a[i]=s1[i];
        loop(i,0,m)
        b[i]=s2[i];
        int r=LCS(a,b,n,m);
        int ans=n-r+m-r;
        cout<<ans<<'\n';

    }
    
    return 0;
}