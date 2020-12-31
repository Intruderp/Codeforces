#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,m;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        int s=0;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            s+=a[i];
        }
        if(n==2 || m<n)
        {
            cout<<-1<<endl;
            continue;
        }
        cout<<s*2<<endl;
        for(int i=1;i<n;i++)
        {
            cout<<i<<' '<<i+1<<endl;
        }
        cout<<n<<' '<<1<<endl;
        
    }
    return 0;
}