#include <bits/stdc++.h>
using namespace std;
vector < int > vec;
int main()
{
	int n, a;
	cin >> n;
	//int arr[1000005];
	for (int i = 0; i < n; i++)
	{
		cin >> a;
		vec.push_back(a);
	}
	sort(vec.begin(), vec.end());
	if (n >= 10)
	{
		for (int i = vec.size() - 1; i >= vec.size() - 10; i--)
			cout << vec[i] << ' ';
	}
	else
		for (int i = vec.size() - 1; i >= 0; i--)
			cout << vec[i] << ' ';
	return 0;
}
