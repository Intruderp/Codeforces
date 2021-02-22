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
bool a[1000000+1];
int n=1000000;
unordered_set <int> p;
void seive()
{
    for(int i=2;i*i<=n;i++)
    {
        if(a[i])
        {
            for(int j=i*i;j<=n;j+=i)
            {
                a[j]=false;
            }
        }
    }
    for(int i=2;i<n;i++)
    {
        //cout<<i<<':'<<a[i]<<endl;
        if(a[i])
        {
            p.insert(i*i);
        }
    }

}
                                                                                                   
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    memset(a,true,sizeof(a));
    int nn,x;
    cin>>nn;
    seive();
    loop(i,0,nn)
    {
        cin>>x;
        if(p.count(x))
        printf("YES\n");
        else
        printf("NO\n");
    }
    
    return 0;
}