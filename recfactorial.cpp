#include <iostream>
using namespace std;
long int recfact(int);
int main(){
    cout<<"Enter the number to calculate it's factorial: ";
    int n;
    cin>>n;
    cout<<"Your answer is: ";
    cout<<recfact(n);
}

long int recfact(int n){
    if(n>1){
        return n*recfact(n-1);
    }

    else{
        return 1;
    }

}