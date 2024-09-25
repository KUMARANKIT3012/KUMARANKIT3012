#include<iostream>
using namespace std;
int main(){
    char ch;
    float n1,n2;
    cout<<"enter the operand + - * / :";
    cin>>ch;
    cout<<"enter two number";
    cin>>n1>>n2;

    switch(ch){
        case '+':
        cout<<n1<<'+'<<n2<<'='<<n1+n2;
        break;
        case '-':
        cout<<n1<<'-'<<n2<<'='<<n1-n2;
        break;
        case '*':
        cout<<n1<<'*'<<n2<<'='<<n1*n2;
        break;
        case '/':
        cout<<n1<<'/'<<n2<<'='<<n1/n2;
        break;
        default:
        cout<<"invalid"<<endl;
        break;
    }
}