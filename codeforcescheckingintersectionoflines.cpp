#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    long double arr[n][4];
    string slope[n];
    for(int i=0;i<n;i++){
        for(int j=0;j<4;j++){
            cin>>arr[i][j];
        }
        if(arr[i][2]-arr[i][0]!=0) {
            slope[i] = (arr[i][3] - arr[i][1]) / (arr[i][2] - arr[i][0]);
        }
        else{
            slope[i]="p";
        }
    }
    int index;
    bool check= false;
    for(int i=0;i<n;i++){
        if(slope[i]==slope[0]){
            continue;
        }
        else {
            index = i;
            check = true;
        }
    }

    if(check){
        cout<<"INTERSECTION"<<endl;
        for(int i=0;i<4;i++){
            cout<<arr[0][i]<<" ";
        }
        cout<<endl;
        for(int i=0;i<4;i++){
            cout<<arr[index][i]<<" ";
        }
    }

    else{
        cout<<"NOT INTERSECTION";
    }
}