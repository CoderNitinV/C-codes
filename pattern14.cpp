#include<iostream>
#include<stdio.h>
using namespace std;

//Dabang Pattern!

// 1 2 3 4 5 5 4 3 2 1
// 1 2 3 4 * * 4 3 2 1
// 1 2 3 * * * * 3 2 1
// 1 2 * * * * * * 2 1
// 1 * * * * * * * * 1 

int main(){

    int n;
    cin>>n;

    int i=1;
    while(i<=n){
        int j=1;
        while(j<=n-i+1){
        
            cout<<j;
            j++;
        }
        int start =2*(i-1);
        while(start){
            cout<<"*";
            start--;
        }
        int k=n-i+1;
        while(k>0){
            cout<<k;
            k--;
        }
    i++;
        cout<<endl;}
        

    }
