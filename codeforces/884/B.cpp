#include<iostream>
using namespace std;
int main()
{
    int n,x,a;
    cin>>n>>x;
    long long sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        sum+=a;
    }
    if(n==x-sum+1)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    return 0;

}