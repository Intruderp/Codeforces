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
	int n, x, k, m;
	cin >> n >> k;
	int ans = 0, c = 0;
	vi v(k, 0);
	loop(i, 0, n)
	{
		cin >> x;
		v[x % k]++;
	}
	int i = 1, j = k - 1;
	while (i <= j)
	{
		m = min(v[i], v[j]);
		if (i == j)
			ans += (m / 2) * 2;
		else
			ans += m * 2;
		//cout << i << ' ' << j << endl;
		i++;
		j--;
	}
	ans += (v[0] / 2) * 2;
	cout << ans;
	return 0;
}