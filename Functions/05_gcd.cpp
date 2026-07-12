#include<iostream>
#include<cmath>
using namespace std;
void gcd(int a,int b){
    for(int i=min(a,b);i>=1;i--){
        if(a%i==0&&b%i==0){
        cout<<i;
        break;}
    }
    

}
int main(){
    int a,b;
    cout<<"Enter first number";
    cin>>a;
    cout<<"Enter second number";
    cin>>b;
    gcd(a,b);
    return 0;
}