#include<iostream>
using namespace std;
int main(){
    int i,n;
    cout<<"Enter the number of elements of the array";
    cin>>n;
    int a[n];
    cout<<"Enter the elements of the array";
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    int max=a[0];
    for(i=1;i<n;i++){
        if(a[i]>=max){
            max=a[i];
        }
    }
    cout<<"Maximum element is"<< max;

    return 0;
}