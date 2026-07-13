#include<iostream>
using namespace std;
void isreverseNumber(int n){
    int ldigit;
    int r=0;
   while(n>0){
    
        r=r*10;
        ldigit=n%10;
        r=r+ldigit;
        n=n/10;

   }
   cout<<r;

    }
int main(){
    int n;
    cout<<"Enter the Number";
    cin>>n;
    isreverseNumber(n);
    return 0;
}