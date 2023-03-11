#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int money() {
    int amount;
    cout << "Enter amount: ";
    cin >> amount;
    return amount;
}

string currency() {
    string type;
    cout << "Pick currency:\n";
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
        cout << "SGD -> PHP: " << amount * 40.76f << endl;
    } else if (type == "usd") {
        cout << "USD -> PHP: " << amount * 55.24f << endl;
    } else if (type == "yen") {
        cout << "YEN -> PHP: " << amount * 0.40f << endl;
    } else if (type == "eur") {
        cout << "EUR -> PHP: " << amount * 58.50f << endl;
    } else {
        cout << "Invalid currency type";
    }
    return 0;
}