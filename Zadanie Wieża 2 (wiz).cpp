#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n, m;
	cin >> n >> m;
	multiset < int > ml;
	int pom;
	multiset < int > ::iterator it;
	int stairs[500005] = {};
	int height[500005] = {};
	int prefix_sum[500005] = {};
	int arr[500005] = {};
	int idx = 0;
	for (int i = 1; i <= n; i++)
		cin >> stairs[i];


	for (int i = 1; i <= m; i++)
		cin >> height[i];

	for (int i = 2; i <= n; i++)
		prefix_sum[i] = max(stairs[i], stairs[i - 1]);

	idx = n;
	for (int i = 1; i <= m; i++, idx--)
	{
		while (idx > 0 && prefix_sum[idx] >= height[i])
			idx--;


		cout << max(0, idx) << ' ';
		//ml.insert(idx);
	}



	return 0;

}
