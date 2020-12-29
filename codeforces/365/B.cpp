#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector <int> v;
    long long a[n];
    for(int i=0;i<n;i++)
      cin>>a[i];
    int s=2;
    for(int i=2;i<n;i++)
    {
        if(a[i]==a[i-1]+a[i-2])
        {
            s++;
        }
        else
        {
            v.push_back(s);
            //cout<<s<<endl;
            s=2;
        }
        
    }
    v.push_back(s);
    if(n==1)
    {
        cout<<1;
        return 0;
    }
    cout<<*max_element(v.begin(),v.end());
    return 0;
}