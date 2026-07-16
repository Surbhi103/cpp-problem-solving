#include<iostream>
using namespace std;
void isleap(int n){
    if(n%400==0||(n%4==0&&n%100!=0)){
        cout<<"Year"<<n<<"is a leap year";
    }
    else cout<<"Year"<<n<<"is not a leap year";
}
int main(){
    int n;
    cout<<"Enter the Year";
    cin>>n;
    isleap(n);
    return 0;
}