#include<iostream>
using namespace std;
void isarmstrong(int n){
    int a=n;
    int ld;
    int ano=0;
    while(n>0){
        ld=n%10;
        ano+=(ld*ld*ld);
        n/=10;
    }
    if(a==ano) cout<<"Yes, an Armstrong Number";
    else cout<<"No, not an Armstrong Number";

}
int main(){
    int n;
    cout<<"Enter the number";
    cin>>n;
    isarmstrong(n);
    return 0;
}