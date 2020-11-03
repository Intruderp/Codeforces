#include <iostream>
using namespace std;
int main()
{
	int k,r,i=1;
	cin>>k>>r;
	while(true)
	{
	  if((k*i)%10==0)
	  {
			
		break;
	  }
	  
	 else if((k*i)%10==r)
	 {
		
		break;
	 }
	 i++;
	}
		
	cout<<i;
	return 0;
}