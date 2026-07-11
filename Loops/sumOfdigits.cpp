#include<iostream>
using namespace std;
int main(){
    int n,temp;
    int sum=0;
    cout<<"Enter a number";
    cin>>n;
    while(n>0){
        temp=n%10;
        sum=sum+temp;
        n=n/10;

    }
    cout<<"Sum of digit is: "<< sum;
    return 0;
}
