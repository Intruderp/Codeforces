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
    int n,a,b,aa,x;
    cin>>a>>b>>n;
    aa=a;
    string s;
    bool c=false;
    for(int i=0;i<=9;i++)
    {
        if((a*10+i)%b==0)
        {
            c=true;
            a=a*10+i;
            break;
        }
    }
    if(c)
    {
        cout<<a;
        for(int i=0;i<n-1;i++)
        cout<<0;
    }
    else 
    cout<<-1;
    return 0;
}