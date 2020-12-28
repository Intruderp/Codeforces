#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
      cin>>a[i];
    int c=0,m=a[0];
    vector <int> v;
    for(int i=0;i<n;i++)
    {
        m=a[i];
        c=0;
        for(int j=i;j<n;j++)
        {
            if(a[j]<=m)
            {
                c++;
                m=a[j];
            }
            else{
                break;
            }
            
        }
        m=a[i];
        for(int j=i-1;j>=0;j--)
        {
            if(a[j]<=m)
            {
                c++;
                m=a[j];
            }
            else{
                break;
            }
        }
        v.push_back(c);
    }
    cout<<*max_element(v.begin(),v.end());
    return 0;
}