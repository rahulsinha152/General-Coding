#include <iostream>
#include <string>

using namespace std;



int main(){

    string str;
    cin>>str;
    for (int i=0;i<str.size();i++){

            str[i]=str[i]-32;

    }
    cout<<str;



}


