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
    int t,n,ans=0;
    string s,s2;
    char c='0';
    char a[10];
    for(int i=0;i<10;i++)
    a[i]=c++;
    // for(char i:a)
    // cout<<i<<' ';
    cin>>t;
    while (t--)
    {
        cin>>n;
        ans=0;
        map <string,int> m;
        vector <string> v;
        set<string> st;
        loop(i,0,n)
        {
            cin>>s;
            v.pb(s);
            m[s]++;
            st.insert(s);
        }
        for(int i=0;i<n;i++)
        {
            if(m[v[i]]>1)
            {
                ans++;
                m[v[i]]--;
                bool b=false;
                s=v[i];
                for(int k=0;k<3;k++)
                {
                    s2=s;
                    for(int j=0;j<10;j++)
                    {
                        s2[k]=a[j];
                        if(st.count(s2)==0)
                        {
                            b=true;
                            break;
                        }
                    }
                    if(b)
                    {
                        st.insert(s2);
                        v[i]=s2;
                        break;
                    }
                }
            }
        }
        cout<<ans<<endl;
        for(auto &i:v)
        cout<<i<<endl;
        
    }
    
    return 0;
}