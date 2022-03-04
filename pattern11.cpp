#include<iostream>
using namespace std;

int main (){
int n;
cout<<"Enter the value you want"<<endl;
cin>>n;
int i=1;
while(i<=n){
    int space= n-i;
    //print space
    while(space){
        cout<<" ";
        space--;
    }
    //print * 
    int j=1;
    while(j<=i){
        cout<<"*";
        j++;
    }cout<<endl;
    i++;
}
}