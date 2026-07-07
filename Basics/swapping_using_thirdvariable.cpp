#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter First Number";
    cin>> a;
    cout<<"Enter Secod Number";
    cin>> b;
    int temp=a;
    a=b;
    b=temp;
    cout << "After swapping:\n";
    cout << "Value of a = " << a << endl;
    cout << "Value of b = " << b << endl;
    return 0;
}