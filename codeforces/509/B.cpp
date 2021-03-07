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
    int n,k;
    cin>>n>>k;
    int a[n],b[n];
    loop(i,0,n)
    {
        cin>>a[i];
        b[i]=a[i];
    }
    sort(a,a+n);
    for(int i=0;i<n;i++)
    {
        mp m1;
        int c=1;
        while(a[i]--)
        {
            m1[c]++;
            if(c==k)
            c=0;
            c++;
        }
        for(int j=i+1;j<n;j++)
        {
            mp m2;
            c=1;
            for(int ii=0;ii<a[j];ii++)
            {
                m2[c]++;
                if(c==k)
                c=0;
                c++;
            }
            for(int jj=1;jj<=k;jj++)
            {
                if(abs(m1[jj]-m2[jj])>1)
                {
                    cout<<"NO";
                    return 0;
                }
            }
        }
    }
    cout<<"YES"<<endl;
    for(int i=0;i<n;i++)
    {
        int x=1;
        while(b[i]--)
        {
            cout<<x<<' ';
            if(x==k)
            x=0;
            x++;
        }
        cout<<endl;
    }
    return 0;
}