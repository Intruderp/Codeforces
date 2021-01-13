#include<bits/stdc++.h>
using namespace std;
int main()
{
    int d,sum,sum1=0,sum2=0;
    cin>>d>>sum;
    int a[d][2],b[d];
    for(int i=0;i<d;i++)
    {
        cin>>a[i][0]>>a[i][1];
        sum1+=a[i][0];
        sum2+=a[i][1];  
    }
    if(sum>=sum1 && sum<=sum2)
    {
        int e=sum-sum1,e1;
        for(int i=d-1;i>=0;i--)
        {
           e1=a[i][1]-a[i][0];
           b[i]=a[i][0]+min(e,e1);
           e=e-min(e,e1);
        }
        cout<<"YES"<<endl;
        for(int i=0;i<d;i++)
            cout<<b[i]<<' ';
    }
    else
    {
        cout<<"NO";
    }
    return 0;
    
}