#include <iostream>
using namespace std;

int input() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    return num;
}

void product(int table, int num) {
    for (int i = 1; i <= table; i++) {
        cout << num << "x" << i << " = " << num*i << endl;
    }
}

int main() {
    int num = input(), table;
    do {
        cout << "Enter multiplier: ";
        cin >> table;
        if (table > 10) {
            cout << "Only up to 10\n";
        }
    } while (table < 1 || table > 10);
    product(table, num);
    return 0;
}