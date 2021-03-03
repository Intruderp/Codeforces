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
    int n,t,k;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        int i=n-1,j=n,in=1;
        while(in<=k)
        {
            if((in+(j-i))<=k)
            {
                in+=j-i;
                i--;
            }
            else
            {
                j=j-(k-in);
                break;
            }   
        }
       // cout<<i<<' '<<j<<endl;
        for(int k=1;k<=n;k++)
        {
            if(k==i || k==j)
            cout<<'b';
            else     
            cout<<'a';
        }
        cout<<'\n';
    }

    return 0;
}