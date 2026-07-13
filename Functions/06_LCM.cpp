#include<iostream>
using namespace std;
void lcm(int a,int b){
    for(int i=1;i<=a*b;i++){
        if(i%a==0 && i%b==0){
            cout<< i <<"is the lcm";
            break;
        }
    }


}
int main(){
    int n1,n2;
    cout<<"Enter First Number";
    cin>>n1;
    cout<<"Enter Second Number";
    cin>>n2;
    lcm(n1,n2);
    return 0;
}