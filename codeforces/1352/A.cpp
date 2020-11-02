#include <bits/stdc++.h>
using namespace std;
void sum(string s)
{
    string s1,s2;
    int x,y;
    vector <string> v;
    for(int i=s.length()-1;i!=-1;i--)
    {
        s1=s.substr(i);
        if(s1.length()==1 && s1!="0")
        v.push_back(s1);
        else if(s1[0]!='0')
        {
            stringstream ss(s1);
            ss>>x;
            stringstream xy(s.substr(i+1));
            xy>>y; 

            s2=to_string(x-y);
            v.push_back(s2);
        }
            
    }
    cout<<v.size()<<endl;
    for(int i=v.size()-1;i>=0;i--)
    cout<<v[i]<<' ';
}
int main()
{
    int t;
    string s;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>s;
        sum(s);
    }
    return 0;
}