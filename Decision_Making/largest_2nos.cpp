#include<iostream>
using namespace std;
int main(){
    int n1,n2;
    cout<<"Enter First Number:";
    cin>>n1;
    cout<<"Enter Second Number:";
    cin>>n2;
    if(n1>n2)cout<<n1<<"(N1)is greater";
    else if(n1==n2)cout<<n1<<"(N1)and(N2)"<<n2<<"are equal";
    else cout<< n2<<"(N2)is greater";
    return 0;

}