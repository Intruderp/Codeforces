#include <iostream>
using namespace std;
int main()
{
    int b,r,x;
    cin>>b>>r;
    x=min(b,r);
    cout<<x<<' '<<(max(b,r)-x)/2;
    return 0;
}