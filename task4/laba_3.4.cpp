#include <iostream>
#include <cmath>
using namespace std;

int CurrentInput() {
    int a;
    while (!(cin >> a) || a <= 1 || a > INT_MAX) {
        cin.clear();
        cin.ignore(numeric_limits < streamsize > ::max(), '\n');
        cout << "Incorrect input, try again:\n";
    }
    return a;
}

int main()
{
    cout << "enter random number\n";
    int n = CurrentInput(), s = 0;
    /*for (int i = 0; i <= abs(n); i++) {
        if (!(i % 2)) {
            s += i;
        }
    }*/
    int i = 0;
    do {
        if (!(i % 2)) {
            s += i;
        }
        i++;
    } while (i <= n);
     
    cout << s << " with cycle\n";
    cout << n / 2 * (n / 2 + 1) << " without cycle\n";
        
    system("pause");
    return 0;
}

