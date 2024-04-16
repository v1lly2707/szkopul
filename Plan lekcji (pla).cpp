#include <bits/stdc++.h>

using namespace std;

int main()
{
	int x;
	cin >> x;
	int o = 0;
	int p = 0;
	long long int tab[10000];
	for (int i = 0; i < x; i++)
	{
		cin >> tab[i];


	}
	for (int i = 0; i < x; i++)
	{
		if (tab[i] == 1)
		{
			o++;
		}
		else if (tab[i] == 0 && tab[i + 1] == 1 && tab[i - 1] == 1)
		{
			o++;
		}
	}

	cout << o;
	return 0;
}
