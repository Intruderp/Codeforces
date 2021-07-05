#include <bits/stdc++.h>
#define vi vector<int>
#define mp map<int, int>
#define ump unordered_map<int, int>
#define ll long long int
#define pb push_back
#define mod 1000000007
#define int long long
#define loop(i, x, n) for (int i = x; i < n; i++)
#define rloop(i, n) for (int i = n - 1; i >= 0; i--)
#define test  \
    int t;    \
    cin >> t; \
    while (t--)
using namespace std;
/*************************************************************************************************/

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, x, y;
    cin >> n;
    int h, l, mid;
    h = n, l = 1;
    while(h-l>1)
    {
        mid=(h+l)/2;
        cout<<"? "<<l<<' '<<h<<endl;
        cin>>x;
        if(x>=mid)
        {
            cout<<"? "<<mid<<' '<<h<<endl;
            cin>>y;
            if(y==x)
            l=mid;
            else 
            h=mid;
        }
        else
        {
            cout<<"? "<<l<<' '<<mid<<endl;
            cin>>y;
            if(y==x)
            h=mid;
            else 
            l=mid;
        }
    }
    cout<<"? "<<l<<' '<<h<<endl;
    cin>>x;
    if(x==h)
    cout<<"! "<<l;
    else
    cout<<"! "<<h;
    return 0;
}