#include<iostream>
using namespace std;
int main(){
    int M;
    cout<<"Enter your Marks";
    cin>> M;
    if(M>100||M<0){ cout<<"Invalid Marks";
    return 0;}
    if(M>=90 && M<=100) cout<<"A";
    else if(M>=80 && M<90) cout<<"B";
    else if(M>=70 && M<80) cout<<"C";
    else if(M>=60 && M<70) cout<<"D";
    else cout<<"Fail";
    return 0;
}