#include <iostream>
using namespace std;

int * InsertionSort(int [],int);
int main(){
    int n;
    cout<<"::INSERTION SORT::";
    cout<<endl;
    cout<<"Enter no of element:"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter space separated values:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    InsertionSort(arr,n);
    cout<<"Sorted Array is: "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }


}

int * InsertionSort(int arr[],int n){
    for(int i=1;i<n;i++)
    {
     int value=arr[i];
     int hole=i;
     while(hole>0 && arr[hole-1]>value){
         arr[hole]=arr[hole-1];
         hole=hole-1;
     }
     arr[hole]=value;
    }
    return arr;
}