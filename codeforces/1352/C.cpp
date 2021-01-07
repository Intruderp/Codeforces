#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,n,k;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        long long i=1,nd=n*1-1;
        // while(nd<k)
        // {
        //     i++;
        //     nd=n*i-i;
        // }
        long long x=n-1,y;
        if(k%x==0)
        {
            y=k/x;
        }
        else
        {
            y=k/x+1;
        }
        i=y;
        nd=n*i-i;
        cout<<n*i-(nd-k)-1<<endl;

    }
    return 0;
}