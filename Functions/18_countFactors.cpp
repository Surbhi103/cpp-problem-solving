#include<iostream>
using namespace std;
void findFactor(int n){
    int count=0;
    for(int i=1;i<=n;i++){
    if(n%i==0) count++;
    }
    cout<<count;
}
int main(){
    int n;
    cout<<"Enter the number";
    cin>>n;
    findFactor(n);
    return 0;
}