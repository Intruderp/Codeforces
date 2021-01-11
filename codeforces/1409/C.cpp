#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,x,y,k;
    cin>>t;
    while(t--)
    {
        cin>>n>>x>>y;
        vector <int> v(n);
        int i=n-1,d;
        v[0]=x;
        int diff=y-x;
        while(diff%i!=0)
        {
            i--;
        }
        k=1;
        for(int j=1;j<=i;j++)
        {
            d=diff/i;
            //cout<<"Bw";
            //cout<<v[j-1]+d<<endl;
            v.push_back(x+d*k);
            k++;
        }
        int r=n-1-i,p;
        p=x-1;
        p=p/d;
        i=1;
        while(p!=0 && r!=0)
        {
            p--;
            r--;
            //cout<<"Begin";
            v.push_back(x-d*i);
           //cout<<x-d*i<<endl;
            i++;
        }
        if(r!=0)
        {
            i=1;
            while(r--)
            {
                v.push_back(y+d*i);
                //cout<<"last"<<y+d*i<<endl;
                i++;
            }
        }
        sort(v.begin(),v.end());
        for(int j=0;j<v.size();j++)
        {
            if(v[j]!=0)
            cout<<v[j]<<' ';
        }
        cout<<endl;

    }
    return 0;
}