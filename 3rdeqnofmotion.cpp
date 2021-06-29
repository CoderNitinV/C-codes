#include<iostream> 
using namespace std;
int main()  
{
    float s,v,u,a;

    cout<<"Enter initial velocity , final velocity and acceleration simaltaneously"<<endl;
    cin>>u>>v>>a;

    s=(v*v - u*u)/(2*a);
    cout<<"The speed is ="<<s;
    return 0;

}  