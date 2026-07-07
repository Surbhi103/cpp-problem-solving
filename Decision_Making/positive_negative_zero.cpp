#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number:";
    cin>> n;
    if(n>0) cout<<"Number is Positive";
    else if(n==0) cout<<"Number is Zero";
    else cout<<"Number is Negative";
    return 0;
}