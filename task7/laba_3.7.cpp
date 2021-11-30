#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    for (int i = 10; i < 100; i++) {
        int x, y;
        x = i / 10;
        y = i % 10;
        if (pow((x + y), 3) == pow(i,2)) {
            cout << i << endl;
        }
    }
    system("pause");
    return 0;
}
