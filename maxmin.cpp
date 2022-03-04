#include<iostream>
using namespace std;
int main()
{
int n;
cin>>n;
int arr[10];
for(int i=0;i<n;i++){
    cin>>arr[i];

}int maxi= INT_MIN;
int mini=INT_MAX;
for(int i=0;i<n;i++){
 maxi = max(maxi , arr[i]);
 mini = min(mini , arr[i]);
}
cout<<"Maximum no. is "<<maxi<<endl;
cout<<"minimum no. is "<<mini<<endl;

}