#include<iostream>
using namespace std;

int main()
{
int n;
cin>>n;
int arr[10];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
 
int start=0;
int end=n-1;
while(start<=end){
    swap(arr[start],arr[end]);
    end--;
    start++;
}
for(int i=0; i<n;i++){
    cout<<arr[i]<<" ";
}
}