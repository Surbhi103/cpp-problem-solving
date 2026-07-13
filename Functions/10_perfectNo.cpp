#include<iostream>
using namespace std;
void isperfect(int n){
    int a=0;
    for(int i=1;i<n;i++){
        if(n%i==0){
            a+=i;
             
        }
    }
        if(n==a) cout<<"Yes it is a Perfect Number";
        else cout<<"No it is not a perfect Number";
    

}
int main(){
    int n;
    cout<<"Enter the number";
    cin>>n;
    isperfect(n);
    return 0;
}