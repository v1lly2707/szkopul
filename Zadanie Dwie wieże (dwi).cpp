#include <bits/stdc++.h>
using namespace std;
int main()
{
	stack < int > stos1;
	stack < int > stos2;
	int x;
	int y;

	long long int  o = 0;
	long long int  s1 = 0, s2 = 0;
	scanf("%d %d", &x, &y);
	for (int i = 0; i < x; i++)
	{
		int a;
		scanf("%d", &a);
		s1 += a;
		stos1.push(a);

	}
	for (int i = 0; i < y; i++)
	{
		int b;
		scanf("%d", &b);
		s2 += b;
		stos2.push(b);

	}

	while (s1 != s2 && (stos1.empty() == false || stos2.empty() == false))
	{
		o++;
		if (s1 > s2)
		{
			s1 -= stos1.top();

			stos1.pop();

		}
		else
		{
			s2 -= stos2.top();
			stos2.pop();

		}
	}


	printf("%d\n", o);

	return 0;
}
