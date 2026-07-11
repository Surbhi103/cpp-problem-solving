#include<iostream>
using namespace std;
int main(){
    int count=0;
    int n;
    cout<<"Enter the Number";
    cin>>n;
    int a=n;
    while(n>0){
        n=n/10;
        count++;
    }
    cout<< count;
    if(a==0) cout<<"0";
    return 0;
}