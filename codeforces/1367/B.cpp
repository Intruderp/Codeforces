#include <iostream>
using namespace std;
int main()
{
    int t,n,c=0,cc=0;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>n;
        int a[n];
        c=0;
        cc=0;
        for(int j=0;j<n;j++)
        {
            cin>>a[j];
            if(j%2==0 && a[j]%2==1)
            c++;
            else if(j%2==1 && a[j]%2==0)
            cc++;
        }
            if(c==cc)
            cout<<c<<endl;
            else
            {
                cout<<-1<<endl;
            }
            

        
    }
    return 0;

}