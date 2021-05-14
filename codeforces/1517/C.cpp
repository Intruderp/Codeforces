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
#define test int t; cin>>t; while(t--)
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
    int n,x,y,z,j,k;
    cin>>n;
    vector<vector<int>> v(n,vector<int>(n,-1));
    loop(i,0,n)
    cin>>v[i][i];
    loop(i,0,n)
    {
        //cout<<x<<endl;
        x=v[i][i]-1;
        j=i,k=i;
        while (x--)
        {
            if(k-1>=0 && v[j][k-1]==-1)
            {
                k--;
                v[j][k]=v[i][i];
            }
            else if(j+1<n && v[j+1][k]==-1)
            {
                j++;
                v[j][k]=v[i][i];
            }
            else
            {

                cout<<-1;
                return 0;
            }
            //x--;
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        cout<<v[i][j]<<' ';
        cout<<endl;
    }
    return 0;
}