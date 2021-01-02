#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    float m;
    cin>>n;
    float a[n][2];
    for(int i=0;i<n;i++)
      cin>>a[i][0]>>a[i][1];
    int c=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            m=(a[j][1]-a[i][1])/(a[j][0]-a[i][0]);
            if(m>=-1 && m<=1)
            {
                c++;
            }
        }
    }
    cout<<c<<endl;
  	return 0;

}