#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    long long a[n],b[n];
    long long sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>b[i];
    }
    for(int i=0;i<n;i++)
    {
        sum+=a[i]*b[i];
    }
    if(sum==0)
    {
        cout<<"Yes";
    }
    else
    {
        cout<<"No";
    }
    return 0;
}