#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"Enter the element no. "<<i+1;
        cin>>arr[i];

    }
    cout<<endl;
    cout<<"Your array is: ";
    //printing array
    for(int i=0;i<n;i++){

        if(i==0){
            cout<<"[";
        }
        if(i!=n-1) {
            cout << arr[i] << ",";
        }
        if(i==n-1){
            cout<<arr[i];
            cout<<"]";
        }
    }
}