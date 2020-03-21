#include <iostream>
using namespace std;

int Random(int,int);
int main(){

    int lb;
    int ub;
    int n;
    cout<<"::RANDOM NUMBER ARRAY BETWEEN A RANGE::";
    cout<<endl;
    cout<<"Enter lower bound(Exclusive):";
    cin>>lb;
    cout<<"Enter upper bound(Exclusive):";
    cin>>ub;

    cout<<"Enter the size of array:";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        arr[i]=Random(lb,ub);
    }
    cout<<endl;
    cout<<"Your random array between ("<<lb<<","<<ub<<") : "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int Random(int lb,int ub){

    return lb+1+(rand()%(ub-lb-1));

    }