#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number:";
    cin>> n;
    if(n&1)
    cout<<"Number is odd";
    else
    cout<<"Number is even";
    return 0;
}