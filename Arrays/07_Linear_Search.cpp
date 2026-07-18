#include<iostream>
using namespace std;
void Linear_search(int a[],int n, int key){
    bool flag=false;
    for(int i=0;i<n;i++){
        if(a[i]==key){
            flag=true;
            break;
        }
     }
     if(flag==true) cout<<"Element Found";
     else cout<<"Element not found";
    
    
}
int main(){
    int n,key;
    cout<<"Enter the number of elements of the array";
    cin>>n;
    int a[n];
    cout<<"Enter the elements of the array";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"Enter the element to search";
    cin>>key;
    Linear_search(a,n,key);

    return 0;
}