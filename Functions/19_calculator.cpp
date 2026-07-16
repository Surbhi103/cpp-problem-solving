#include<iostream>
using namespace std;
int add(int n1,int n2){
    return n1+n2;
}
int subtract(int n1,int n2){
    return n1-n2;
}
int multiply(int n1,int n2){
    return n1*n2;
}
int divide(int n1,int n2){
    if(n2==0) cout<<"Division by Zero not possible";
    else
    return n1/n2;
}
int mod(int n1,int n2){
    if(n2==0) cout<<"Division not possible";
    else
    return n1%n2;
}
int main(){
    int n1,n2,op;
    cout<<"Enter First Number";
    cin>>n1;
    cout<<"Enter Second Number";
    cin>>n2;
    cout<<"Enter the Operation You want to perform";
    cout<<"Enter 1 for Addition";
    cout<<"Enter 2 for Subtraction";
    cout<<"Enter 3 for Product";
    cout<<"Enter 4 for Divide";
    cout<<"Enter 5 for Modulus";
    cin>>op;
    switch(op){
    case 1:cout<<add(n1,n2);
         break;
    case 2:cout<<subtract(n1,n2);
           break;
    case 3:cout<<multiply(n1,n2);
           break;
    case 4:cout<<divide(n1,n2);
           break;
    case 5:cout<<mod(n1,n2);
           break;
    default: cout<<"Invalid Input";
    return 0;


}
}