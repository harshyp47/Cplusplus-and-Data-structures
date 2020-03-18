#include <iostream>
using namespace std;

int factorial(int);

int main(){
    cout<<"Enter an integer number: ";
    int n;
    cin>>n;
    int obj = factorial(n);
    cout<<"Factorial of"<<" "<<n<<" "<<"is: "<<obj;
}

int factorial(int n){
    int fact=1;
    for(int i=1;i<n+1;i++){
        fact=fact*i;
    }
    return fact;
}