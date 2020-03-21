#include <iostream>
using namespace std;
int main()
{
    int limit;
    int n;
    cout<<":RANDOM NUMBER ARRAY GENERATOR::"<<endl;
    cout<<"Enter limit:";
    cin>>limit;
    cout<<"Enter the size of array:";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        arr[i]=rand()%limit;
    }

    cout<<"Your random array is::"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }



    return 0;
} 
