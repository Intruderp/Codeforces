#include<bits/stdc++.h>
#define vi vector<int>
//#define mp map<int,int>
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
    int n,m,s,f,x,y,z;
    cin>>n>>m>>s>>f;
    set <int> st;
    string str;
    map <int,pair<int,int> > mp;
    loop(i,0,m)
    {
        cin>>x>>y>>z;
        mp[x].first=y;
        mp[x].second=z;
        st.insert(x);
    }
    int steps=1;
    while(s!=f)
    {
        if(s>f)
        {
            if(st.count(steps)==0)
            {
                steps++;
                s--;
                str.pb('L');
                continue;
            }
            if(st.count(steps)==1 && (mp[steps].first<=s && mp[steps].second>=s || mp[steps].first<=s-1 && mp[steps].second>=s-1))
            {
                steps++;
                str.pb('X');
            }
            else
            {
                steps++;
                str.pb('L');
                s--;
            }   
        }
        else
        {
            if(st.count(steps)==0)
            {
                steps++;
                s++;
                str.pb('R');
                //cout<<"count"<<endl;
                continue;
            }
            if(st.count(steps)==1 && (mp[steps].first<=s && mp[steps].second>=s || mp[steps].first<=s+1 && mp[steps].second>=s+1))
            {
                steps++;
                str.pb('X');
            }
            else
            {
                steps++;
                str.pb('R');
                s++;
            }   

        }
        
    }
    cout<<str;
    
    return 0;
}