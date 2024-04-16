#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int cnt = 0;
	int n, k, arr[1000005] = {}; // n,k<=1000000
	cin >> n >> k;
	for (int i = 0; i < n; i++)
		cin >> arr[i]; // 0-dziewczynka 1 chlopiec

	int p = 0;
	int ans = n + 1;
	for (int l = 0; l < n; cnt -= (arr[l++] == 0))
	{
		while (p < n && cnt < k)
		{
			if (arr[p] == 0)
				cnt++;

			p++;
		}
		if (cnt == k)
			ans = min(ans, p - l);

	}
	if (ans == n + 1)
		cout << "NIE";
	else cout << ans - k;

	return 0;
}
