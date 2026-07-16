#include<iostream>
using namespace std;
void findChar(char ch){
    if(ch>='A'&&ch<='Z'){
        cout<<"Uppercase Letter";
    }
    else if(ch>='a'&&ch<='z'){
        cout<<"Lowercase letter";
    }
    else if(ch>='0'&&ch<='9'){
        cout<<"A Digit";
    }
    else
    cout<<"A Special Character";
}
int main(){
    char ch;
    cout<<"Enter a character";
    cin>> ch;
    findChar(ch);
    return 0;
}