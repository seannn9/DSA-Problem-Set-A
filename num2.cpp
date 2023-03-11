#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int money() {
    int amount;
    cout << "Enter amount to be converted in php: ";
    cin >> amount;
    return amount;
}

string currency() {
    string type;
    cout << "Pick currency to convert:\n";
    cout << "SGD - Singapore dollar\nUSD - US dollar\nYEN - Japanese yen\nEUR - Euros\n";
    cout << "Type: ";
    cin >> type;
    transform(type.begin(), type.end(), type.begin(), ::tolower);
    return type;
}

int main() {
    int php;
    float amount = money();
    string type = currency();
    if (type == "sgd") {
        cout << "SGD -> PHP: " << amount * 40.76 << endl;
    } else if (type == "usd") {
        cout << "USD -> PHP: " << amount * 55.24 << endl;
    } else if (type == "yen") {
        cout << "YEN -> PHP: " << amount * 0.40 << endl;
    } else if (type == "eur") {
        cout << "EUR -> PHP: " << amount * 58.50 << endl;
    } else {
        cout << "Invalid currency type\n";
    }
    return 0;
}