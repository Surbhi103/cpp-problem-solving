#include<iostream>
using namespace std;
void maxNum(int n1,int n2){
    if(n1>n2) cout<<n1<<"is greater";
    else if (n2>n1) cout<<n2<<"is greater";
    else cout<<"Both numbers are equal";
}
int main(){
    int n1,n2;
    cout<<"Enter First Number";
    cin>>n1;
    cout<<"Enter Second Number";
    cin>>n2;
    maxNum(n1,n2);
    return 0;
}
