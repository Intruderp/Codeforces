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
    int n,x1=-1,x2=-1,y1,y2;
    cin>>n;
    char a[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>a[i][j];
            if(a[i][j]=='*')
            {
                if(x1==-1)
                {
                    x1=i;
                    y1=j;
                }
                else
                {
                    x2=i;
                    y2=j;
                }
            }
        }

    }
    int x3,y3,x4,y4;
    if(x1==x2)
    {
        if(x1==0)
        {
            x3=1;
            y3=y1;
            x4=1;
            y4=y2;
        }
        else
        {
            x3=0;
            y3=y1;
            x4=0;
            y4=y2;
        }
        
    }
    else if(y1==y2)
    {
        if(y1==0)
        {
             x3=x1;
            y3=1;
            x4=x2;
            y4=1;
        }
        else
        {
            y3=0;
            y4=0;
            x3=x1;
            x4=x2;
        }
        
    }
    else
    {
        x3=x1;
        y3=y2;
        x4=x2;
        y4=y1;
    }
    a[x3][y3]='*';
    a[x4][y4]='*';
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        cout<<a[i][j];
        cout<<'\n';
    }

}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    test
    solve();
    return 0;
}