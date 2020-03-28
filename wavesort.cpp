#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"WAVE SORT"<<endl;
    cout<<"Enter the number of elements: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements in space separated way:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=0;i<n;i+=2){

        //LEFT SIDE SWAPPING
        if(arr[i]>arr[i-1] && i!=0){
            swap(arr[i],arr[i-1]);
        }

        //RIGHT SIDE SWAPPING
        if(arr[i]>arr[i+1] && i!=n-1){
            swap(arr[i],arr[i+1]);
        }
    }

    //printing the array
    cout<<endl;
    cout<<"Your bubble sort answer is:";
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}