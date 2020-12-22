#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a;
    cin>>t;
    while(t--)
    {
        cin>>a;
        int r=180-a;
        if(360%r==0)
        cout<<"YES";
        else
        {
            cout<<"NO";
        }
        cout<<endl;
    }
    return 0;
}