#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector <int> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    int m=*max_element(v.begin(),v.end());
    int s=0;
    for(int i=0;i<n;i++)
    {
        s=s+(m-v[i]);
    }
    cout<<s;
    return 0;

}