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
    int n,s;
    cin>>n>>s;
    if(s&1)
    {
        if(s>=2*n)
        {
            cout<<"YES"<<endl;
            while(n>1)
            {
                cout<<2<<' ';
                n--;
                s+=-2;
            }
            cout<<s<<endl<<1;
        }
        else
        cout<<"NO";
    }
    else
    {
        if(s>=2*n)
        {
            cout<<"YES"<<endl;
            while(n>1)
            {
                cout<<2<<' ';
                n--;
                s+=-2;
            }
            cout<<s<<endl<<1;
        }
        else
        {
            cout<<"NO";
        }
        
    }
    
    return 0;
}