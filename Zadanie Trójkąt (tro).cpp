#include <bits/stdc++.h>
using namespace std;

int main() {
	long long a, b, c;
	cin >> a >> b >> c;
	if ((a + b > c) && (b + c > a) && (a + c > b))
		cout << "TAK";
	else cout << "NIE";
	return 0;
}
