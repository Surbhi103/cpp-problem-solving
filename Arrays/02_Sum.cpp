#include<iostream>
using namespace std;
int main(){
    int n;
    int sum=0;
    cout<<"Enter the number of elements of the array";
    cin>>n;
    int a[n];
    cout<<"Enter the elements of the array";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        sum=sum+a[i];
    }
    cout<<"Sum is"<<sum;
    return 0;
}