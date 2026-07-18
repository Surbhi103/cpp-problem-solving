#include <iostream>
using namespace std;

void checkSorted(int a[], int n) {
    bool sorted = true;

    for (int i = 0; i < n - 1; i++) {
        if (a[i] > a[i + 1]) {
            sorted = false;
            break;
        }
    }

    if (sorted)
        cout << "Array is Sorted";
    else
        cout << "Array is Not Sorted";
}

int main() {
    int n;

    cout << "Enter the number of elements of the array: ";
    cin >> n;

    int a[n];

    cout << "Enter the elements of the array: ";

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    checkSorted(a, n);

    return 0;
}