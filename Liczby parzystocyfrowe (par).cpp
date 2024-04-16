#include <bits/stdc++.h>
using namespace std;
int main()
{
	int arr[5] = { 0,2,4,6,8 };
	vector < long long > ans;

	long long N, x;
	cin >> N;
	while (N > 0)
	{
		x = N % 5;
		ans.push_back(arr[x]);
		N /= 5;

	}
	for (int i = ans.size() - 1; i >= 0; i--)
		cout << ans[i];
	return 0;
}
