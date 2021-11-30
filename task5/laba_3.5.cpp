#include <iostream>
#include <cmath>
using namespace std;

double CurrentInput() {
    double a;
    while (!(cin >> a) || a<=-1 || a > INT_MAX) {
        cin.clear();
        cin.ignore(numeric_limits < streamsize > ::max(), '\n');
        cout << "Incorrect input, try again:\n";
    }
    return a;
}

int fact(int a) {
    int s = 1;
    for (int i = 1; i <= a; i++) {
        s *= i;
    }
    return s;
}

int main()
{
    setlocale(LC_ALL, "ru");
    cout << "enter value of n (from 1 to 15) and x\n";
    double n = CurrentInput(), x = CurrentInput(), res, s = 0;
    if ((n >= 1 && n <= 15) && (x >= 0.1 && x <= 1)) {
        res = exp(2 * x);
        for (int i = 0; i < n; i++) {
            s += pow((2 * x), i) / fact(i);
        }
        cout << "using row : " << s << endl;
        cout << "using standart functions : " << res << endl;
    }
    else {
        cout << "read the text and enter all values one more time\n";
    }
    
    system("pause");
    return 0;
}

