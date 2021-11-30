#include <iostream>
#include <cmath>
using namespace std;

int CurrentInput() {
	int a;
	while (!(cin >> a) || a <= 0 || a > INT_MAX) {
		cin.clear();
		cin.ignore(numeric_limits < streamsize > ::max(), '\n');
		cout << "Incorrect input, try again:\n";
	}
	return a;
}

int main()
{
	cout << "enter random n form 1 to 100\n";
	int n = CurrentInput();
	int a[100];
	if (n >= 1 && n <= 100) {
		cout << "enter value of a " << n << " times\n";
		for (int i = 0; i < n; i++) {
			a[i] = CurrentInput();
		}

		int s = 0;
		for (int i = 0; i < n; i++) {
			s += pow(-1, i) * pow(2, i) * a[i];
		}
		cout << s << endl;
	}
	else {
		cout << "enter value of n one more time\n";
	}
	system("pause");
	return 0;
}

