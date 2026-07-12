#include<iostream>
using namespace std;
void fun( int n){
    int a=0;
    int b=1;
    int sum=0;
    cout<<a;
    for( int i=1;i<=n-1;i++){
        sum=a+b;
        a=b;
        b=sum;
        cout<<a;
    }
}
int main(){
    int n;
    cout<<"Enter the number of terms";
    cin>>n;
    fun(n);

}