#include <iostream>
using namespace std;
int main(){

    int a=0;
    int b=1;
    int c;

    cout<<"::FIBONACCI SERIES::"<<endl;
    cout<<"Enter the value of length: ";
    int n;
    cin>>n;
    int arr[n];
    arr[0]=a;
    arr[1]=b;

    cout<<b<<" ";
    for(int i=0;i<n-1;i++){
        c=b;
        b=a+b;
        cout<<b<<" ";
        arr[i+2]=b;
        a=c;
    }
    int sum=0;
    cout<<endl;
    cout<<n<<"th fibonnaci number: ";
    cout<<b;
    cout<<endl;
    cout<<"Sum of fibonacci series is: ";
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
    }
    cout<<sum;
}