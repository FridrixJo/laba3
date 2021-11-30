#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double e = 1e-3, sum = 0, n = 0, dn = 0;
    do {
        n++;
        dn = 1 / pow(2, n) + 1 / pow(3, n);
        sum += dn;
    } while (dn > e);
    cout << sum << endl;
    system("pause");
    return 0;
}

