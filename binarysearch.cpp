#include<iostream>
using namespace std;
int binarySearch(int arr[],int size,int key){
    int start=0;
    int end=size-1;
    int mid=(start+end)/2;
    while(start<=end){

        if(arr[mid]==key){
            return mid;
        }
        if(key>arr[mid]){
            start = mid+1;
        }
        else{
            end = mid-1;
        }
        mid = (start + end)/2;
    }return -1;
}
int main(){

int odd[5]={1,3,5,6,7};
int even[6]={1,4,5,6,11,33};

int index= binarySearch(odd,5,7);
cout<<index;
}