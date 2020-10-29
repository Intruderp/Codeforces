#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n,c=0,x;
    cin>>n;
    vector <int> host,guest;
    for(int i=0;i<2*n;i++)
    {
        cin>>x;
        if(i%2==0)
        {
            host.push_back(x);
        }
        else
        {
            guest.push_back(x);
        }
          
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(host[i]==guest[j])
            c++;
        }
    }
    cout<<c;
    return 0;
}