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
    int n;
    cin>>n;
    int a[n],b[n],c=0;
    loop(i,0,n){
        cin>>a[i];
        b[i]=a[i];
    }
    sort(b,b+n);
    loop(i,0,n){
        if(a[i]!=b[i])
        c++;
    }
    if(c<=2)
    cout<<"YES";
    else 
    cout<<"NO";
    return 0;
}