#include <bits/stdc++.h>
using namespace std;


int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n, cnt = 0;
	cin >> n;
	long long service_number[1000005] = {};
	long long fines[1000005] = {};
	long long sum = 0;
	for (int i = 0; i < n; i++)
		cin >> fines[i];


	for (int i = 0; i < n; i++)
		cin >> service_number[i];


	sort(fines, fines + n);
	sort(service_number, service_number + n);

	for (int i = 0, j = n - 1; i < n, j >= 0; i++, j--)
	{
		int x = service_number[j];
		while (service_number[j] > 0)
		{
			service_number[j] /= 10;
			cnt++;
		}
		sum += (fines[i] * (pow(10, cnt))) + x;

		cnt = 0;

	}
	cout << sum;

	return 0;
}
