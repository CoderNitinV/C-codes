#include<iostream>
using namespace std;

int main(){
    int a ,b; 
    char operation;
    cin>>a>>b>>operation;

    switch (operation)
    {
    case '+' : cout<<a+b<<endl;
        break;

    case '-' :cout<<a-b<<endl;
        break;

    case '*' :cout<<a*b<<endl;
        break;

    case '/' :cout<<a/b<<endl;      

    default:
        break;
    }
}