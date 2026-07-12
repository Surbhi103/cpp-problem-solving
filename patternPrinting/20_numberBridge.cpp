#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of rows: ";
    cin >> n;

    for(int i = 1; i <= 2*n - 1; i++) {
        cout << i;
    }
    cout << endl;

    int spaces = 1;
    for(int i = 1; i <= n - 1; i++) {
        for(int j = 1; j <= n - i; j++) {
            cout << j;
        }
        for(int j = 1; j <= spaces; j++) {
            cout << " ";
        }

        for(int j = n + i; j <= 2*n - 1; j++) {
            cout << j;
        }

        spaces += 2;
        cout << endl;
    }

    return 0;
}