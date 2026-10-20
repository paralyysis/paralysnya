#include <iostream>
#include <cmath>

using namespace std;

int main() {
    setlocale(LC_ALL, "Ukrainian");

    double a;
    double b;

    cout << "=== Програма: Піднесення числа до степеня ===" << endl;
    
    cout << "Введіть число a (основа): ";
    cin >> a;
    
    cout << "Введіть ступінь b: ";
    cin >> b;

    double result = pow(a, b);

    cout << "Результат: " << a << " у степені " << b << " дорівнює " << result << endl;

    return 0;
}