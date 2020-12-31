#include<bits/stdc++.h>
using namespace std;
bool compare(string s1,string s2)
{
    return s1.length()<s2.length();
}
int main()
{
    int n;
    string s1,s2;
    cin>>n;
    vector <string> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    sort(v.begin(),v.end(),compare);
    // 
    for(int i=0;i<n;i++)
    {
        if(i+1<n)
        {
            s1=v[i];
            s2=v[i+1];
            size_t f=s2.find(s1);
            if(f==string::npos)
            {
                cout<<"NO";
                return 0;
            }
        }
    }
    cout<<"YES"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<v[i]<<endl;
    }
    return 0;

}