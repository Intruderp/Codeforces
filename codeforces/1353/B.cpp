#include<bits/stdc++.h>
using namespace std;
void sum(int n,int k,vector <int> a,vector <int> b)
{
    int s=0,i=0;
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    while(i<n)
    {
        if(b[n-1-i]>a[i] && k>0)
        {
            s+=b[n-1-i];
            k--;
        }
        else
        {
            s+=a[i];
        }
        i++;
        
    }
    cout<<s<<endl;
}
int main()
{
    int t,n,k;
    cin>>t;
        //vector<int> a(n);
        //vector <int> b;
    for(int i=0;i<t;i++)
    {
        cin>>n>>k;
        vector <int> a(n);
        vector <int> b(n);
        for(int j=0;j<n;j++)
        {
            cin>>a[j];
        }
        for(int k=0;k<n;k++)
        {
            cin>>b[k];
        }
        sum(n,k,a,b);
    }
    return 0;
}