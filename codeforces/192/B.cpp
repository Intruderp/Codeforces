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
    int n;
    cin>>n;
    int a[n];
    loop(i,0,n) 
    cin>>a[i];
    int ans=min(a[0],a[n-1]);
    bool bb=true;
    while (ans--)
    {
        int b[n],c=0;
        bb=true;
        loop(i,0,n)
        {
            if(a[i]<ans+1)
            b[i]=0;
            else
            b[i]=a[i];
            //cout<<b[i]<<' ';
        }
        //cout<<endl;
        loop(i,0,n-1)
        {
            //cout<<b[i]<<' '<<b[i+1]<<endl;
            if(b[i]==0 && b[i+1]==0)
            {
                bb=false;
                break;
            }
        }
        if(bb)
        {
            cout<<ans+1;
            return 0;
        }
    }
    
    return 0;
}