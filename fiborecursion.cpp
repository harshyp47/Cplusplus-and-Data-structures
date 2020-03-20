#include <iostream>
using namespace std;
int fibo(int);
int main(){
    cout<<"::FIBONACCI USING RECURSION::"<<endl;
    int n;
    cout<<"Enter the length:";
    cin>>n;
    cout<<n<<"th fibonacci number is: ";
    cout<<fibo(n);

}

int fibo(int n){
    if(n<=1){
        return n;
    }
    else{
        return fibo(n-1)+fibo(n-2);
    }
}