//Finding a substring in a given string. Whether it contains or not.

#include <iostream>
#include <string>
using namespace std;
int main(){
    string str="Harsh";  //String to be searched
    string sentence="My name is Harsh. Harsh is very serious to his studies. Harsh is smart";  //String to be found in
    size_t found = 0;

    do{
        found = sentence.find(str,found);
        if(found!=string::npos){
            cout<<"String found at:"<<found<<endl;
            found=found+1;
        }
    }
    while(found!=string::npos);
}