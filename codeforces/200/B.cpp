#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    float n,sum=0,x;
    float result;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        sum+=x;
    }
    
    result=sum/n;
    cout<<fixed<<setprecision(12)<<result<<endl;
   // printf("%.12f",result);

    return 0;
}