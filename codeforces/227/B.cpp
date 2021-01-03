#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    long long a[n];
    map <long long,long long> m;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        m[a[i]]=i+1;
    }
    long long q,ans1=0,ans2=0,ans;
    cin>>q;
    for(int i=0;i<q;i++)
    {
        cin>>ans;
        ans1+=m[ans];
        ans2+=n-m[ans]+((long long)1);
    }
    cout<<ans1<<' '<<ans2<<endl;
    return 0;
}