#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int main()
{
	for (int i = 150; i < 1e6; i++) {
		int value, n = 0;
		value = i;
		while ((i /= 10) > 0) n++;
		n += 1;
		i = value;
		vector<int> a;
		while (i != 0) {
			a.push_back(i % 10);
			i /= 10;
		}
		double s = 0;
		for (int j = 0; j < size(a); j++) {
			s += pow(a[j], n);
		}

		if (s == value) {
			cout << value << " ";
		}
		i = value;
	}
	    
	system("pause");
	return 0;
}
