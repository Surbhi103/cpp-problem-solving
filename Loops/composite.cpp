#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number";
    cin>>n;
    bool flag = true;
    for(int i=2;i<n;i++){
        if(n%i==0) {flag=false;
        break;}
}   if(n==2) cout<<"Only even Prime Number";
    else if (flag==true) cout<<"Number is Prime";
    else cout<<"Number is composite";
    return 0;
}