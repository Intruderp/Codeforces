#include<iostream>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int n=s.length();
    int a[n-1],b[n-1];
    for(int i=0;i<n-1;i++)
    {
        if(s[i]==s[i+1])
        {
            a[i]=1;
        }
        else
        {
            a[i]=0;
        }  
        //cout<<a[i]<<' ';
    }
    int sum=0,m,l,r;
    //b[0]=a[0];
    for(int i=0;i<n-1;i++)
    {
        sum+=a[i];
        b[i]=sum;
        //cout<<b[i]<<' ';
    }
    cin>>m;
    for(int i=0;i<m;i++)
    {
        cin>>r>>l;
        if(r==1)
        {
            sum=b[l-2];
        }
        else
        {
            sum=b[l-2]-b[r-2];
        }
        
        cout<<sum<<endl;
    }
    return 0;

}