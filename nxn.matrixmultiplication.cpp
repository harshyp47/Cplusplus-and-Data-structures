#include <iostream>
using namespace std;
int main(){
    cout<<"Enter the order of n x n matrix: ";
    int n;
    cin>>n;
    int arr1[n][n];
    cout<<"Enter the first matrix:"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr1[i][j];
        }
    }

    cout<<"Enter the first matrix:"<<endl;
    int arr2[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr2[i][j];
        }
    }

    for(int i=0;i<n;i++){
        cout<<endl;
        for(int j=0;j<n;j++){
            int elem= 0;
            for(int k=0;k<n;k++){
                elem=elem+arr1[i][k]*arr2[k][j];

            }
            cout<<elem<<"  ";

        }
    }


}