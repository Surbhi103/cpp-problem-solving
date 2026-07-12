#include<iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"Enter number of lines";
    cin>>n;
     m=n-1;
    for(int q=1;q<=2*n-1;q++) cout<<"*";
    cout<<endl;
    for(int i=1;i<=m;i++){
        for(int j=1;j<=m+1-i;j++){
            cout<<"*";
        }
        for(int j=1;j<=2*i-1;j++) cout<<" ";
        for(int j=1;j<=m+1-i;j++){
            cout<<"*";
        }
    cout<<endl;
    }
    
return 0;
}