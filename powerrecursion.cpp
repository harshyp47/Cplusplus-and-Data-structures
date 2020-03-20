#include <iostream>
using namespace std;

long int pow(int,int);
int main(){



    int arr[2]; //arr=[base,exponant]

    cout<<"::CALCULATING POWER USING RECURSION::";
    cout<<endl;
    cout<<"Enter base and exponant in space separated form: ";
    for(int i=0;i<2;i++){
        cin>>arr[i];
    }
    int n=arr[1];
    cout<<endl;
    cout<<"Your answer is: ";
    cout<<pow(arr[0],n);
}

long int pow(int base,int exp){

    if(exp!=0){
        return base*pow(base,exp-1);
    }
    else{
        return 1;
    }
}