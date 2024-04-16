#include <bits/stdc++.h>

using namespace std;



int main()
{
    cin.tie();
    cout.tie();
    ios_base::sync_with_stdio();

    int n;
    scanf("%d", &n);
    int M = 0;
    int sum;

    int h[1000005] = {};
    int left[1000005] = {};
    int right[1000005] = {};

    for (int i = 1; i <= n; i++)
        scanf("%d", &h[i]);

    for (int i = 2; i <= n; i++)
        if (h[i] >= h[i - 1])
            left[i] = left[i - 1] + 1;

    for (int i = n - 1; i >= 1; i--)
        if (h[i + 1] <= h[i])
            right[i] = right[i + 1] + 1;

    for (int i = 1; i <= n; i++)
    {
        sum = left[i] + right[i] + 1;
        M = max(M, sum);
    }



    printf("%d\n", M);



    return 0;
}
