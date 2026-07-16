#include <iostream>
using namespace std;

void findMaximum(int n1, int n2, int n3)
{
    if (n1 == n2 && n2 == n3)
    {
        cout << "All three numbers are equal.";
    }
    else if (n1 >= n2 && n1 >= n3)
    {
        cout << n1 << " is the greatest.";
    }
    else if (n2 >= n1 && n2 >= n3)
    {
        cout << n2 << " is the greatest.";
    }
    else
    {
        cout << n3 << " is the greatest.";
    }
}

int main()
{
    int n1, n2, n3;

    cout << "Enter first number: ";
    cin >> n1;

    cout << "Enter second number: ";
    cin >> n2;

    cout << "Enter third number: ";
    cin >> n3;

    findMaximum(n1, n2, n3);

    return 0;
}