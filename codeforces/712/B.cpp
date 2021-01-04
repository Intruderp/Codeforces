#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int l=0,r=0,u=0,d=0;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='U')
        u++;
        else if(s[i]=='D')
        d++;
        else if(s[i]=='R')
        r++;
        else if(s[i]=='L')
        l++;
    }
    int e1,e2;
    e1=abs(l-r);
    e2=abs(u-d);
    if(e1%2==0 && e2%2==0)
    {
        cout<<e1/2+e2/2;
    }
    else if(e1%2!=0 && e2%2!=0)
    {
        int x=max(e1,e2);
        int y=min(e1,e2);
        cout<<y+(x-y)/2;
    }
    else
    {
        cout<<-1;
    }
    return 0;
    
}