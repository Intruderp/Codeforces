#include<bits/stdc++.h>
#define vi vector<int>
#define ma map<int,int>
#define uma unordered_map <int,int>
#define ll long long int
#define pb push_back
#define mod 1000000007
#define int long long
#define  loop(i,x,n) for(int i=x;i<n;i++)
#define rloop(i,n) for(int i=n-1;i>=0;i--)
#define test int t;cin>>t; while(t--)
#define mp make_pair
#define pr pair<int,int>
using namespace std;
/*************************************************************************************************/
                                                                                                   
void solve()
{
    int n,l,r,s,sum=0,x,y;
    cin>>n>>l>>r>>s;
    vector<int> st;
    x=1;
    int mxsum=0,mx=n;;
    y=r-l+1;
    bool b=true;
    while (y--)
    {
        st.pb(x);
        sum+=x;
        x++;
        mxsum+=mx;
        mx--;
    }
    //cout<<mxsum<<endl;
    // if(s>mxsum)
    // b=false;
    x=r-l+2;
    if(sum>s)
    b=false;
    else if(sum<s)
    {
        int ii=0;
        for(auto it=st.rbegin();it!=st.rend();it++)
        {
            if(sum==s)
            break;
            //if(*it<=n)
            //cout<<"out"<<*it<<endl;
            while (*it<=n-1-ii)
            {
                if(sum==s)
                break;
                (*it)++;
                //cout<<*it<<' '<<endl;
                sum++;
                //break;
            }
            ii++;
        }
    }
    if(sum<s)
    b=false;
    if(b)
    {
       x=1;
       vi v;
       for(int i=0;i<n;i++)
       {
           if(binary_search(st.begin(),st.end(),x)==0)
           v.pb(x);
           //cout<<x<<endl;
           x++;
       } 
       auto it=v.begin();
       for(int i=0;i<n;i++)
       {
           if(i==l-1)
           {
               for(auto j:st)
               {
                   cout<<j<<' ';
                   i++;
               }
               i--;
           }
           else
           {
               cout<<*it<<' ';
               it++;
           }
       }
     
    }
    else 
    cout<<-1;
    cout<<'\n';
    
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    test
    solve();
    return 0;
}