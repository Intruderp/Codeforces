#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int aa[n];
    set <int> s;
    for(int i=0;i<n;i++)
    {
        cin>>aa[i];
        s.insert(aa[i]);
        //cout<<s[i]<<' ';
    }
    //cout<<s.size();
    int x=s.size(),a,b,c;
    if(x==1)
    cout<<0;
    else if(x==2)
    {
        auto it=s.begin();
        a=*it;
        it++;
        b=*it;
        if((b-a)%2==0)
        {
            cout<<(b-a)/2;
        }
        else
        {
            cout<<abs(b-a);
        }

    }
    else if(x==3)
    {
        auto it=s.begin();
        a=*it;
        it++;
        b=*it;
        it++;
        c=*it;
        
        if((a+c)%2==0 && (a+c)/2==b)
        {
            cout<<abs(a-b);
        }
        else
        {
            cout<<-1;
        }
        
    }
    else
    {
        cout<<-1;
    }
    return 0;
    

}