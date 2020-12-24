#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,c;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>s;
        c=1;
        n=s.length();
        vector <int> v;
        bool b=true;
        for(int i=0;i<n-1;i++)
        {
            if(s[i]=='L' && s[i+1]=='L')
            {
                c++;
                b=false;
            }
            else if(s[i]=='L')
            {
                v.push_back(2);
                //b=true;
            }
            else
            {
                c=1;
            }
            v.push_back(c);
            //cout<<c<<' ';
            
        }
        if(n==1)
        {
            if(s=="R")
            cout<<1<<endl;
            else
            {
                cout<<2<<endl;
            }
            continue;
            
        }
        if(s[n-1]=='L')
        v.push_back(2);
        int m=*max_element(v.begin(),v.end());
        if(m==1||b)
        cout<<m<<endl;
        else
        {
            cout<<m+1<<endl;
        }
        
    }
    return 0;
}