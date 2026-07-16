#include<iostream>
using namespace std;
void countDigit(int n){
    int ldigit;
    int count=0;
    while(n>0){
        count++;
        n=n/10;
    }
    cout<<"The Number of digits is"<<count;
}
int main(){
    int n;
    cout<<"Enter a Number";
    cin>>n;
    countDigit(n);
    return 0;

}