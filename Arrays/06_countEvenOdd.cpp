#include<iostream>
using namespace std;
void countEvenOdd(int a[],int n){
    int even=0;
    int odd=0;
    for(int i=0;i<n;i++){
    if(a[i]%2==0) even++;
    else odd++;
}cout<<"Even Count is:"<<even<<"\n";
cout<<"Odd Count is:"<<odd;

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
    countEvenOdd(a,n);
    return 0;
}