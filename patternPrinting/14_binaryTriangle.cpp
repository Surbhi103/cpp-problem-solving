#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of rows";
    cin>>n;
    int k=5;
    for(int i=1;i<=n;i++){
        if(i%2!=0) k=1;
        else k=0;
        for(int j=1;j<=i;j++){
            cout<<k;
            if(k==0) k=1;
            else if(k==1) k=0;
        }
        cout<<endl;
    }
    return 0;
}  