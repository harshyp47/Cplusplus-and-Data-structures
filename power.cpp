#include <iostream>
using namespace std;

int main(){

    int x=1; //x is answer

    int arr[2]; //arr=[base,exponant]

    cout<<"::CALCULATING POWER::";
    cout<<endl;
    cout<<"Enter base and exponant in space separated form: ";
    for(int i=0;i<2;i++){
        cin>>arr[i];
    }
    int n=arr[1];

    while(n!=0){
        x=x*arr[0];
        n=n-1;
    }
    cout<<endl;
    cout<<"Your answer is: ";
    cout<<x;
}