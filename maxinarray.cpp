#include <iostream>
using namespace std;
int main(){
    int n;
    int max=0;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter space separated values: ";
    for(int i=0;i<n;i++){

        cin>>arr[i];
    }

    for(int i=0;i<n;i++){
        if(max<arr[i]){
            max=arr[i];
        }
        else{
            continue;
        }

    }
    cout<<endl;
    cout<<"Max value in array is: "<<max;
}