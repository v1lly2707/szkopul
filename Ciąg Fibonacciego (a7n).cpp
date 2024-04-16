#include <bits/stdc++.h>

using namespace std;


int main()
{
    ios_base::sync_with_stdio;
    long long f[100000];
    int x;
    int a;
    f[0] = 1;
    f[1] = 1;




    cin >> a;

    for (int j = 2; j < a; j++)
    {
        f[j] = f[j - 1] + f[j - 2];

    }



    cout << f[a - 1] << endl;









    return 0;
}
