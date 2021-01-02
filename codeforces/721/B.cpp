#include<bits/stdc++.h>
using namespace std;
bool compare(string s1,string s2)
{
    return s1.length()<s2.length();
}
int main()
{
    int n,k;
    string s;
    cin>>n>>k;
    vector <string> v(n);
    for(int i=0;i<n;i++)
        cin>>v[i];
    cin>>s;
    sort(v.begin(),v.end(),compare);
    int l=s.length(),p1=-1,p2=-1;
    for(int i=0;i<n;i++)
    {
        if(v[i].length()==l && p1==-1)
        {
            p1=i;
        }
        if(v[i].length()==l)
        {
            p2=i;
        }
       // cout<<v[i]<<endl;
    }
    p1++;
    p2++;
    
    //cout<<p1<<' '<<p2;
    int t1=p1+((p1-1)/k)*5;
    int t2=p2+((p2-1)/k)*5;
    cout<<t1<<' '<<t2;
    return 0;

    
}