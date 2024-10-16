#include "Sumsqrt.h"

using namespace std;

Sumsqrt:: Sumsqrt(int a, int b) : num1(a), num2(b), sum(0) {}

void Sumsqrt::calculateSum(){
    sum = num1 + num2;
     cout << "Sum of " << num1 << " and " << num2 << " is: " << sum << endl;
}

void Sumsqrt::calculateSqrt() {
    if (sum >= 0) {
        double sqrtSum = sqrt(sum);
        cout << "Square root of the sum is: " << sqrtSum << endl;
    } else {
        cout << "Square root cannot be calculated for negative numbers!" << endl;
    }
}