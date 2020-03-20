#include <iostream>
using namespace std;
int main(){
    cout<<"Enter the size of an array:";
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
    }

    cout<<"Sum value is: "<<sum;
}