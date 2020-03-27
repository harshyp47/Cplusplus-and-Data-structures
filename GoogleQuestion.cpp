/* PROBLEM STATEMENT: Checking if any pair of element is able to add up to SUM. First input line is number of element, second line is array and 3rd one is SUM
 4
 1 2 4 4
 8
 */

#include <iostream>
using namespace std;
bool sumcheck(int *,int, int);
void merge(int arr[], int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 =  r - m;
    int L[n1], R[n2];
    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1+ j];
    i = 0;
    j = 0;
    k = l;
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int l, int r)
{
    if (l < r)
    {

        int m = l+(r-l)/2;

        mergeSort(arr, l, m);
        mergeSort(arr, m+1, r);

        merge(arr, l, m, r);
    }
}


int main(){
    int n,sum;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cin>>sum;


    mergeSort(arr, 0, n-1);
    if(sumcheck(arr,n,sum)){
        cout<<"YES";
    }

    else{
        cout<<"NO";
    }



}



bool sumcheck(int *arr,int n,int sum){
    int low=0;
    int high=n-1;
    for(int i=0;i<n-2;i++) {
        while (low < high) {
            int s = arr[low] + arr[high];
            if (s == sum) {

                return true;
            }
            low++;
        }

        high=high-1;
    }


    return false;
}