#include<iostream>
using namespace std;
int main(){
    int n,l;
    int r=0;
    cout<<"Enter a number";
    cin>>n;
    while(n>0){
        r=r*10;
        l=n%10;
        r=r+l;
        n=n/10;

    }
    cout<<"Reverse is: "<< r ;
    return 0;
}
