
//Separating integer values by Delimeter ','
#include <iostream>
#include <string>
#include <sstream>
using namespace std;
int main(){
    string str;
    int n;
    cout<<"Enter the size of array:";
    cin>>n;
    cout<<"Enter space separated number values:";
    cin>>str;
    string arr[n];
    stringstream a(str);
    int i=0;

    while(a.good()){
        string substr;
        getline(a,substr,',');
        arr[i]=substr;
        i++;
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }

}