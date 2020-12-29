#include<iostream>
#include <vector>
using namespace std;
int main()
{
    int n,c=0;
    string s1,s2;
    cin>>s1>>s2;
    n=s1.length();
    vector <int> v;
    char a[n];
    for(int i=0;i<n;i++)
    {
        if(s1[i]==s2[i])
        a[i]=s1[i];
        else
        {
            v.push_back(i);
            c++;
        }
        
    }
    if(c%2!=0)
    cout<<"impossible";
    else
    {
        for(int i=0;i<v.size();i++)
        {
            if(i+1<v.size() && s1[v[i]]==s1[v[i+1]])
            {
                a[v[i]]='0';
                a[v[i+1]]='1';
            }
            else if(i+1<v.size())
            {
                a[v[i]]='1';
                a[v[i+1]]='1';
            }
            i++;    
            
        }
        for(int i=0;i<n;i++)
        cout<<a[i];
    }
    return 0;
}