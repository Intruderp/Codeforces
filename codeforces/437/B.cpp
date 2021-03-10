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
    int sum,limit;
    cin>>sum>>limit;
    int x=limit,y;
    set <int> s;
    while(sum>0 and x>0)
    {
        int j=0;
        for(int i=0;i<32;i++)
        {
            if(x&(1<<i))
            {
                j=i;
                break;
            }
        }
        y=pow(2,j);
        //cout<<y<<' '<<sum<<endl;
        if((sum-y)>=0)
        {
            sum-=y;
            s.insert(x);
        }
        x--;
    }
    if(sum>0)
    cout<<-1;
    else
    {
        cout<<s.size()<<endl;
        for(auto i:s)
        cout<<i<<' ';
    }
    
    return 0;
}