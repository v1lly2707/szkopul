#include <bits/stdc++.h>

using namespace std;

int main()
{
	int x;
	cin >> x;
	int sum = 0;
	int score = 0;
	int a;
	for (int i = 1; i <= x; i++)
	{
		cin >> a;
		if (a == 1)
		{
			sum++;
		}
		else
		{
			sum = 0;
		}
		score = max(score, sum);

	}
	cout << score << endl;

	return 0;
}
