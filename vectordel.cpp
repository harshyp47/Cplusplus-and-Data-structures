#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> v{1,2,3,4,5};
    cout<<"Enter the element to be deleted:";
    int x; //Element to be deleted
    cin>>x;

    for(int i=0;i<5;i++){
        if(v[i]==x){
            v.erase(v.begin()+i);
            break;
        }

    }

    //Printing vector

    for(auto it=v.begin();it!=v.end();it++){
        cout<<*it<<" ";
    }

}