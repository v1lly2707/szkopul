#include <bits/stdc++.h>
using namespace std;
int main()
{
	string a;
	int n, cnt = 0;
	cin >> a;
	sort(a.begin(), a.end());
	string b;
	//	while(n--)
	//	{
	cin >> b;
	sort(b.begin(), b.end());
	if (a == b)
		cout << "TAK";
	else cout << "NIE";

	//	}
		//cout << cnt;
	return 0;
}
