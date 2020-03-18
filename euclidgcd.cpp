#include <iostream>
using namespace std;
long int euclid(int,int);
int main(){
    int arr[2];
    cout<<"Enter space separated numbers to calculate g.c.d. :";
    for(int i=0;i<2;i++){
        cin>>arr[i];
    }

    cout<<"g.c.d of "<<arr[0]<<" and "<<arr[1]<<" is: "<<euclid(arr[0],arr[1]);
}

long int euclid(int a,int b){
    if(a==0){
        return b;
    }
    else{
        return euclid(b%a,a);
    }
}