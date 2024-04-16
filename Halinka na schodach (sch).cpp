#include <bits/stdc++.h>

using namespace std;

int main()
{
	int x;
	cin >> x;
	int tab[100000];
	queue < int > kolejka;
	queue < int > kolejka1;
	int i = 1;
	int o = 0;
	int p = 0;
	for (i = 1; i <= x; i++)
	{
		cin >> tab[i];
		p++;

		if (tab[i] == 1)
		{
			o++;

			if (tab[i - 1] != 0)
			{
				kolejka1.push(tab[i - 1]);
			}
		}

	}

	cout << o << endl;
	while (kolejka1.empty() == false)
	{
		cout << kolejka1.front() << ' ';
		kolejka1.pop();
	}
	kolejka.push(tab[i - 1]);
	cout << kolejka.front() << endl;









	return 0;
}
