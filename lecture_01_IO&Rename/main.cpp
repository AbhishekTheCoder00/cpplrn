#include "Sumsqrt.h"
#include <iostream>

using namespace std;

int main() {
    int a, b;

    cout << "Enter two numbers:" << endl;
    cin >> a >> b;

    Sumsqrt obj(a, b);

    obj.calculateSum();
    obj.calculateSqrt();

    return 0;
}
