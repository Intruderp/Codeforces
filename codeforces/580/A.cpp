#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,l=1,x;
    cin>>n;
    int a[n];
    vector <int> v;
    
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        if(a[i+1]>=a[i] && (i+1)<n)
        l++;
        else
        {
            v.push_back(l);
            l=1;
        }

        
    }
    cout<<*max_element(v.begin(),v.end());
    return 0;
}