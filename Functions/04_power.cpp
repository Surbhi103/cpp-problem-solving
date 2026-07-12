#include<iostream>
using namespace std;
void pow(int b,int exp){
    int pro=1;
    for(int i=1;i<=exp;i++){
        pro=pro*b;
    }
    cout<< pro;
    

}
int main(){
    int b,exp;
    cout<<"Enter Base";
    cin>>b;
    cout<<"Enter EXponent";
    cin>>exp;
    pow(b,exp);
    return 0;
}