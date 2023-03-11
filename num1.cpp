#include <iostream>
using namespace std;

int sum(int a, int b) {
    return a+b;
}

int diff(int a, int b) {
    return a-b;
}

int prod(int a, int b) {
    return a*b;
}

float quo(int a, int b) {
    return float(a)/b;
}

float rem(int a, int b) {
    return a%b;
}

int main() {
    int a, b;
    cout << "Enter 2 numbers:\n";
    cin >> a >> b;

    cout << "Answers:\n";
    cout << "Sum: " << sum(a, b) << endl;
    cout << "Difference:" << diff(a, b) << endl;
    cout << "Prodcuct:" << prod(a,b) << endl;
    cout << "Quotient:" << quo(a, b) << endl;
    cout << "Remainder:" << rem(a, b) << endl;
    return 0;
}