#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,c=0;
    cin>>n;
    vector <int> v(n+1,0);
    for(int i=0;i<n;i++)
    {
        cin>>x;
        v[x]++;
    }
    for(int i=1;i<v.size();i++)
    {
        if(v[i]==1)
        continue;
        else
        {
            int j=i+1;
            x=v[i];
            while(x>1 && j<v.size())
            {
                if(v[j]==0)
                {
                    v[j]=1;
                    x--;
                    c+=j-i;
                    j++;
                }
                else
                {
                    j++;
                }
                
            }
            if(x>1)
            {
                while(x>1)
                {
                    v.push_back(1);
                    c+=n+1-i;
                    n++;
                    x--;
                }
            }
        }
        
    }
    cout<<c;
    return 0;

}