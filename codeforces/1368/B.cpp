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
    string s="codeforces";
    vi v(10,1);
    int p=1,k,j=0;
    cin>>k;
    while(p<k)
    {
        j=j%10;
        v[j]++;
        //p=p*v[j];
        j++;
        p=1;
        loop(i,0,10)
        p*=v[i];
        //cout<<p<<endl;
    }
    loop(i,0,10)
    {
        while(v[i]>0)
        {
            cout<<s[i];
            v[i]--;
        }
    }
    return 0;
}