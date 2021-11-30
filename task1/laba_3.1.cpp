#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int i = 1;
    double n = 0;
    while(i<=30){
        double a = 0, b = 0;
        //a = i % 2 == 0 ? i : i / 2;
        //b = i % 2 == 0 ? i * i * i : i * i;
        if (i % 2 == 0) {
            a = i / 2;
            b = pow(i, 3);
        }
        else {
            a = i;
            b = pow(i, 2);
        }
        n += pow((a - b), 2);
        i++;
    }
    cout << n << endl;
    system("pause");
    return 0;
}

