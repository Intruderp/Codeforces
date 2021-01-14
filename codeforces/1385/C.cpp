#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int ans=0;
        vector <int> v(n);
        for(int i=0;i<n;i++)
            cin>>v[i];
        int i=0,j=n-1,k;
        while((j-i)>1)
        {
            k=min(v[i],v[j]);
            if(k==v[j] && k<=v[j-1])
            {
                j--;
            }
            else if(k==v[i] && k<=v[i+1])
            {
                i++;
            }
            else
            {
                ans=i+1;
                i++;
            }
            
        }
        cout<<ans<<endl;

        
    }
    return 0;
}