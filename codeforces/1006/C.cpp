#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int i=0,j=n-1,s=0,d=0,k,s1=0,s2=0;
    while(i<=j)
    {
        if(s1<=s2)
        {
            s1+=a[i];
            i++;
        }
        else if(s1>s2)
        {
            s2+=a[j];
            j--;
        }
        if(s1==s2)
        {
            s=s1;
        }
    }
    cout<<s;
    return 0;
}