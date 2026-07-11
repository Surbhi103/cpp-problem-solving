#include<iostream>
using namespace std;
int main(){
    int n;
    int a=0,b=1,sum=0;
    cout<<"Enter number of terms";
    cin>>n; 
    for( int i=1;i<=n-2;i++){
        sum=a+b;
        a=b;
        b=sum;
    }
        cout<<"Fibonacci is:"<<sum;
    
    return 0;
}