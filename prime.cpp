#include <iostream>
using namespace std;
int main(){
    cout<<"Enter a number to check if it's prime:";
    int n;
    cin>>n;
    for(int i=2;i<n/2;i++){
        if(n%i==0){
            cout<<"Number is prime";
            return 0;
        }
    }
    if(n==1){
        cout<<"Number is not prime.";
    }
    else {
        cout << "Number is not a prime.";
    }
}