#include<iostream>
using namespace std;
int fact(int n){ 
    int fact=1;
    for(int i=1;i<=n;i++){
        fact=fact*i;
    }
    return fact;
}
int main(){ 
    int n;
    cout<<"Enter the number whose factorial you want to get";
    cin>>n;
    cout<<"The factorial is"<<fact(n);
    return 0;

}