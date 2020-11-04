#include <iostream>
using namespace std;
int main()
{
    int x,y,z;
    cin>>x>>y>>z;
    int M=max(x,max(y,z));
    int m=min(x,min(y,z));
    cout<<M-m;
    return 0;
}