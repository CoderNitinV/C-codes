#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
     switch(1) {

       case 1: if(n>=100){
           int sau = n/100;
           cout<<"100 ruppe notes = "<<sau<<endl;
           }           ;

       case 2: if(n%100>=50){
            int pachas = (n%100)/50;
            cout<<"50 ruppe notes = "<<pachas<<endl;

       }    
       case 3: if((n%100)%50>=20){
           int bees = ((n%100)%50)/20;
           cout<<"20 ruppe notes = "<<bees<<endl;

       }
    }
}