#include <bits/stdc++.h>

using namespace std;



int main()
{
    int tab[1000005];
    long long int o = 0;
    long long int p = 0;
    long long int x;
    cin >> x;
    for (int i = 1; i <= x; i++)
    {
        cin >> tab[i];
    }


    for (int i = 1; i <= x; i++)
    {
        if (tab[i] == 0)
        {
            o++;
        }
        else
        {
            p += o;
        }
    }

    cout << p;

    return 0;
}
