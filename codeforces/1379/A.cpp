#include<bits/stdc++.h>
#define vi vector<int>
#define mp map<int,int>
#define ump unordered_map <int,int>
#define ll long long int
#define pb push_back
#define mod 1000000007
#define int long long
#define  loop(i,x,n) for(int i=x;i<n;i++)
#define rloop(i,n) for(int i=n-1;i>=0;i--)
using namespace std;
/*************************************************************************************************/
                                                                                                   
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t,n,c=0;
    cin>>t;
    string s,s1="abacaba",s2,s3;
    while (t--)
    {
        cin>>n>>s;
        s1="abacaba";
        s2="";
        c=0;
        loop(i,0,n)
        {
            s2=s.substr(i,7);
            if(s2==s1)
            c++;
        }
        if(c==1)
        {
            cout<<"YES"<<endl;
            loop(i,0,n)
            {
                if(s[i]=='?')
                cout<<'z';
                else 
                cout<<s[i];
            }
            cout<<endl;
        }
        else if(c>1)
        cout<<"NO"<<endl;
        else
        {
            bool b=true;
            for(int i=0;i<n;i++)
            {
                s2=s.substr(i,7);
                for(int j=0;j<7;j++)
                {
                    if(s2[j]=='?' || s2[j]==s1[j])
                    {
                        s2[j]=s1[j];
                    }
                    else
                    break;
                }
                if(s2==s1)
                {
                    c=0;
                    s3=s;
                    for(int j=0;j<7;j++)
                    s[j+i]=s2[j];
                    loop(i,0,n)
                    {
                       s2=s.substr(i,7);
                       if(s2==s1)
                       c++;
                    }
                    if(c>1)
                    {
                        s=s3;
                        continue;
                    }
                    cout<<"YES"<<endl;
                    for(char a:s)
                    {
                        if(a=='?')
                        cout<<'z';
                        else 
                        cout<<a;
                    }
                    cout<<endl;
                    b=false;
                    break;        
                }
            }
            if(b)
            cout<<"NO"<<endl;
        }
    }
    
    return 0;
}