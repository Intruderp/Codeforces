/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <bits/stdc++.h>

using namespace std;


int main()
{
    int n,x;
    vector <int> v;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    int sum1=0,sum2=0,i,j,k=0;
    do
    {
        sum1=0;
        sum2=0;
        for(i=0;i<n-1-k;i++)
        {
            sum1+=v[i];
        }
       // cout<<sum1<<endl;
        for(j=n-1;j>n-2-k;j--)
        {
            sum2+=v[j];
        }
        //cout<<sum2<<endl;
        k++;
        
    }while(sum1>=sum2);
    cout<<k;
    
    

    return 0;
}
