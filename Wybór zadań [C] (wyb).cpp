#include <bits/stdc++.h>

using namespace std;

int main()
{
	int a1, a2, a3, a4, a5, b1, b2, b3, b4, b5, c1, c2, c3, c4, c5;
	a1 = a2 = a3 = a4 = a5 = b1 = b2 = b3 = b4 = b5 = c1 = c2 = c3 = c4 = c5 = 0;
	int x;
	cin >> x;
	string pozycja;
	while (x--)
	{
		cin >> pozycja;
		if (pozycja == "1A")
			a1++;
		else if (pozycja == "1B")
			b1++;
		else if (pozycja == "1C")
			c1++;
		else if (pozycja == "2A")
			a2++;
		else if (pozycja == "2B")
			b2++;
		else if (pozycja == "2C")
			c2++;
		else if (pozycja == "3A")
			a3++;
		else if (pozycja == "3B")
			b3++;
		else if (pozycja == "3C")
			c3++;
		else if (pozycja == "4A")
			a4++;
		else if (pozycja == "4B")
			b4++;
		else if (pozycja == "4C")
			c4++;
		else if (pozycja == "5A")
			a5++;
		else if (pozycja == "5B")
			b5++;
		else if (pozycja == "5C")
			c5++;

	}
	if (a1 >= 1 && b1 >= 1 && c1 >= 1 && a2 >= 1 && b2 >= 1 && c2 >= 1 && a3 >= 1 && b3 >= 1 && c3 >= 1 && a4 >= 1 && b4 >= 1 && c4 >= 1 && a5 > 1 && b5 > 1 && c5 > 1)
		cout << "TAK";
	else
		cout << "NIE";
	return 0;
}
