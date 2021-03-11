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
    int n,k,x,y,ans=0,c=(1e6);
    cin>>n;
    queue <int> s1;
    queue <int> s2;
    cin>>k;
    while(k--)
    {
        cin>>x;
        s1.push(x);
    }
    cin>>k;
    while(k--)
    {
        cin>>x;
        s2.push(x);
    }
    while(c--)
    {
       // cout<<s1.size()<<' '<<s2.size()<<endl;
        if(s1.size()==0 || s2.size()==0)
        break;
        x=s1.front();
        y=s2.front();
       // cout<<"top"<<x<<' '<<y<<endl;
        s1.pop();
        s2.pop();
        if(x>y)
        {
            s1.push(y);
            s1.push(x);
        }
        else
        {
            s2.push(x);
            s2.push(y);
        }
        ans++;
    }
    if(c<=0)
    cout<<-1;
    else
    {
        cout<<ans<<' ';
        s1.size()==0 ? cout<<2:cout<<1;
    }
    
    return 0;
}