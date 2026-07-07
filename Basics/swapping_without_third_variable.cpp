#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter First Number";
    cin>>a;
    cout<<"Enter Second Number";
    cin>>b;
    a=a+b;
    b=a-b;
    a=a-b;
    cout << "After swapping:\n";
    cout << "Value of a = " << a << endl;
    cout << "Value of b = " << b << endl;
    return 0;
    
}