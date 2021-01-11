#include<bits/stdc++.h>
using namespace std;
void subset(int a[],int n,int i,string osf)
{
    if(i==n)
    {
        cout<<osf<<endl;
        return ;
    }
    subset(a,5,i+1,osf+to_string(a[i])+" ");
    subset(a,5,i+1,osf);
}
int c=0;
void lex(string s,int n)
{
    if(c>=n+1)
    return ;
    stringstream ss(s);
    int k;
    ss>>k;
    if(k<=n)
    {
        c++;
        cout<<s<<endl;
    }
    if(s>to_string(n))
    return ;
    for(int i=1;i<10;i++)
    {
        lex(s+to_string(i),n);
    }
}
long long dp[105][100005];

long long knapsack(int w[],int v[],int c,int n)
{
    if(c==0 || n==0)
    {
        return 0;
    }
    if(dp[n][c]!=-1)
    return dp[n][c];
    if(w[n-1]<=c)
    {
        return dp[n][c]=max(v[n-1]+knapsack(w,v,c-w[n-1],n-1),knapsack(w,v,c,n-1));
    }
    else
    {
        return dp[n][c]=knapsack(w,v,c,n-1);
    }
    
}

int main()
{
    // 
    // int w[5]={2,4,6,8,10};
    // int v[5]={1,3,6,9,9};
    // int c=15;
    int n,c;
    cin>>n>>c;
    int w[n],v[n];
    for(int i=0;i<n;i++)
        cin>>w[i]>>v[i];
    memset(dp,-1,sizeof(dp));
    cout<<knapsack(w,v,c,n);
    return 0;
}