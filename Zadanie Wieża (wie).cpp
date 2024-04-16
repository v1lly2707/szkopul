#include <bits/stdc++.h>

using namespace std;


int main()
{
    ios_base::sync_with_stdio();
    cin.tie(0);
    cout.tie(0);

    int n, m;
    int a[500005], b[500005];
    cin >> n >> m;

    for (int i = 1; i <= n; i++)
        cin >> a[i];

    for (int i = 2; i <= n; i++)
        a[i] = max(a[i], a[i - 1]);

    for (int i = 1; i <= m; i++)
        cin >> b[i];


    for (int i = 1; i <= m; i++)
    {
        int lo = 0;
        int hi = n;
        while (lo < hi)
        {
            int middle = (lo + hi + 1) / 2;
            if (a[middle] >= b[i])
                hi = middle - 1;
            else lo = middle;
        }
        cout << (lo + hi + 1) / 2 << ' ';
    }

    return 0;
}
