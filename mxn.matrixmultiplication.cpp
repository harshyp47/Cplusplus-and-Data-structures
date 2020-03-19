#include <iostream>
using namespace std;
int main(){
    cout<<":::MATRIX MULTIPLICATION:::"<<endl;
    cout<<"Caution: Enter only valid data. Bugs are not fixed :/"<<endl;
    int arr[2];


    //Input of 1st Matrix
    cout<<"Enter the size of the 1st matrix (m X n): ";
    for(int i=0;i<2;i++){
        cin>>arr[i];  //arr=[m,n,n,p]
    }
    cout<<"Enter 1st Matrix: "<<endl;
    int mat1[arr[0]][arr[1]];
    for(int i=0;i<arr[0];i++){
        for(int j=0;j<arr[1];j++){
            cin>>mat1[i][j];
        }
    }


    //Input of 2nd Matrix
    cout<<"Enter the size of the 2nd matrix (n X p): ";
    for(int i=0;i<2;i++){
        cin>>arr[i+2];  //arr=[m,n,n,p]
    }
    if(arr[1]!=arr[2]){
        cout<<"Size is not valid, Run the program again :("<<endl;
        return 0;
    }
    cout<<"Enter 2nd Matrix: "<<endl;
    int mat2[arr[2]][arr[3]];
    for(int i=0;i<arr[2];i++){
        for(int j=0;j<arr[3];j++){
            cin>>mat2[i][j];
        }
    }

cout<<"Your answer is:";
    cout<<endl;
    //Matrix Multiplication Algorithm
    int ans[arr[0]][arr[3]];
    for (int i = 0; i < arr[0]; i++)
    {
        for (int j = 0; j < arr[3]; j++)
        {
            ans[i][j] = 0;
            for (int x = 0; x < arr[1]; x++)
            {
                *(*(ans + i) + j) += *(*(mat1 + i) + x) *
                                     *(*(mat2 + x) + j);
            }
        }
    }
    for (int i = 0; i < arr[0]; i++)
    {
        for (int j = 0; j < arr[3]; j++)
        {
            cout << *(*(ans + i) + j) << " ";
        }
        cout << "\n";
    }



}