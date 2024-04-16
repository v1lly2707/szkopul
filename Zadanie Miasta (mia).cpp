#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int x;
    cin >> x;
    int tab[1000005] = {};
    int pom1[1000005] = {};
    int pom2[1000005] = {};

    for (int i = 1; i < x; i++)
        cin >> tab[i];

    for (int i = 2; i <= x; i++)
        if (tab[i - 1] == 1 || tab[i - 1] == 2)
            pom1[i] = pom1[i - 1] + 1;

    for (int i = x - 1; i >= 1; i--)
        if (tab[i] == 0 || tab[i] == 2)
            pom2[i] = pom2[i + 1] + 1;


    for (int i = 1; i <= x; i++)
        cout << pom1[i] + pom2[i] << ' ';

    return 0;
}
