#include<iostream>
using namespace std;
int main(){
    int n1,n2;
    char op;
    cout<<"Enter First Number:";
    cin>>n1;
    cout<<"Enter Second Number:";
    cin>>n2;
    cout<<"Enter the opearations u want to perform\n +\n-\n*\n/\n%\n";
    cin>>op;
    switch(op)
{
    case '+':
        cout<<"Sum of"<<n1<<"and"<<n2<<"is"<<n1+n2;
        break;

    case '-':
         cout<<"Difference between"<<n1<<"and"<<n2<<"is"<<n1-n2;
        break;

    case '*':
         cout<<"product of"<<n1<<"and"<<n2<<"is"<<n1*n2;
        break;

    case '/':if (n2==0)cout<<"Division by Zero not possible";
        else
        cout<<"quotient of"<<n1<<"and"<<n2<<"is"<<n1/n2;
        break;

    case '%':if (n2==0)cout<<"Division by Zero not possible";
        else
        cout<<"remainder when"<<n1<<"is divided by"<<n2<<"is"<<n1%n2;
        break;

    default:
        cout<<"Invalid Input";
}

    }