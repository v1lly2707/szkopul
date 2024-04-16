#include <bits/stdc++.h>
using namespace std;
int main()
{
	int x;

	long long a;
	long long silnia;
	silnia = 1;
	cin >> a;
	for (int j = a; j > 1; j--)
		silnia *= j;

	cout << silnia;

	return 0;
}
