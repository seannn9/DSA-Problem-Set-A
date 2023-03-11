#include <iostream>
using namespace std;

int sum(int a, int b) {
    return a+b;
}

int sum(int a, int b, int c) {
    return a+b+c;
}

int sum(int a, int b, int c, int d) {
    return a+b+c+d;
}

int main() {
    int a, b, c, d;
    cout << "Enter four numbers:\n";
    cin >> a >> b >> c >> d;
    cout << "\nAnswers:\n";
    cout << a << " + " << b << " = " << sum(a, b) << endl;
    cout << a << " + " << b <<  " + " << c << " = " << sum(a, b, c) << endl;
    cout << a << " + " << b <<  " + " << c << " + " << d << " = " << sum(a, b, c,d ) << endl;
    return 0;
}