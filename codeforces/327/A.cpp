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
    int n;
    cin>>n;
    int a[n];
    loop(i,0,n)
    cin>>a[i];
    int ans=0,c=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            c=0;
            for(int k=0;k<n;k++)
            {
                if(k>=i && k<=j)
                {
                    if(a[k]==0)
                    c++;
                }
                else
                {
                    if(a[k]==1)
                    c++;
                }
            }
            //cout<<c<<endl;
            ans=max(ans,c);
        }
    }
    cout<<ans;
    return 0;
}