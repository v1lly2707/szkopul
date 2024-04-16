#include <bits/stdc++.h>

using namespace std;

int p;
const int pom = pow(2, 30);
int main()
{
    ios_base::sync_with_stdio();
    cin.tie(NULL);
    cout.tie(NULL);

    int z, s;
    scanf("%d", &z);
    int tab[1000005];
    tab[0] = 1;
    tab[1] = 1;
    for (int i = 2; i <= 1000005; i++)
    {
        tab[i] = (tab[i - 1] + tab[i - 2]) % pom;

    }
    while (z--)
    {
        scanf("%d %d", &s, &p);
        int k = pow(2, p);
        printf("%d\n", tab[s] % k);




    }
    return 0;
}
