#include <iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5}; //This is my array
    int size=5;
    cout<<"Enter the element to be deleted:";
    int x; //Element to be deleted.
    cin>>x;

    for(int i=0;i<5;i++){
        if(arr[i]==x){
            for(int j=i;j<size-1;j++){

                arr[j]=arr[j+1];

            }
            break;
        }




    }
    arr[size-1]=0;
    //Printing the array
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";

    }
}
