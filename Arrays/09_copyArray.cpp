#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of elements of the array";
    cin>>n;
    int a[n],b[n];
    cout<<"Enter the elements of the array";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        b[i]=a[i];
    }
    cout<<"Copied Array:\n";
    for(int i=0;i<n;i++){
        cout<<b[i]<<" ";
    }

    return 0;
}