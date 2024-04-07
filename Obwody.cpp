#include <bits/stdc++.h>
using namespace std;
struct s
{
	int d, b, diff;

	bool operator < (const s& x)const
	{
		return diff > x.diff;
	}
}; s arr[500005];
int main()
{
	int n, a, b;
	cin >> n;
	long long s1, s2;
	s1 = s2 = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> a >> b;
		arr[i].d = a;
		arr[i].b = b;
		arr[i].diff = a - b;
	}
	sort(arr, arr + n);
	int i;
	for (i = 0; i < n; i++)
	{
		s1 += arr[i].d;
		s2 += arr[i].b;
		if (s1 < s2)
			break;
	}
	cout << i;
	return 0;
}
