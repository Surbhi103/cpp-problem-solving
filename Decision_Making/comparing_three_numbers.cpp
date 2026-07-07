#include<iostream>
using namespace std;
int main(){
    int n1,n2,n3;
    cout<<"Enter First Number:";
    cin>>n1;
    cout<<"Enter Second Number:";
    cin>>n2;
    cout<<"Enter Third Number:";
    cin>>n3;
    if (n1 >= n2 && n1 >= n3)
    cout << "N1 is greatest";
    else if (n2 >= n1 && n2 >= n3)
    cout << "N2 is greatest";
    else
    cout << "N3 is greatest";
return 0;
}
