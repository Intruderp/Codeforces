#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q,c,m,x;
    cin>>q;
    while(q--)
    {
        cin>>c>>m>>x;
        int t=c+m+x;
        int mmm=t/3;
        int mm=min(c,m);
        cout<<min(mmm,mm)<<endl;
    }
    return 0;
}