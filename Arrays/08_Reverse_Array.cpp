#include<iostream>
using namespace std;
void Reversed_array(int a[], int n){
    int temp;
    for(int i=0;i<(n/2);i++){
       temp=a[i];
       a[i]=a[n-i-1];
       a[n-i-1]=temp; 
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<"\n";
    }

}
int main(){
    int n;
    cout<<"Enter the number of elements of the array";
    cin>>n;
    int a[n];
    cout<<"Enter the elements of the array";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
   
    Reversed_array(a,n);
    return 0;
}