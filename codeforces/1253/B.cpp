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
    int n,c=0;
    mp m;
    vi ans;
    cin>>n;
    int a[n];
    loop(i,0,n)
    cin>>a[i];
    for(int i=0;i<n;i++)
    {
        if(a[i]>0)
        {
            m[a[i]]=1;
        }
        else
        {
            if(m[abs(a[i])]!=1)
            {
                cout<<-1;
                return 0;
            }
            else
            {
                m.erase(abs(a[i]));
            }
        }
        c++;
        if(m.size()==0)
        ans.pb(c),c=0;
    }
    int i=0,j=0;
    for(int i=0;i<ans.size();i++)
    j+=ans[i];
    if(j<n)
    {
        cout<<-1;
        return 0;
    }
    j=0,i=0;
    while (i<n)
    {
        mp m1;
        for(int k=0;k<ans[j];k++)
        {
            //cout<<i<<' '<<j<<endl;
            m1[a[i]]++;
            i++;
        }
        for(auto it:m1)
        {
            if(it.second>1)
            {
                cout<<-1;
                return 0;
            }
        }
        j++;
       // cout<<i<<' '<<j<<endl;
    }
    cout<<ans.size()<<endl;
    for(int it:ans)
    cout<<it<<' ';
    return 0;
}