#include<iostream>
using namespace std;
int main()
{
    int n;
    long long x,s1=0,s2=0,s3=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        s1+=x;
    }
    for(int i=0;i<n-1;i++)
    {
        cin>>x;
        s2+=x;
    }for(int i=0;i<n-2;i++)
    {
        cin>>x;
        s3+=x;
    }
    cout<<s1-s2<<endl<<s2-s3;
    return 0;
}