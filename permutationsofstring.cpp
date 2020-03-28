//Finding permutations of a string.
#include <iostream>
#include <string.h>
using namespace std;
void permute(string a, int l, int r){

    // Base case
    if (l == r){
        cout<<a<<endl;
        if(a=="  "){
            cout<<"Number Found";
            exit(0);
        }
    }

    else
    {
        // Permutations made
        for (int i = l; i <= r; i++)
        {

            // Swapping done
            swap(a[l], a[i]);

            // Recursion called
            permute(a, l+1, r);

            //backtrack
            swap(a[l], a[i]);
        }
    }
}
int main(){
    string str;
    cout<<"Enter the string to find its permutations:: ";
    cin>>str;
    
    permute(str, 0, str.size()-1);
}