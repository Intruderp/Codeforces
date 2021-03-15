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
    int n,d,l,s1,s2,ans=-1,x,y;
    cin>>n>>d>>l;
    if(n&1)
    {
        s1=((n/2)+1)*l;
        s2=(n/2)*l;
        for(int i=s1/l;i<=s1;i++)
        {
            for(int j=s2/l;j<=s2;j++)
            {
                if((i-j)==d)
                {
                    x=i;
                    y=j;
                    ans=1;
                    break;
                }
            }
        }
        if(ans==-1)
        {
            cout<<-1;
            return 0;
        }
        vi v(n/2+1,1);
        int diff=x-(n/2+1);
        while(true)
        {
            if(diff==0)
            break;
            for(int i=0;i<v.size();i++)
            {
                if(diff==0)
                break;
                v[i]++;
                diff--;
            }
        }
        vi v2(n/2,1);
        diff=y-n/2;
        while(true)
        {
            if(diff==0)
            break;
            for(int i=0;i<v2.size();i++)
            {
                if(diff==0)
                break;
                v2[i]++;
                diff--;
            }
        }
        int i1=0,i2=0;
        for(int i=0;i<n;i++)
        {
            if(i&1)
            {
                cout<<v2[i1]<<' ';
                i1++;
            }
            else
            {
                cout<<v[i2]<<' ';
                i2++;
            }
            
        }

    }
    else
    {
        s1=((n/2))*l;
        s2=(n/2)*l;
        for(int i=s1/l;i<=s1;i++)
        {
            for(int j=s2/l;j<=s2;j++)
            {
                if((i-j)==d)
                {
                    x=i;
                    y=j;
                    ans=1;
                    break;
                }
            }
        }
        if(ans==-1)
        {
            cout<<-1;
            return 0;
        }
        vi v(n/2,1);
        int diff=x-(n/2);
        while(true)
        {
            if(diff==0)
            break;
            for(int i=0;i<v.size();i++)
            {
                if(diff==0)
                break;
                v[i]++;
                diff--;
            }
        }
        vi v2(n/2,1);
        diff=y-n/2;
        while(true)
        {
            if(diff==0)
            break;
            for(int i=0;i<v2.size();i++)
            {
                if(diff==0)
                break;
                v2[i]++;
                diff--;
            }
        }
        int i1=0,i2=0;
        for(int i=0;i<n;i++)
        {
            if(i&1)
            {
                cout<<v2[i1]<<' ';
                i1++;
            }
            else
            {
                cout<<v[i2]<<' ';
                i2++;
            }   
        }
    }
    return 0;
}