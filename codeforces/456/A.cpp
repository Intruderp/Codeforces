#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,y;
    cin>>n;
    bool b=false;
    map<int,int> m;
    for(int i=0;i<n;i++)
    {
        cin>>x>>y;
        m[y]=x;
        
    }
    auto it1=m.begin();
    auto it2=m.end();
    //it2--;
    for(it1=m.begin();it1!=m.end();it1++)
    { 
        auto it3=it1;
        it3++;
        if(it3!=it2 && (it1->second>(it3->second)))
        {
            it1--;
            b=true;
            break;
        }
    }
    if(b)
    cout<<"Happy Alex";
    else
    {
        cout<<"Poor Alex";
    }
    return 0;
}