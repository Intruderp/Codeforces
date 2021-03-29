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
bool isPrime(int n)
{
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
        return false;
    }
    return true;
}
                                                                                                   
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int ans=0;
    string s;
    bool b=true;
    while (true)
    {
        for(int i=2;i<=50;i++)
        {
            if(isPrime(i))
            {
                cout<<i<<'\n'<<endl;
                cin>>s;
                if(s=="yes")
                ans++;
            }
        }
        if(ans>1)
        cout<<"composite",b=false;
        else if(ans==0)
        cout<<"prime",b=false;
        else
        {
            cout<<4<<'\n'<<endl;
            cin>>s;
            if(s=="yes" && b)
            {
                cout<<"composite",b=false;
                return 0;
            }
            cout<<9<<'\n'<<endl;
            cin>>s;
            if(s=="yes" && b)
            {
                cout<<"composite",b=false;
                return 0;
            }
            cout<<25<<'\n'<<endl;
            cin>>s;
            if(s=="yes" && b)
            {
                cout<<"composite",b=false;
                return 0;
            }
            cout<<49<<'\n'<<endl;
            cin>>s;
            if(s=="yes" && b)
            {
                cout<<"composite",b=false;
                return 0;
            }
        }
        if(b)
        cout<<"prime";
        return 0;
    }
    
    return 0;
}