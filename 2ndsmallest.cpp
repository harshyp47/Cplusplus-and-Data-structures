#include <bits/stdc++.h>
using namespace std;

void print2Smallest(int arr[], int arr_size)
{
    int i, first, second;




    first = second = INT_MAX;
    for (i = 0; i < arr_size ; i ++)
    {

        if (arr[i] < first)
        {
            second = first;
            first = arr[i];
        }


        else if (arr[i] < second && arr[i] != first)
            second = arr[i];
    }

    bool check= false;
    for(int i=0;i<arr_size;i++){
        if(arr[i]==arr[0]){
            continue;
        }

        else {
            check = true;
        }


    }
    if(!check){
        cout<<"NO";
    }

    if(check) {
        if (arr_size == 1) {
            cout << "NO";
        } else {
            cout << second;
        }
    }

}


int main()
{

    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    print2Smallest(arr, n);
    return 0;
}

