#include <iostream>
using namespace std;

void sort(int arr[5]) {
    int temp;
    for (int i = 0; i < 5-1; i++) {
        for (int j = 0; j < 5-1; j++) {
            if (arr[j] > arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << "\t";
    }
    cout << endl;
}

void sort(int arr[5], bool order) {
    int temp;
    if (!order) {
        for (int i = 0; i < 5-1; i++) {
            for (int j = 0; j < 5-1; j++) {
                if (arr[j] < arr[j+1]) {
                    temp = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = temp;
                }
            }
        }
        for (int i = 0; i < 5; i++) {
        cout << arr[i] << "\t";
        }
        cout << endl;
    } else {
        cout << "\n\tSort Array in Ascending Order:\n";
        sort(arr);
    }
}

int main() {
    int arr[5], num;
    string order;
    for (int i = 0; i < 5; i++) {
        cout << "Enter a number: ";
        cin >> num;
        arr[i] = num;
    }
    cout << "What order do you want to sort? (asc/des): ";
    cin >> order;
    if (order == "asc") {
        cout << "\n\tSort Array in Ascending Order:\n";
        sort(arr);
    } else if (order == "des") {
        cout << "\n\tSort Array in Descending Order\n";
        sort(arr, false);
    }
    return 0;
}