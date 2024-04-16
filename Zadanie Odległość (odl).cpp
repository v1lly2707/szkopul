#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	long long n, arr[1000005], best[1000005] = {}, Max = 0;
	cin >> n;
	for (int i = 1; i <= n; i++)
		cin >> arr[i];

	best[1] = arr[1];

	for (int i = 2; i <= n; i++)
		best[i] = max(best[i - 1] + 1, arr[i]);

	for (int i = 1; i <= n; i++)
		if (arr[i] + best[i] > Max)
			Max = arr[i] + best[i];


	cout << Max;



	return 0;
}
