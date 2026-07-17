#include<iostream>
using namespace std;
void findMin(int a[], int n){
    int min=a[0];
    for (int i=1;i<n;i++){
        if(a[i]<=min){
            min=a[i];
        }
    }
    cout<<"Minimum  element is"<< min;
}
int main(){
    int i,n;
    cout<<"Enter the number of elements of the array";
    cin>>n;
    int a[n];
    cout<<"Enter the elements of the array";
    for(i=0;i<n;i++){
        cin>>a[i];
    }  
    findMin(a,n);

    return 0;
}