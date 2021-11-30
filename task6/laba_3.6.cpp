#include <iostream>
#include <cmath>
using namespace std;

/*void addItem(double*& arr, int size, double item) {
    double* A = new double[size+1];
    for (int i = 0; i < size; i++) {
        A[i+1] = arr[i];
    }
    A[0] = item;
    size++;
    delete[] arr;
    arr = A;
}*/



double CurrentInput() {
    double a;
    while (!(cin >> a) || a <= -1 || a > INT_MAX) {
        cin.clear();
        cin.ignore(numeric_limits < streamsize > ::max(), '\n');
        cout << "Incorrect input, try again:\n";
    }
    return a;
}

int main()
{
    setlocale(LC_ALL, "ru");
    cout << "выберите значение шага поиска от 0.0001 до 0.1\n";
    double d = CurrentInput();
    double x;
    int min = INT_MAX;
    double value = 1e6;
    if (d >= 0.0001 && d <= 0.1) {
        //int k = 0;
        //double* arr = new double[k];
        for (double i = 0.5; i <= 1.50; i += d) {
            if (value > abs(sqrt(cos(i)) + log(sin(i)) - 0.5)) {
                x = i;
                value = abs(sqrt(cos(i)) + log(sin(i)) - 0.5);
            }
            //addItem(arr, k, value);
            //k++;
        }
        cout << "the solution is " << x << "\n";
    }
    else {
        cout << "значение шага должно быть в пределах от 0.0001 до 0.1\nвведите значение шага еще раз\n";
    }
    system("pause");
    return 0;
}
