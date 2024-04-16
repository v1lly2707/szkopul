#include <bits/stdc++.h>
using namespace std;


int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	long long n, m, a, b;
	long long sum = 0;
	long long arr[1000005] = {};
	cin >> n >> m;
	for (int i = 0; i < m; i++)
	{
		cin >> a >> b;
		arr[a]++;
		arr[b]++;

	}
	for (int i = 1; i <= n; i++)
	{
		if (arr[i] <= 2)
			sum += (2 - arr[i]);
	}
	cout << sum;


	return 0;
}
