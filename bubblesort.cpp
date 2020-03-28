#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"BUBBLE SORT"<<endl;
    cout<<"Enter the number of elements: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements in space separated way:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int k=0;k<n-2;k++){
        int flag=0;
        for(int i=0;i<n-1-k;i++){
            if(arr[i]>arr[i+1]){
                swap(arr[i],arr[i+1]);
                flag=1;
            }

        }
        if(flag==0){
            break;
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