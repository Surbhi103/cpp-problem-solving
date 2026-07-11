#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of rows";
    cin>>n;
    for(int i=n;n>0;n--){
        for(int j=1;j<=n;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    
return 0;
}