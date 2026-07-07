// Input two numbers and print: 
//sum
//Difference
//Product
//Quotient
//Remainder

#include<iostream>
using namespace std;
int main(){
    cout<<"first practice question"<<endl;
int n1,n2;
cout<< "Enter first number" <<endl;
cin>> n1;
cout<< "Enter Second number" <<endl;
cin>> n2;
cout<< "Sum is:" <<n1+n2<< endl;
cout<< "Difference is" <<n1-n2 << endl;
cout<< "Product is:" << n1*n2 << endl;
cout<< "quotient is:" <<n1/n2 << endl;
if(n2!=0){
cout<< "Remainder is" <<n1%n2 << endl;
}
return 0;+
}