#include <iostream>
#include <cmath>
using namespace std;

int fact(int a) {
    int s = 1;
    for (int i = 1; i <= a; i++) {
        s *= i;
    }
    return s;
}

int main()
{
    int a = 0, m = 20;
    double pi = 3.1415, b = pi / 2, h = (b - a) / m, x;
    for (double j = 0; j <= b; j += 0.1) {
        x = a + j * h;
        double sinx = 0, cosx = 0;
        for (int i = 0; i < 5; i++) {
            sinx += pow((-1), i) * pow(x, 2 * i + 1) / fact(2 * i + 1);
        }
        for (int i = 0; i < 5; i++) {
            cosx += pow((-1), i) * pow(x, 2 * i) / fact(2 * i);
        }
        cout << "expression value sin(x) - cos(x) = " << sinx - cosx << endl;
    }
    system("pause");
    return 0;
}

