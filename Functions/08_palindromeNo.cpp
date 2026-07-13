#include<iostream>
using namespace std;
void ispalindrome(int n){
    int ldigit;
    int r=0;
    int a=n;
   while(n>0){
    
        r=r*10;
        ldigit=n%10;
        r=r+ldigit;
        n=n/10;

   }
   if(a==r) cout<<"Yes it's a palindrome";
   else cout<<"No it's not a palindrome";

    }
int main(){
    int n;
    cout<<"Enter the Number";
    cin>>n;
    ispalindrome(n);
    return 0;
}