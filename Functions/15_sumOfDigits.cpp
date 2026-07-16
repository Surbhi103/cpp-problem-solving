#include<iostream>
using namespace std;
void findSumofDigit(int n){
    int ldigit;
    int sum=0;
    while(n>0){
        ldigit=n%10;
        sum=sum+ldigit;
        n=n/10;
    }
    cout<<"The sum of digits is"<<sum;
}
int main(){
    int n;
    cout<<"Enter a Number";
    cin>>n;
    findSumofDigit(n);
    return 0;

}